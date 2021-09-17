int[8] Lines = {3, 4, 5, 6, 7, 8, 9, 10};
int Reset = 11;

int Counter_Length = 8;

void setup() {
  Serial.begin(9600);
  
  for (int i = 0; i < Lines.size(); i++) {
    pinMode(Lines[i], OUTPUT);
    Serial.println("Line " + i + " Set";
    
  }

  pinMode(Reset, INPUT);
  Serial.println("Reset Pin Set");

  int num = 0;
  int binaryNum[];
}

void loop() {
   num++;
   binaryNum[] = decToBinary(num);

   for (int j = binaryNum; j < 0; j--) {
     Serial.print(binaryNum[j]);
     digitalWrite(Lines[j], binaryNum[j] == 1 ? HIGH : LOW);
      
   }

}

int[] decToBinary(int num) {
  int i = 0;
  int binaryNum[Counter_Length];
  
  while (n > 0) {
    binaryNum[i] = num % 2;
    num = num / 2;
    i++;
    
  }

  return binaryNUM[];

}

