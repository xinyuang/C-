1. namespace
      overload: functions using same name with different parameters
      namespace a {
          namespace b {
              namespace c {
                   }
           }
      }
      namespace A = a::b::c;
      unnamed namespace can only be used internally

2. pointer to a function
      void space(int count, char ch)
      {
	  for (; count; count--) std::cout << ch;
      }
          
      void (*fp1)(count, ch);
      fp1 = space;
      fp1(20,'=');

   " " is used for string
   ' ' is used for char 

3. pointer does not change the value of the address
   reference can change the value of the address
    string s1("Nancy");
    string s2("Clancy");
    string &rs = s1;
    string *ps = &s1;
    rs = s2; //change s1 value to "Clancy"
    ps = &s2; //s1 does not change

4. Class Inheritace
    public inheritance can visit public members but protected members can only be visited internally 
    private inheritance changes public&protected member of base class to private
    protected inheritance changes public&protected member of base class to protected
    multiple inheritances with same name, set the first father as defualt

5. overload function with same name and different parameters
   overriding derivative class redifines the virtual function of base class