/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSManagedValue : NSObject {
    struct Weak<JSC::JSGlobalObject> { 
        struct WeakImpl {} *m_impl; 
    struct WeakValueRef { 
        int m_tag; 
        union WeakValueUnion { 
            struct JSValue { 
                union EncodedValueDescriptor { 
                    long long asInt64; 
                    double asDouble; 
                    struct { 
                        int payload; 
                        int tag; 
                    } asBits; 
                } u; 
            } m_primitive; 
            struct Weak<JSC::JSObject> { 
                struct WeakImpl {} *m_impl; 
            } m_object; 
            struct Weak<JSC::JSString> { 
                struct WeakImpl {} *m_impl; 
            } m_string; 
        } u; 
    } m_globalObject;
    } m_weakValue;
}

+ (id)managedValueWithValue:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disconnectValue;
- (id)init;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
