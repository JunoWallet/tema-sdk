
1. Create a user account at Flurry http://www.flurry.com/dev/signup.html 

2. Integrate TEMA SDK
   a. Include the JunoTaskController.jar into your project's java build path.
      (Projects> Properties> Java Build Path> Add External JARs)

   b. In your Application Activity:

      import android.content.Context;
      import com.junobe.android.tema.JunoTaskController;

      public class Foo extends Activity {
        public void onCreate(Bundle icicle) {
          ...
          // 1. initialization
          JunoTaskController.init((Context)this);

          // 2.1 call trackPayPerEngagement with app id.
          String applicationId = "12345678";  // example application id
          JunoTaskController.trackPayPerEngagement(applicationId);

          // 2.2 alternatively, specify event names to track
          JunoTaskController.trackPayPerEngagement(applicationId, "testEvt");
          ...
        }
      }

3. Register the application as advertiser in the Flurry account.

4. Test and activate the campaign.

