boolean ModemIN() {
  delay (300);
  Serial1.println("ATE0"); // Отключение ЭХА на модеме 1 включение по умолчанию
  ReadPort(" ");
  Serial1.println("ATV0"); // Развернутый или сжатый код ответа 1 развернутый по умолчанию
  // ReadPort(" ");
  // OutModem = SaveModem("AT+CPAS", " ", DelayMOD);
  OutModem = ReadPort("");
  Serial.println("---------");
  Serial.println(OutModem);
  Serial.println("+++++++++");
  if (OutModem == "0") {
    Serial.print("== ");
    Serial.print(OutModem);
    Serial.println(" ==");
    Serial1.println("ATE1");
    ReadPort(" ");
    Serial1.println("ATV1");
    ReadPort(" ");
    return true;
  }
  else {
    Serial.print(">> ");
    Serial.print(OutModem);
    Serial.println(" <<");
    return false;
  }

}
