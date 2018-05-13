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