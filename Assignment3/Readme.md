# Assignment 4

## Author
Перова Варвара, группа 25.Б81-мм

## Contacts
st141846@student.spbu.ru

## Description
Based on the Transformers hierarchy from Assignment 3.
Key features implemented:
- Base class `Transformer` is now abstract (contains pure virtual method).
- Implemented virtual methods (`transform`, `fire`, `ultimate`) for all derived classes.
- Added operator `<<` overloading for printing objects to streams.
- Added constructor overloading (default and parameterized).
- Unit tests covering virtual method calls and vector of pointers.

## Build

#### To build the application:
make

#### To build the tests:
make test

#### To format code (astyle):
make format

## Run

#### Application:
./transformers

#### Tests:
./test-transformers

