void
LcdDisplayStatus( long enabledTime )
{
    string str;

    sprintf(str,"VBatt %7.2f   ", nAvgBatteryLevel/1000.0 );
    displayLCDString(0, 0, str);
    if( bIfiAutonomousMode )
        sprintf(str, "Autonomous %.2f", (nPgmTime-enabledTime)/1000.0);
    else
        sprintf(str, "Driver     %.2f", (nPgmTime-enabledTime)/1000.0);
    displayLCDString(1, 0, str);
}
