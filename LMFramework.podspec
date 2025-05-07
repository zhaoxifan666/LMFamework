
Pod::Spec.new do |spec|

  spec.name         = "LMFramework"
  spec.version      = "1.0.0"
  spec.summary      = "baseFramework For other module"
  spec.homepage     = "https://github.com/zhaoxifan666/LMFramework"
  spec.license      = "MIT"
  spec.author             = { "zhaoxifan" => "xifan.zhao@aqara.com" }
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => "https://github.com/zhaoxifan666/LMFramework", :tag => "#{spec.version}" }

  spec.dependency 'AFNetworking','3.2.0'
  spec.dependency 'SVProgressHUD'
  spec.dependency 'YYModel'
  spec.dependency 'Masonry'
  spec.dependency 'LMBaseEncryption'


  spec.frameworks = 'Foundation','UIKit'

  spec.vendored_frameworks = "LMFramework.framework"
  spec.resource =  'LMFramework.bundle'
  spec.pod_target_xcconfig = {
    'ENABLE_BITCODE' => 'YES',
    'DEFINES_MODULE' => 'YES'
  }

end
