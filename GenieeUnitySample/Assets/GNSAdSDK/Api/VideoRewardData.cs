using System;

namespace GNSAdSDK.Api
{
    // 動画リワードデータ
    public class VideoRewardData : EventArgs
    {
        // 名前
        public string AdName { get; set; }
        // 金額
        public double Amount { get; set; }
        // 種類
        public string Type { get; set; }
    }
}
