#!/usr/bin/python3
"""
This is the "5-test_indentation" module.
This module provides one fun, text_indentation(text).
"""


def text_indentation(text):
    """splits a text into lines along "?", ":", "." then 2 new lines"""
    if type(text) is not str:
        raise TypeError("text must be a string")
    flag = 0
    for i in text:
        if flag == 0:
            if i == ' ':
                continue
            else:
                flag = 1
        if flag == 1:
            if i == '?' or i == '.' or i == ':':
                print(i)
                print()
                flag = 0
            else:
                print(i, end="")
