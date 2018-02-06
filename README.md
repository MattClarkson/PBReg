PBReg
-----

Demo project, derived from [CMakeCatchTemplate](https://github.com/MattClarkson/CMakeCatchTemplate), used for [MPHYG002](http://rits.github-pages.ucl.ac.uk/research-computing-with-cpp/) CW1.

Build Instructions
------------------

These are left as an exercise for the student.

But, basically, if you CMake the project you end up with a SuperBuild structure
whereby, the top-level build folder contains the dependencies, and the
sub directory ```PBREG-build``` contains the build of this project.

So students should remember that once the build has completed for the first
time, they do NOT have to keep re-building dependencies like Boost or Eigen.
They would just run their build cycle (code, compile, code, compile etc) in the
  ```PBREG-build``` folder.
 
