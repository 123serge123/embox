
PKG_NAME := ffmpeg
PKG_VER  := 4.3.1

PKG_SOURCES := https://ffmpeg.org/releases/$(PKG_NAME)-$(PKG_VER).tar.bz2
PKG_MD5	:= 804707549590e90880e8ecd4e5244fd8

$(CONFIGURE) :
	export EMBOX_GCC_LINK=full; \
	cd $(PKG_SOURCE_DIR) && ( \
		./configure \
			--prefix=$(PKG_INSTALL_DIR) \
			--cc=$(EMBOX_GCC) \
			--cxx=$(EMBOX_GXX) \
			--target-os=none \
			--disable-asm \
			--disable-programs \
			--disable-doc \
			--disable-postproc \
			--disable-avfilter \
			--disable-hwaccels \
			--disable-everything \
			--disable-debug \
			--disable-runtime-cpudetect \
			--disable-stripping \
			--disable-shared \
			--enable-cross-compile \
			--enable-static \
			--enable-small \
			--enable-gpl \
			--enable-nonfree \
			--enable-avformat \
			--enable-avcodec \
			--enable-swscale \
			--enable-avutil \
			--enable-avresample  \
			--enable-pic \
			--enable-protocol=file \
			--enable-protocol=http \
			--enable-indev=v4l2 \
			--enable-decoder=h264 \
			--enable-decoder=mpeg4 \
			--enable-decoder=msmpeg4v2 \
			--enable-decoder=mjpeg \
			--enable-decoder=rawvideo \
			--enable-decoder=mpeg1video \
			--enable-decoder=mpeg2video \
			--enable-decoder=wmv1 \
			--enable-decoder=wmv2 \
			--enable-decoder=wmv3 \
			--enable-decoder=vp6 \
			--enable-decoder=vp8 \
			--enable-decoder=vp9 \
			--enable-decoder=flv \
			--enable-decoder=h263 \
			--enable-decoder=h263i \
			--enable-decoder=h263p \
			--enable-decoder=rv10 \
			--enable-decoder=rv20 \
			--enable-decoder=rv30 \
			--enable-decoder=rv40 \
			--enable-demuxer=mov \
			--enable-demuxer=avi \
			--enable-demuxer=h264 \
			--enable-demuxer=mjpeg \
			--enable-demuxer=mpegvideo \
			--enable-demuxer=mpegps \
			--enable-demuxer=mpegts \
			--enable-demuxer=flv \
			--enable-demuxer=rm \
			--enable-demuxer=asf \
			--enable-parser=h264 \
			--enable-parser=mpeg4video \
			--enable-parser=mjpeg \
			--enable-parser=mpegvideo \
			--enable-parser=vc1 \
			--enable-parser=vp8 \
			--enable-parser=vp9 \
			--enable-version3 \
			--enable-pthreads \
			--libdir=$(PKG_INSTALL_DIR)/lib \
			--incdir=$(PKG_INSTALL_DIR)/include \
	)
	touch $@

$(BUILD) :
	cd $(PKG_SOURCE_DIR) && ( \
		$(MAKE) MAKEFLAGS='$(EMBOX_IMPORTED_MAKEFLAGS)'; \
	)
	touch $@

$(INSTALL) :
	$(MV) $(PKG_SOURCE_DIR)/libavcodec/libavcodec.a $(PKG_INSTALL_DIR)
	$(MV) $(PKG_SOURCE_DIR)/libavformat/libavformat.a $(PKG_INSTALL_DIR)
	$(MV) $(PKG_SOURCE_DIR)/libavutil/libavutil.a $(PKG_INSTALL_DIR)
	$(MV) $(PKG_SOURCE_DIR)/libswscale/libswscale.a $(PKG_INSTALL_DIR)
	touch $@
