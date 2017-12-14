// Copyright (C) 2017 by Sunil

#include "gnu/profile.h"

#include <iostream>

using namespace std;
using namespace bazel101::profile;

Profile::Profile() { }

Profile::~Profile() { }

void Profile::describe() {
  cout << "Gnu profiles...." << endl;
}
