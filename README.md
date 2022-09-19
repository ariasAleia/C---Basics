# C++ Basics

Ok! Yes, again. A crush course in C++. And nop, this repo won't have a really detailed description of everything. Just the core concepts (more precisely scripts to remember how life looks with c++ glasses. 

But sth that can't miss: The quote of this repo (which we are trying to remember a little bit more often due to our constant overwhelming overthinking :P):


<p style="text-align:right"><b> "Building the plane while you fly it </b>"</p>

<p align="center">
<img src= "images/airplane-stock-700x700.jpg" alt="Euler" title="Euler" width="45%" height="50%">
<img src= "images/plane.jpg" alt="Euler" title="Euler" width="45%" height="50%">
</p>



I mean... Just begin and let's see what happens. As soon as you begin to move, the perspective will change.


And the tutorial we will follow can be found [here.](https://www.youtube.com/watch?v=vLnPwxZdW4Y)

## .exe Files. Why?

Well, the first difference that we can see between Python and C++ is that when we run our file with extension *.cpp*, we get another file with extension *.exe*. But this thing, didn't happen with Python, right? Yes. You are right. 

The *.exe* file is generated because C++ is a compiled language. The computer needs to generate a binary file (the .exe) in order to run it.

And why didn't it happen with Python? Well, Python is an interpreted language :)

But... We don't want to have alllll those *.exe* files in our repo, right? Yes. You are right. So... If we don't want to see sth, what do we do?... thinking.... Yes! We just ignore it! (Disclaimer: Sometimes (almost always) it doesn't work like that in real life :P (But we are coding so... haha yes, I like coding))

We can add those *.exe* file in a git ignore file so that we don't track them in the git repository.

```
#gitignore
*.exe
```