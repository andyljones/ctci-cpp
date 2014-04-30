Having read [the C++ Primer](http://www.amazon.com/Primer-5th-Edition-Stanley-Lippman/dp/0321714113/), these are implementations of various exercises from [Cracking the Coding Interview](http://www.amazon.com/Cracking-Coding-Interview-Programming-Questions/dp/098478280X/) in C++. This'll hopefully serve as a good intro to C++ before I use it in anger on my next project. As a side-effect, this project is also a tutorial in vim and the Linux command line.

If for some mad reason you want to run this code yourself (such as if you're a future version of me),

 - Install vagrant
 - Pull the repo
 - Run `vagrant up` in the root directory. 
     - This may take some time; as of writing this readme, I have `bootstrap.sh` configured to install the entire boost library. Just in case.
 - Run `vagrant ssh` to get into the VM
 - Navigate to `/vagrant/1-strings` (for Chapter 1 exercises for example)
 - Make a build directory with `mkdir build`
 - Run `./runtests`
