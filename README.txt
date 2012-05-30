# TEMA SDK

## iPhone (TEMA-SDK-iOS)

1. Create a user account at Flurry: [http://www.flurry.com/dev/signup.html](http://www.flurry.com/dev/signup.html)
  
2. integrate TEMA SDK
	a. unzip and drag the TEMA-SDK directory into your project's Xcode window, select "Copy items into destination group's folder" and "Create groups for any added folders"
	b. In your Application Delegate:

		#import "JunoTaskController.h"
		- (void)applicationDidFinishLaunching:(UIApplication *)application {
			...
			[JunoTaskController trackPayPerEngagement];
			...
		}

3. Register the application as advertiser in the Flurry account

4. Test and activate the campaign.

<br>
## Android (TEMA-SDK-Android)

1. Create a user account at Flurry: [http://www.flurry.com/dev/signup.html](http://www.flurry.com/dev/signup.html)

2. Integrate TEMA SDK
	a. Include the JunoTaskController.jar into your project's java build path (Projects> Properties> Java Build Path> Add External JARs)
	b. In your Application Activity:

		import android.content.Context;
		import com.junobe.android.tema.JunoTaskController;

		public class Foo extends Activity {
			public void onCreate(Bundle icicle) {
				...
				// 1. initialization
				JunoTaskController.init((Context)this);

				// 2 call trackPayPerEngagement.
				JunoTaskController.trackPayPerEngagement();
				...
			}
		}

3. Register the application as advertiser in the Flurry account.

4. Test and activate the campaign.


