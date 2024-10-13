# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-src"
  "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-build"
  "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-subbuild/slint-populate-prefix"
  "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-subbuild/slint-populate-prefix/tmp"
  "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-subbuild/slint-populate-prefix/src/slint-populate-stamp"
  "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-subbuild/slint-populate-prefix/src"
  "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-subbuild/slint-populate-prefix/src/slint-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-subbuild/slint-populate-prefix/src/slint-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "B:/Repos/slint-projects/smart-home-dashboard/build/_deps/slint-subbuild/slint-populate-prefix/src/slint-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
