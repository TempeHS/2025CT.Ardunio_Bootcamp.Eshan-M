bool gameOver() {
   if (y <= 11 || y >= 59 || x <=1 || x >=119 )
   {
      Oled.setCursor(60, 35);
      Oled.print("GAME OVER!"); 
     return true;
   } 
   else {
      return false;
   }
   


  }