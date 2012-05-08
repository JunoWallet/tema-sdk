* Create a user account at Flurry http://www.flurry.com/dev/signup.html

* Integrate TEMA SDK
    - Unzip and drag the TEMA-SDK directory into your project's Xcode window.
    - Select "Copy items into destination group's folder" and "Create groups for any added folders".
    - In your Application Delegate:
	
			#import "JunoTaskController.h"
			- (void)applicationDidFinishLaunching:(UIApplication *)application {
				// AppStoreAppId example: 314477780
				[JunoTaskController trackPayPerEngagement:AppStoreAppId];
			}
		
* Register the application as advertiser in the Flurry account.
* Test and activate the campaign.
