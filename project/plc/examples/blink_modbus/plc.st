PROGRAM Blink
  VAR
    led_num AT %MW0: UINT;
  END_VAR
  VAR
    blink_led: BOOL;
    TON0: TON;
    TOF0: TOF;
    LED_ON0: LED_ON;
    LED_OFF0: LED_OFF;
    R_TRIG1: R_TRIG;
    F_TRIG1: F_TRIG;
  END_VAR

  TON0(EN := TRUE, IN := NOT(blink_led), PT := T#1s);
  TOF0(EN := TON0.ENO, IN := TON0.Q, PT := T#1s);
  blink_led := TOF0.Q;
  R_TRIG1(CLK := blink_led);
  LED_ON0(EN := R_TRIG1.Q, LED := led_num);
  F_TRIG1(CLK := blink_led);
  LED_OFF0(EN := F_TRIG1.Q, LED := led_num);
END_PROGRAM


CONFIGURATION blink_modbus

  RESOURCE resource1 ON PLC
    TASK task0(INTERVAL := T#50ms, PRIORITY := 0);
    PROGRAM instance0 WITH task0: Blink;
  END_RESOURCE
END_CONFIGURATION
