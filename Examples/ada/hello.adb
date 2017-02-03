-- In order to compile an ada program on a Linux system
-- do the following:  gcc - hello.adb
--                    gnatbind hello
--                    gnatlink hello
--                    gnatmake Hello.adb
with Ada.Text_IO; use Ada.Text_IO;
procedure Hello is
begin
  Put_Line("Hello World!");
end Hello;
