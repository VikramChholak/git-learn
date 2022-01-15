cmake_minimum_required(VERSION 3.22.1)

project(git-learner VERSION 0.1.0)

configure_file(git-learner.h.in git-learner.h)

add_executable(git-learner src/main.c)

