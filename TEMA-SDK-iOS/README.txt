
1. Create a user account at Flurry http://www.flurry.com/dev/signup.html 

2. integrate TEMA SDK
   a. unzip and drag the TEMA-SDK directory into your project's Xcode window
      Select "Copy items into destination group's folder" and "Create groups for any added folders"
   b. In your Application Delegate:
      #import "JunoTaskController.h"
      - (void)applicationDidFinishLaunching:(UIApplication *)application {
		...
            	[JunoTaskController trackPayPerEngagement];
		...
      }

3. Register the application as advertiser in the Flurry account

4. Test and activate the campaign.

