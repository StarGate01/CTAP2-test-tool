{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs";
  };

  outputs = { self, nixpkgs }:
    let
      pkgs = nixpkgs.legacyPackages.x86_64-linux;
    in
    rec {
      devShell.x86_64-linux = (pkgs.buildFHSUserEnv {
         name = "bazel-env";
         targetPkgs = pkgs: with pkgs; [
              gcc
              pkg-config
              bazel
              systemd.dev
              automake
              autoconf
              autogen
              libtool
              expect
              git
           ];
       }).env;
    };
}
