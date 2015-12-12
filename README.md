# FabricTest
Demo app to show Fabric, Crashlytics, and Answers problem. Whenever these three Pods are included together in the Podfile, the application fails to build with duplicate symbol errors.

A copy of the full error is below.

```
Ld /Users/jlee/Library/Developer/Xcode/DerivedData/FabricTest-gvvejyxgkzewvzcwpyopzegofpnv/Build/Products/Debug-iphonesimulator/FabricTest.app/FabricTest normal x86_64
    cd /Users/jlee/Code/FabricTest
    export IPHONEOS_DEPLOYMENT_TARGET=9.2
    export PATH="/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/bin:/Applications/Xcode.app/Contents/Developer/usr/bin:/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin"
    /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator9.2.sdk -L/Users/jlee/Library/Developer/Xcode/DerivedData/FabricTest-gvvejyxgkzewvzcwpyopzegofpnv/Build/Products/Debug-iphonesimulator -F/Users/jlee/Library/Developer/Xcode/DerivedData/FabricTest-gvvejyxgkzewvzcwpyopzegofpnv/Build/Products/Debug-iphonesimulator -F/Users/jlee/Code/FabricTest/Pods/Answers -F/Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS -F/Users/jlee/Code/FabricTest/Pods/Fabric/iOS -filelist /Users/jlee/Library/Developer/Xcode/DerivedData/FabricTest-gvvejyxgkzewvzcwpyopzegofpnv/Build/Intermediates/FabricTest.build/Debug-iphonesimulator/FabricTest.build/Objects-normal/x86_64/FabricTest.LinkFileList -Xlinker -rpath -Xlinker @executable_path/Frameworks -Xlinker -rpath -Xlinker @loader_path/Frameworks -Xlinker -rpath -Xlinker @executable_path/Frameworks -mios-simulator-version-min=9.2 -Xlinker -objc_abi_version -Xlinker 2 -ObjC -lc++ -lz -framework Answers -framework Crashlytics -framework Fabric -framework Security -framework SystemConfiguration -framework UIKit -fobjc-arc -fobjc-link-runtime -framework SystemConfiguration -framework Security -lz -lc++ -framework Pods -Xlinker -dependency_info -Xlinker /Users/jlee/Library/Developer/Xcode/DerivedData/FabricTest-gvvejyxgkzewvzcwpyopzegofpnv/Build/Intermediates/FabricTest.build/Debug-iphonesimulator/FabricTest.build/Objects-normal/x86_64/FabricTest_dependency_info.dat -o /Users/jlee/Library/Developer/Xcode/DerivedData/FabricTest-gvvejyxgkzewvzcwpyopzegofpnv/Build/Products/Debug-iphonesimulator/FabricTest.app/FabricTest

duplicate symbol _CLSAnswersAddToCartEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersAddToCartEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersAddToCartEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersAddToCartEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersAddToCartEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersAddToCartEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersAddToCartEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersAddToCartEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersAddToCartEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationBecameActiveEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationBecameInactiveEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationCrashedEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationEnteredBackgroundEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationEnteredForegroundEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationInstalledEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationLaunchedEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationMemoryWarningEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsEventApplicationTerminatedEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsApplicationLifecycleEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsApplicationLifecycleEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsApplicationLifecycleEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsApplicationLifecycleEvent.o)
duplicate symbol _CLSAnalyticsControllerErrorDomain in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _CLSAnalyticsControllerUserDefaultsEnableViewControllerTracking in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _CLSAnalyticsControllerUserDefaultsLastMaintenanceDateKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _CLSAnalyticsControllerUserDefaultsLastSessionIdentifierKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _CLSAnalyticsControllerUserDefaultsLastSessionMetadataKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _CLSAnalyticsControllerUserDefaultsLastSessionTimestampKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._analyticsRootDirectoryURL in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._betaToken in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._currentSessionFragmentDirectoryURL in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._currentSessionFragmentIdentifier in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._currentSessionFragmentTimestamp in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._fileManager in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._haveSettings in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._identifierGenerator in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._lastSessionIdentifier in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._lastSessionMetadata in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._lastSessionTimestamp in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._logSessionRepository in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._loggedAnalyticsEnabled in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._metadataController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._networkingClient in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._performSessionMaintenanceAfterSettingsArrive in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._priorityCurrentFragmentEventFileURLs in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._priorityCurrentFragmentEventFiles in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._priorityEventLoggingQueues in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._session in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._sessionFragmentMaintenanceTimerSource in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._sessionFragmentsToTransmit in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._sessionIdentifier in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._sessionMaintenanceQueue in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._sessionTimestamp in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsAnalyticsURL in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsFlushIntervalSecs in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsMaxByteSizePerFile in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsMaxPendingSendFileCount in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsSamplingRate in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsShouldCollectAnalytics in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsShouldFlushOnBackground in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsShouldTrackViewControllers in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsTrackCustomEvents in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._settingsTrackPredefinedEvents in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsController._timestampGenerator in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsController.o)
duplicate symbol _CLSAnswersCustomEventAttributesJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _CLSAnswersCustomEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _CLSAnswersCustomEventTypeJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _CLSAnswersPredefinedEventAttributesJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _CLSAnswersPredefinedEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _CLSAnswersPredefinedEventTypeJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _MAX_ATTRIBUTE_SIZE in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _MAX_NUM_ATTRIBUTES in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSAnswersEvent._customAttributes in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSAnswersEvent._key in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSAnswersEvent._metadata in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSAnswersEvent._predefinedAttributes in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsIdentifierGenerator in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsIdentifierGenerator.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsIdentifierGenerator.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsIdentifierGenerator in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsIdentifierGenerator.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsIdentifierGenerator.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersCustomEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersCustomEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersCustomEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersCustomEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersCustomEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersCustomEvent.o)
duplicate symbol _CLSAnalyticsMetadataEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsMetadataEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsMetadataEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataEvent.o)
duplicate symbol _CLSAnswersSignupEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersSignUpEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersSignUpEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersSignUpEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersSignUpEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersSignUpEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersSignUpEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersSignUpEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersSignUpEvent.o)
duplicate symbol _CLSAnswersShareEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersShareEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersShareEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersShareEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersShareEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersShareEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersShareEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersShareEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersShareEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSEventLogEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogEvent._key in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogEvent._payload in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogEvent._priority in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogEvent._timestamp in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSEventLogEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEvent.o)
duplicate symbol _CLSAnswersSearchEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersSearchEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersSearchEvent.o)
duplicate symbol _CLSAnswersSearchEventQueryJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersSearchEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersSearchEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersSearchEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersSearchEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersSearchEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersSearchEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersSearchEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersSearchEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsNetworkingClient in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsNetworkingClient.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsNetworkingClient.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsNetworkingClient._networkClient in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsNetworkingClient.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsNetworkingClient.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsNetworkingClient in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsNetworkingClient.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsNetworkingClient.o)
duplicate symbol _CLSAnswersContentViewEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersContentViewEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersContentViewEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersContentViewEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersContentViewEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersContentViewEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersContentViewEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersContentViewEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersContentViewEvent.o)
duplicate symbol _CLSAnalyticsEventViewControllerAppearedEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerEvent.o)
duplicate symbol _CLSAnalyticsEventViewControllerClassJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerEvent.o)
duplicate symbol _CLSAnalyticsEventViewControllerDisappearedEventKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerEvent.o)
duplicate symbol _CLSAnalyticsEventViewControllerTitleJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsViewControllerEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsViewControllerEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsEventFilter in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsEventFilter.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsEventFilter.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsEventFilter in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsEventFilter.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsEventFilter.o)
duplicate symbol _CLSAnalyticsEventEventIdentifierJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsEvent._eventIdentifier in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsEvent.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsEvent._stringPayloadValueDict in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSEventLogEventFile in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEventFile.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEventFile.o)
duplicate symbol _OBJC_METACLASS_$_CLSEventLogEventFile in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogEventFile.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogEventFile.o)
duplicate symbol _CLSAnalyticsMetadataApiKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataAppBundleId in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataAppBundleShortVersion in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataAppBundleVersion in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataAppInstanceId in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataExecutionId in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataGeneratorName in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostAdvertisingId in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostAdvertisingTrackingEnabled in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostBetaTesterFontToken in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostCPU in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostInstallId in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostJailbroken in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostLinksAdvertisingSupportFramework in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostLocale in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostMachine in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostModel in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostNumCores in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostOSVersion in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostOSVersionName in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostPlatform in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostPlatformCode in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataHostVendorId in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataSessionId in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _CLSAnalyticsMetadataStartedAtTime in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsMetadataController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsMetadataController._metadata in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsMetadataController._metadataJSONData in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsMetadataController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsMetadataController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsMetadataController.o)
duplicate symbol _OBJC_CLASS_$_CLSEventLogFile in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogFile.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogFile.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogFile._fileHandle in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogFile.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogFile.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogFile._fileSize in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogFile.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogFile.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogFile._fileURL in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogFile.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogFile.o)
duplicate symbol _OBJC_METACLASS_$_CLSEventLogFile in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogFile.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogFile.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsViewControllerTrackingController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerTrackingController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerTrackingController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsViewControllerTrackingController._blackListViewControllerClasses in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerTrackingController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerTrackingController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsViewControllerTrackingController._delegate in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerTrackingController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerTrackingController.o)
duplicate symbol _OBJC_IVAR_$_CLSAnalyticsViewControllerTrackingController._isTracking in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerTrackingController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerTrackingController.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsViewControllerTrackingController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsViewControllerTrackingController.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsViewControllerTrackingController.o)
duplicate symbol _CLSAnswersPurchaseEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPurchaseEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPurchaseEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersPurchaseEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPurchaseEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPurchaseEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersPurchaseEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPurchaseEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPurchaseEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnalyticsTimestampGenerator in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsTimestampGenerator.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsTimestampGenerator.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnalyticsTimestampGenerator in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnalyticsTimestampGenerator.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnalyticsTimestampGenerator.o)
duplicate symbol _OBJC_CLASS_$_Answers in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(Answers.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(Answers.o)
duplicate symbol _OBJC_IVAR_$_Answers._analyticsController in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(Answers.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(Answers.o)
duplicate symbol _OBJC_METACLASS_$_Answers in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(Answers.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(Answers.o)
duplicate symbol _CLSAnswersPredefinedEventContentIDJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventContentNameJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventContentTypeJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventCurrencyJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventFalseString in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventItemIDJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventItemNameJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventItemPriceJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventItemTypeJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventLevelNameJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventMethodJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventSuccessJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersPredefinedEventTrueString in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersPredefinedEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersPredefinedEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersPredefinedEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersPredefinedEvent.o)
duplicate symbol _CLSAnswersRateEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersRateEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersRateEvent.o)
duplicate symbol _CLSAnswersRateEventRatingJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersRateEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersRateEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersRateEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersRateEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersRateEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersRateEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersRateEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersRateEvent.o)
duplicate symbol _CLSAnswersLeveEndEventLevelScoreJSONKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLevelEndEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLevelEndEvent.o)
duplicate symbol _CLSAnswersLeveEndEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLevelEndEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLevelEndEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersLevelEndEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLevelEndEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLevelEndEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersLevelEndEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLevelEndEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLevelEndEvent.o)
duplicate symbol _CLSAnswersStartCheckoutEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersStartCheckoutEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersStartCheckoutEvent.o)
duplicate symbol _CLSAnswersStartCheckoutEventTotalPriceJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersStartCheckoutEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersStartCheckoutEvent.o)
duplicate symbol _CLSAnswersStartCheckoutItemCountJSONPayloadKey in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersStartCheckoutEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersStartCheckoutEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersStartCheckoutEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersStartCheckoutEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersStartCheckoutEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersStartCheckoutEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersStartCheckoutEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersStartCheckoutEvent.o)
duplicate symbol _CLSEventLogSessionRepositoryActiveHighPriorityEventLogFileName in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSEventLogSessionRepositoryActiveLowPriorityEventLogFileName in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSEventLogSessionRepositoryActiveMediumPriorityEventLogFileName in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSEventLogSessionRepositoryActiveStateName in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSEventLogSessionRepositoryCompressedFileNameExtension in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSEventLogSessionRepositoryLogFileNameExtension in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSEventLogSessionRepositoryPackagedStateName in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSEventLogSessionRepositoryPrepPathExtension in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _OBJC_CLASS_$_CLSEventLogSessionRepository in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogSessionRepository._fileManager in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _OBJC_IVAR_$_CLSEventLogSessionRepository._rootDirectoryURL in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _OBJC_METACLASS_$_CLSEventLogSessionRepository in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSEventLogSessionRepository.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSEventLogSessionRepository.o)
duplicate symbol _CLSAnswersLoginEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLoginEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLoginEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersLoginEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLoginEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLoginEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersLoginEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLoginEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLoginEvent.o)
duplicate symbol _CLSAnswersLevelStartEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLevelStartEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLevelStartEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersLevelStartEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLevelStartEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLevelStartEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersLevelStartEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersLevelStartEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersLevelStartEvent.o)
duplicate symbol _CLSAnswersInviteEventPredefinedEventType in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersInviteEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersInviteEvent.o)
duplicate symbol _OBJC_CLASS_$_CLSAnswersInviteEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersInviteEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersInviteEvent.o)
duplicate symbol _OBJC_METACLASS_$_CLSAnswersInviteEvent in:
    /Users/jlee/Code/FabricTest/Pods/Answers/Answers.framework/Answers(CLSAnswersInviteEvent.o)
    /Users/jlee/Code/FabricTest/Pods/Crashlytics/iOS/Crashlytics.framework/Crashlytics(CLSAnswersInviteEvent.o)
ld: 212 duplicate symbols for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```
