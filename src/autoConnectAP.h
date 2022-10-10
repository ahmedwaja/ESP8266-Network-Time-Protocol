#ifndef autoConnectAP_H_
#define autoConnectAP_H_

void autoConnectAP()
{

wm.setConfigPortalTimeout(timeout);

  if (!wm.autoConnect("AutoConnectAP", "rust123456789"))
  {
    Serial.println("Failed to connect");
    ESP.restart();
  }
  else
  {
    Serial.println("connected...yeey :)");
  }
}
#endif