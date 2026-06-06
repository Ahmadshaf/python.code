#import  numpy as np
#from sklearn.linear_model import LinearRegression
# # example data (x= input is independent  , y= output y in dependet to x )
# x =np.array([[1], [2], [3],[4],[5]])
# y=np.array([2,4,5,4,5])
 


#  #create model
# core= LinearRegression()


# # train ,model
# core.fit(x,y)

# #predict 
# y_pred= core.predict(x)

# print("predictions: =", y_pred)
# print("slope (m):", core.coef_)
# print("intercept (b) : ", core.intercept_)
##regression model #



#in this part we will make a model about summarizing big paragraphs 
from sklearn.base import BaseEstimator, TransformerMixin
from transformers import pipeline
import torch

class HuggingFaceSummarizer(BaseEstimator, TransformerMixin):
    def __init__(self, model_name="sshleifer/distilbart-cnn-12-6", max_length=40, min_length=10):
        self.model_name = model_name
        self.max_length = max_length
        self.min_length = min_length
        self.summarizer = None
        self.device = 0 if torch.cuda.is_available() else -1

    def fit(self, X, y=None):
        # The fit() method should just load a pre-trained model into memory
        # device=0 targets free GPU if you are using a Colab/Kaggle notebook.
        if self.summarizer is None:
            self.summarizer = pipeline("summarization", model=self.model_name, device=self.device)
        return self

    def transform(self, X):
        # Ensure model is loaded
        if self.summarizer is None:
            self.summarizer = pipeline("summarization", model=self.model_name, device=self.device)

        # Process texts and extract summary strings
        results = self.summarizer(
            X,
            max_length=self.max_length,
            min_length=self.min_length,
            truncation=True
        )
        return [res['summary_text'] for res in results]
X_long_texts = [
    "I've been using this vacuum cleaner for about three weeks now. At first, I struggled with the attachments, and the manual wasn't very clear. However, once I figured out how the motorized brush works, it easily picked up all the pet hair on my rugs. Overall, it's a solid machine, though a bit heavy to carry up the stairs.",
    "The delivery was delayed by four days, which was incredibly frustrating because I needed it for a weekend trip. When the backpack finally arrived, the zipper snagged immediately. I tried to fix it, but the fabric feels cheap and flimsy. I will definitely be returning this and asking for a full refund.",
]

y_labels = ["positive", "negative"]    

from sklearn.pipeline import Pipeline
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import LogisticRegression

# 1. Define the Pipeline
# Naming the variable 'classification_pipeline' avoids possible conflict with transformers.pipeline function
classification_pipeline = Pipeline([
    ('summarizer', HuggingFaceSummarizer(max_length=30, min_length=10)),
    ('vectorizer', TfidfVectorizer()), # Used to encode build numerical text representations, needed for ML
    ('classifier', LogisticRegression())
])
# 2. Train the Pipeline
# This downloads the model, summarizes the long texts on the GPU,
# vectorizes the short summaries, and trains a classifier.
classification_pipeline.fit(X_long_texts, y_labels)

print("Pipeline trained successfully on summarized reviews!")