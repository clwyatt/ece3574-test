$bootstrap = <<BOOTSTRAP
export DEBIAN_FRONTEND=noninteractive
apt-get update
apt-get upgrade
apt-get -y install build-essential
apt-get -y install cmake
BOOTSTRAP

Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/bionic64"

  config.vm.boot_timeout = 600
  
  config.vm.provider "virtualbox" do |vb|
     vb.customize ["modifyvm", :id, "--uart1", "0x3F8", "4"]
     vb.customize ["modifyvm", :id, "--uartmode1", "file", File::NULL]
  end
   
  # setup the VM
  config.vm.provision "shell", inline: $bootstrap
end

