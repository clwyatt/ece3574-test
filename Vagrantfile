Vagrant.configure("2") do |config|
  config.vm.hostname = "refenv"

  config.vm.provider "docker" do |d|
    d.image = "vtece/refenv-3574:latest"
    d.remains_running = true
    d.has_ssh = true
    d.privileged = true
    d.volumes = ["/sys/fs/cgroup:/sys/fs/cgroup:rw"]
    d.create_args = ["--cgroupns=host"]
  end
  
end


