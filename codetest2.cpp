#include <iostream>
#include <string>
class TextInput
{
private:
   std::string word;
public:
   virtual void add(char c) { 
    word += c; }
   std::string getValue() { 
       return word; }
};
class NumericInput : public TextInput
{
   void add(char c){
      if (('0' <= 'c') && (c <= '9'))
         TextInput::add(c);}
};
#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif