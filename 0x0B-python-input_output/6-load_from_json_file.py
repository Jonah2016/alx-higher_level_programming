#!/usr/bin/python3
"""
function that creates an Object from a \u201cJSON file\u201d
"""

import json


def load_from_json_file(filename):
    """crate and object from a "JSON file" """
    with open(filename, 'r', encoding='utf-8') as f:
        return json.load(f)
