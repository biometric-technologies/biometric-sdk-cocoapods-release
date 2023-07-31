Pod::Spec.new do |spec|
    spec.name                     = 'BiometricSdk'
    spec.version                  = '0.4.2'
    spec.homepage                 = 'https://github.com/biometric-technologies/biometric-sdk'
    spec.source                   = { :git => 'https://github.com/biometric-technologies/biometric-sdk-cocoapods-release.git', :tag => '0.4.2' }
    spec.authors                  = 'Slava Gornostal'
    spec.license                  = { :type => 'GPL-3.0', :text => 'GNU General Public License v3.0' }
    spec.summary                  = 'Biometric SDK'
    spec.vendored_frameworks      = 'BiometricSdk.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '11.0'
    spec.dependency 'TensorFlowLiteObjC', '2.12.0'
                
                
                
end