# Complexity Generator
A program that generates a semi random array to use for computing time complexities.

## Usage
To begin we must generate a seed. We can do this by executing the following command:
```
./genSeed > seed
```
This will create a file called seed that contains our seed.
It is important to use this for all our test cases as this will allow us to make larger random testcases without regenerating previous numbers.
For example if we generate 500 ints, if we generate 1000 the first 500 numbers will be the same. This allows us to test complexities fairly.

We can now generate our testcases as follows:
```
./testCaseGenerator 50 < seed > test50.in
```
This will generate a testcase of 50 numbers and store it in test50.in

## Errors
If you get permission denied errors you can fix this as follows:
```
sudo chmod +rwx genSeed testCaseGenerator
```
