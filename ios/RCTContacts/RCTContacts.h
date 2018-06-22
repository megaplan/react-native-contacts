#import <React/RCTBridgeModule.h>
#import <Contacts/Contacts.h>
#import <ContactsUI/ContactsUI.h>

@interface RCTContacts : NSObject <RCTBridgeModule, CNContactViewControllerDelegate>

@property(nonatomic, retain) RCTResponseSenderBlock callback;

@end
