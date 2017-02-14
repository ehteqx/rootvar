#!/bin/python
import ROOT

cppFCode = '''
void f() {
    std::cout << "Hello World from PyROOT" << std::endl;

}
'''

ROOT.gInterpreter.Declare(cppFCode)
ROOT.f()
