cmake_minimum_required(VERSION 3.27)

project(MalvaderBank)

add_executable(banquinho Menu.c
                Menu.h
                Cliente/MenuC.h
                Cliente/MenuC.c
                DataBase/Data.h
                DataBase/Data.c
                Funcionario/MenuF.h
                Funcionario/MenuF.c
                Model/Models.h
                Program.c)
