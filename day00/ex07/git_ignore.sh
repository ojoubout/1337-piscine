#!/bin/sh

git status --ignored --short | grep "\!\!" | sed 's/\!\! //'
