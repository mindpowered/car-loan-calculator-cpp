
carloancalculator
=================
Car Loan Auto Loan Payment Calculator - Calculate financing on a new car including trade-in and taxes

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [Licensing](#licensing)
* [About](#about)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Support](#support)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/car-loan-calculator-cpp](https://github.com/mindpowered/car-loan-calculator-cpp)
- Documentation: [https://mindpowered.github.io/car-loan-calculator-cpp](https://mindpowered.github.io/car-loan-calculator-cpp)

# Licensing
To obtain a version of this package under the MIT License, follow the instructions to [get a license][purchase]. The MIT License has no restrictions on commercial use and permits reuse within proprietary software.

# About
This package aims to calculate the following:
- Given the price of a new car, what is the payment?
- Given a certain payment, what is the max price of the new car?

The calculation takes into account:
- The interest rate of the car loan
- The term (length) of the car loan
- Applicable Taxes
- Trade-in value and amount owing
- Down payment

# Requirements
- Bazel - https://www.bazel.build/
- Haxe 4.1.1
- Neko
- hxcpp - https://lib.haxe.org/p/hxcpp/
- g++


Third-party dependencies may have additional requirements.

# Installation
Add rules to WORKSPACE file ...

```
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = 'maglev',
  remote = 'https://github.com/mindpowered/maglev-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'haxecpp',
  remote = 'https://github.com/mindpowered/haxecpp-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'carloancalculator',
  remote = 'https://github.com/mindpowered/car-loan-calculator-cpp.git',
  branch = 'master',
)
```

Reference dependency in BUILD file ...

```
    deps = [
        ...
        "@carloancalculator//:carloancalculator"
        ...
    ],
```


# Usage
```cpp
#include <mindpowered/carloancalculator/CarLoanCalculator.h>

auto clc = new CarLoanCalculator();
clc->CalcPayments(33429, 4500, 0, 10000, 2000, 0.7, 3.99);
delete clc;
```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.



[bugs]: https://github.com/mindpowered/car-loan-calculator-cpp/issues
[contact]: https://mindpowered.dev/support.html?ref=car-loan-calculator-cpp/
[docs]: https://mindpowered.github.io/car-loan-calculator-cpp/
[licensing]: https://mindpowered.dev/?ref=car-loan-calculator-cpp
[purchase]: https://mindpowered.dev/purchase/
