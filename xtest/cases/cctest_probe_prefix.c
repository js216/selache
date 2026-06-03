// SPDX-License-Identifier: MIT
// cctest_csmith_02df2fdd.c --- cctest case csmith_02df2fdd (csmith seed 48181213)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4df77d46 */
/* @exp_ticks 0x76b2 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;
static int crc_probe_count = 0;
static int crc_probe_limit = 49;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   if (crc_probe_count >= crc_probe_limit) return;
   crc_probe_count++;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 48181213 -o /tmp/csmith_gen_yliwbj2s/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   uint16_t  f3;
};
#pragma pack(pop)

struct S1 {
   uint16_t  f0;
};

union U2 {
   uint32_t  f0;
   struct S1  f1;
   const int64_t  f2;
   const uint8_t  f3;
   int8_t * f4;
};


static int32_t g_2[4] = {1L,1L,1L,1L};
static int32_t g_3[2] = {0x147B80BEL,0x147B80BEL};
static uint32_t g_4 = 0x1860EC01L;
static int32_t g_7[6][2][1] = {{{0xE44142B9L},{0L}},{{9L},{0x6FC6088BL}},{{9L},{0L}},{{0xE44142B9L},{0L}},{{9L},{0x6FC6088BL}},{{9L},{0L}}};
static int8_t g_20 = 1L;
static int8_t *g_19 = &g_20;
static const int32_t g_49 = 0L;
static const int32_t *g_48[5] = {&g_49,&g_49,&g_49,&g_49,&g_49};
static uint32_t g_51 = 0xF69FF98EL;
static uint16_t g_78 = 0x8BE1L;
static union U2 g_82 = {0UL};
static uint8_t g_85 = 0xBCL;
static struct S1 g_120 = {0UL};
static int16_t g_146[7] = {0x755BL,0x755BL,0x755BL,0x755BL,0x755BL,0x755BL,0x755BL};
static int8_t g_147 = (-3L);
static uint32_t g_156 = 0xD49D56FFL;
static int32_t *g_176 = &g_2[1];
static int32_t **g_175 = &g_176;
static int32_t ***g_174[4] = {&g_175,&g_175,&g_175,&g_175};
static int32_t g_223[5] = {1L,1L,1L,1L,1L};
static uint32_t g_224[5] = {0UL,0UL,0UL,0UL,0UL};
static const int32_t ***g_228 = (void*)0;
static const int32_t ****g_227 = &g_228;
static const struct S0 g_432 = {18446744073709551609UL,0x9BE4EBF2L,0xB3BCL,1UL};
static union U2 g_452 = {0x38C5895FL};
static union U2 *g_451 = &g_452;
static union U2 *g_453 = (void*)0;
static uint32_t g_478 = 0xF81DC85EL;
static int16_t * const * const g_482[2][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
static struct S0 g_526 = {1UL,0x82FE10D2L,0x39B6L,0xB2A7L};
static int32_t g_530 = 0x5C8E0338L;
static int16_t *g_545 = &g_146[0];
static int16_t *g_546 = &g_146[0];
static int16_t g_565 = 0x7316L;
static const uint32_t g_596 = 0x2EC9B67EL;
static const int8_t g_598 = (-7L);
static int64_t g_600 = 0x1756D2C4824531EELL;
static uint16_t g_641 = 0UL;
static uint64_t g_655 = 0xB7575F264B3F4C7FLL;
static int32_t g_683 = 2L;
static int32_t g_721 = 5L;
static uint64_t **g_733 = (void*)0;
static union U2 ***g_787 = (void*)0;
static int8_t g_789 = 0L;
static int32_t ****g_795 = (void*)0;
static int32_t *****g_794 = &g_795;
static int64_t g_864[5] = {0x1260953AA16DF84FLL,0x1260953AA16DF84FLL,0x1260953AA16DF84FLL,0x1260953AA16DF84FLL,0x1260953AA16DF84FLL};
static uint32_t g_879[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static const uint32_t *g_890 = &g_879[1];
static const uint32_t **g_889 = &g_890;
static const uint32_t ***g_888 = &g_889;
static union U2 g_930 = {1UL};
static uint32_t g_965 = 0x70B8E43FL;
static struct S1 g_1007[4][6][6] = {{{{0x7AE4L},{4UL},{0x18F0L},{0x11C6L},{0x87C7L},{0UL}},{{0xC63EL},{0x11C6L},{0xE5C2L},{3UL},{0x11C6L},{65529UL}},{{3UL},{0x11C6L},{65529UL},{0x06C0L},{0x87C7L},{0x18F0L}},{{0x44E3L},{4UL},{0xD92AL},{4UL},{0x44E3L},{0x97F8L}},{{0x44E3L},{3UL},{65533UL},{0x06C0L},{0x75F5L},{0UL}},{{3UL},{0x87C7L},{65532UL},{3UL},{0x7AE4L},{0UL}}},{{{0xC63EL},{0x75F5L},{65533UL},{0x11C6L},{0x06C0L},{0x97F8L}},{{0x7AE4L},{5UL},{0xD92AL},{65535UL},{0x06C0L},{0x18F0L}},{{4UL},{0x75F5L},{65529UL},{0x7AE4L},{0x7AE4L},{65529UL}},{{0x87C7L},{0x87C7L},{0xE5C2L},{0x7AE4L},{0x75F5L},{0UL}},{{4UL},{3UL},{0x18F0L},{65535UL},{0x44E3L},{0xE5C2L}},{{0x7AE4L},{4UL},{0x18F0L},{0x11C6L},{0x87C7L},{0UL}}},{{{0xC63EL},{0x11C6L},{0xE5C2L},{3UL},{0x11C6L},{65529UL}},{{3UL},{0x11C6L},{65529UL},{0x06C0L},{0x87C7L},{0x18F0L}},{{0x44E3L},{4UL},{0xD92AL},{4UL},{0x44E3L},{0x97F8L}},{{0x44E3L},{3UL},{65533UL},{0x06C0L},{0x75F5L},{0UL}},{{3UL},{0x87C7L},{65532UL},{3UL},{0x7AE4L},{0UL}},{{0xC63EL},{0x75F5L},{65533UL},{0x11C6L},{0x06C0L},{0x97F8L}}},{{{0x7AE4L},{5UL},{0xD92AL},{65535UL},{0x06C0L},{0x18F0L}},{{4UL},{0x75F5L},{65529UL},{0x7AE4L},{0x7AE4L},{65529UL}},{{0x87C7L},{0x87C7L},{0xE5C2L},{0x7AE4L},{0x75F5L},{0UL}},{{4UL},{3UL},{0x18F0L},{65535UL},{0x44E3L},{0xE5C2L}},{{0x7AE4L},{4UL},{0x18F0L},{0x11C6L},{0x87C7L},{0UL}},{{0xC63EL},{0x11C6L},{0xE5C2L},{3UL},{0x11C6L},{65529UL}}}};
static int16_t g_1040 = 1L;
static int64_t g_1076 = 0x518A5EC8348FB5F9LL;
static int32_t g_1223 = 5L;
static uint8_t *g_1257 = &g_85;
static uint8_t **g_1256 = &g_1257;
static int64_t g_1267[3][2][3] = {{{0L,0x3FEBB1078E6DDBB7LL,0L},{(-1L),0xDA7FEF26EF9AB9F4LL,0xDA7FEF26EF9AB9F4LL}},{{(-1L),0x3FEBB1078E6DDBB7LL,(-1L)},{(-1L),(-1L),0xDA7FEF26EF9AB9F4LL}},{{0L,0x3FEBB1078E6DDBB7LL,0L},{(-1L),0xDA7FEF26EF9AB9F4LL,0xDA7FEF26EF9AB9F4LL}}};



static struct S0  func_1(void);
static int32_t  func_11(int8_t * p_12, struct S1  p_13);
static int8_t * func_14(const int32_t  p_15, union U2  p_16, int16_t  p_17, int16_t  p_18);
static int8_t * func_21(uint32_t  p_22, int8_t * p_23, const uint32_t  p_24, int32_t * p_25, int32_t  p_26);
static uint32_t  func_29(int8_t * p_30, int32_t * p_31);
static int32_t  func_33(int8_t * p_34, int32_t * p_35);
static int32_t * func_37(uint16_t  p_38);
static const struct S0  func_39(int64_t  p_40, uint16_t  p_41);




static struct S0  func_1(void)
{ 
    uint32_t l_5 = 8UL;
    int32_t *l_10[7] = {(void*)0,(void*)0,&g_2[3],(void*)0,(void*)0,&g_2[3],(void*)0};
    const uint16_t l_782[2][2] = {{0x5A81L,0x5A81L},{0x5A81L,0x5A81L}};
    struct S0 l_1077 = {0xFE963489L,0x862E1640L,0UL,0xD928L};
    struct S1 *l_1095 = (void*)0;
    struct S1 **l_1094 = &l_1095;
    struct S1 **l_1096[4][7][5] = {{{&l_1095,&l_1095,&l_1095,&l_1095,(void*)0},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,(void*)0,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{(void*)0,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095}},{{&l_1095,&l_1095,&l_1095,(void*)0,&l_1095},{&l_1095,&l_1095,&l_1095,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,(void*)0},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,(void*)0,&l_1095,&l_1095}},{{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{(void*)0,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,(void*)0,&l_1095},{&l_1095,&l_1095,&l_1095,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1095,&l_1095}},{{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,(void*)0},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,(void*)0,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{&l_1095,&l_1095,&l_1095,&l_1095,&l_1095},{(void*)0,&l_1095,&l_1095,&l_1095,&l_1095}}};
    const int32_t l_1099[6] = {1L,1L,1L,1L,1L,1L};
    uint32_t *l_1145[5];
    uint32_t **l_1144 = &l_1145[1];
    uint32_t ***l_1143[7][7] = {{&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144},{&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144},{&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144},{&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144},{&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144},{&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144},{&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144,&l_1144}};
    uint64_t l_1198 = 0x702D89EAB69E6778LL;
    uint32_t l_1214 = 0xB9B210C4L;
    int32_t *l_1219[4][1][3] = {{{&g_223[0],&g_223[0],&g_223[0]}},{{(void*)0,&g_7[5][1][0],(void*)0}},{{&g_223[0],&g_223[0],&g_223[0]}},{{(void*)0,&g_7[5][1][0],(void*)0}}};
    int16_t l_1231 = 9L;
    uint32_t l_1236 = 0x3EAA4C24L;
    uint8_t l_1265[6];
    int16_t l_1266 = 1L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1145[i] = &g_526.f1;
    for (i = 0; i < 6; i++)
        l_1265[i] = 248UL;
    for (g_3[1] = 0; (g_3[1] <= 3); g_3[1] += 1)
    { 
        int32_t *l_6 = &g_7[5][0][0];
        int i;
        g_4 ^= g_2[g_3[1]];
        if (l_5)
            continue;
        (*l_6) &= ((g_2[g_3[1]] , g_2[g_3[1]]) & g_2[g_3[1]]);
        if (g_4)
            continue;
    }
    g_3[1] ^= (safe_div_func_int8_t_s_s(1L, g_7[5][0][0]));
    return g_432;
}



static int32_t  func_11(int8_t * p_12, struct S1  p_13)
{ 
    int32_t *l_1008 = &g_223[0];
    (*l_1008) ^= 0L;
    return (*l_1008);
}



static int8_t * func_14(const int32_t  p_15, union U2  p_16, int16_t  p_17, int16_t  p_18)
{ 
    int32_t *****l_793 = (void*)0;
    int32_t *****l_796 = (void*)0;
    struct S0 l_839 = {0x36692D79L,4294967294UL,65529UL,65528UL};
    struct S1 l_895 = {0x3E87L};
    int32_t l_911 = (-1L);
    int8_t *l_932 = (void*)0;
    union U2 *l_939 = (void*)0;
    int32_t l_957 = 6L;
    int32_t l_958 = 0xA5388A24L;
    int32_t l_959 = 0L;
    int32_t l_960 = (-1L);
    int32_t l_961 = 0xF718E6FDL;
    int32_t l_962 = 0L;
    int32_t l_963[1];
    int32_t l_964 = 0xBCC80471L;
    union U2 **l_1006 = &g_453;
    int i;
    for (i = 0; i < 1; i++)
        l_963[i] = 0x2313CDE1L;
    if (((g_794 = l_793) == (l_796 = (g_3[1] , (void*)0))))
    { 
        int8_t l_797 = 0x2DL;
        int64_t l_800 = 0xBE95BB3E6F813F95LL;
        int32_t *l_821 = (void*)0;
        int32_t ***l_865 = &g_175;
        int32_t l_902 = 0x71687A7AL;
        int32_t l_903[3];
        uint64_t l_912[3];
        union U2 l_943 = {0x84D17FA7L};
        int32_t *l_945 = &g_683;
        int32_t *l_946 = &l_903[2];
        int32_t *l_947 = &g_683;
        int32_t *l_948 = &l_902;
        int32_t *l_949 = &l_911;
        int32_t *l_950 = &g_7[5][0][0];
        int32_t *l_951 = &g_2[3];
        int32_t *l_952 = (void*)0;
        int32_t *l_953 = (void*)0;
        int32_t *l_954 = &g_683;
        int32_t *l_955 = &g_223[1];
        int32_t *l_956[3][5][3] = {{{&l_902,&l_903[1],&l_902},{&l_911,&l_911,&l_902},{(void*)0,&l_903[1],&g_223[0]},{&l_902,(void*)0,&l_903[1]},{(void*)0,&l_903[0],(void*)0}},{{&l_911,&l_902,&l_903[1]},{&l_902,&l_903[2],&g_223[0]},{&g_7[4][0][0],&l_902,&l_902},{&g_223[0],&l_903[0],&l_902},{&g_7[4][0][0],(void*)0,&g_7[4][0][0]}},{{&l_902,&l_903[1],&l_902},{&l_911,&l_911,&l_902},{(void*)0,&l_903[1],&g_223[0]},{&l_902,(void*)0,&l_903[1]},{(void*)0,&l_903[0],(void*)0}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_903[i] = 0x57AF321CL;
        for (i = 0; i < 3; i++)
            l_912[i] = 0xB8709A362852B0FELL;
lbl_894:
        l_797 ^= 0xCB8D9BA3L;
        for (g_120.f0 = 0; (g_120.f0 >= 49); g_120.f0 = safe_add_func_uint64_t_u_u(g_120.f0, 9))
        { 
            uint8_t l_807 = 252UL;
            uint8_t *l_810 = &g_85;
            uint32_t *l_822 = &g_452.f0;
            uint32_t *l_823 = (void*)0;
            union U2 l_832[6] = {{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}};
            struct S0 *l_833 = &g_526;
            int8_t *l_861 = (void*)0;
            int8_t *l_862[3];
            int16_t *l_863 = &g_565;
            int32_t l_908[2];
            int i;
            for (i = 0; i < 3; i++)
                l_862[i] = &l_797;
            for (i = 0; i < 2; i++)
                l_908[i] = (-7L);
        }
        if (g_120.f0)
            goto lbl_894;
        ++g_965;
    }
    else
    { 
        int32_t *** const *l_968 = &g_174[1];
        int32_t *** const **l_969 = &l_968;
        const uint32_t l_993 = 0xD518D59EL;
        int8_t *l_1005 = &g_20;
        (*l_969) = l_968;
        for (g_526.f2 = 0; (g_526.f2 < 50); g_526.f2 = safe_add_func_int32_t_s_s(g_526.f2, 8))
        { 
            int32_t *l_977 = &l_957;
            (*g_175) = ((((((safe_mod_func_int32_t_s_s(((*l_977) = ((*****l_969) = (safe_add_func_int16_t_s_s((~p_16.f3), (****l_968))))), ((safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(p_18, (safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(((void*)0 != &p_15), 15)) , (+(safe_add_func_int64_t_s_s(p_15, (((safe_add_func_uint8_t_u_u((g_85 = (safe_mul_func_int16_t_s_s(p_17, l_993))), 1L)) , l_793) != l_796))))), 0xBD63068EBC923CD6LL)))) || p_16.f3), g_879[1])) , p_17))) , (***g_888)) <= p_18) <= (**g_889)) > 0x933AL) , (void*)0);
            for (l_839.f0 = (-18); (l_839.f0 < 18); ++l_839.f0)
            { 
                int32_t *l_1001 = (void*)0;
                (*l_977) |= (p_15 | p_16.f3);
                for (g_51 = (-15); (g_51 != 1); g_51++)
                { 
                    int64_t l_1002 = (-4L);
                    (*l_977) = (safe_sub_func_uint16_t_u_u((+g_526.f0), 0xAEE5L));
                    l_1001 = (void*)0;
                    if (l_1002)
                        continue;
                    if (p_18)
                        continue;
                }
            }
            for (l_960 = 0; (l_960 != (-15)); l_960--)
            { 
                (****l_969) = (****l_969);
            }
            return &g_147;
        }
        return l_1005;
    }
    (*l_1006) = (void*)0;
    return l_932;
}



static int8_t * func_21(uint32_t  p_22, int8_t * p_23, const uint32_t  p_24, int32_t * p_25, int32_t  p_26)
{ 
    union U2 **l_786 = &g_453;
    union U2 ***l_785 = &l_786;
    for (g_156 = (-23); (g_156 >= 15); g_156 = safe_add_func_uint8_t_u_u(g_156, 9))
    { 
        g_787 = l_785;
    }
    p_25 = ((*g_175) = p_25);
    return &g_147;
}



static uint32_t  func_29(int8_t * p_30, int32_t * p_31)
{ 
    struct S1 l_45 = {1UL};
    int32_t *l_46 = (void*)0;
    int32_t l_550 = 0xF9C18EF0L;
    int16_t *l_564 = &g_565;
    int16_t l_591[5][4][7] = {{{0x9FF4L,(-1L),(-1L),6L,0xB624L,0x29E1L,(-4L)},{(-1L),(-3L),0x5821L,0xE601L,0xFEAAL,0x0A4BL,0xDB03L},{(-1L),(-3L),0x1F8CL,0x14D9L,0L,6L,8L},{0x9FF4L,(-3L),0x1F8CL,6L,0xBD65L,(-1L),(-4L)}},{{(-3L),(-1L),0x5821L,0x14D9L,0xBD65L,0x0A4BL,0x2320L},{0L,(-3L),(-1L),0xE601L,0L,(-1L),0x2320L},{0x9FF4L,0L,(-4L),6L,0xFEAAL,6L,(-4L)},{0L,0L,0x5821L,0x6948L,0xB624L,0x0A4BL,8L}},{{(-3L),(-3L),(-4L),0x6948L,0L,0x29E1L,0xDB03L},{0x9FF4L,(-1L),(-1L),6L,0xB624L,0x29E1L,(-4L)},{(-1L),(-3L),0x5821L,0xE601L,0xFEAAL,0x0A4BL,0xDB03L},{(-1L),(-3L),0x1F8CL,0x14D9L,0L,6L,8L}},{{0x9FF4L,(-3L),0x1F8CL,6L,0xBD65L,(-1L),(-4L)},{(-3L),(-1L),0x5821L,0x14D9L,0xBD65L,0x0A4BL,0x2320L},{0L,(-3L),(-1L),0xE601L,0L,(-1L),0x2320L},{0x9FF4L,0L,(-4L),6L,0xFEAAL,6L,(-4L)}},{{0L,0L,0x5821L,0x6948L,0xB624L,0x0A4BL,8L},{(-3L),(-3L),(-4L),0x6948L,0L,0x29E1L,0xDB03L},{(-1L),0L,0xE516L,0x0447L,1L,1L,0x3B9EL},{0L,0L,0L,0x395CL,0xD2B4L,0x199FL,(-3L)}}};
    union U2 * const *l_634 = (void*)0;
    union U2 * const **l_633 = &l_634;
    int32_t l_639[4] = {0x4AC63CBDL,0x4AC63CBDL,0x4AC63CBDL,0x4AC63CBDL};
    int32_t l_652 = 1L;
    int32_t l_653 = 0L;
    int32_t l_654 = 3L;
    struct S1 * const l_694 = &g_120;
    struct S1 * const *l_693 = &l_694;
    int32_t l_725 = (-9L);
    uint32_t *l_735[6][3] = {{&g_526.f1,&g_526.f1,&g_526.f1},{(void*)0,&g_156,(void*)0},{&g_526.f1,&g_526.f1,&g_526.f1},{(void*)0,&g_156,(void*)0},{&g_526.f1,&g_526.f1,&g_526.f1},{(void*)0,&g_156,(void*)0}};
    uint32_t **l_734[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_746 = 4294967286UL;
    int32_t l_781 = 6L;
    int i, j, k;
lbl_617:
    for (g_4 = 0; (g_4 <= 3); g_4 += 1)
    { 
        int8_t *l_36[3][5][7] = {{{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,(void*)0,&g_20,&g_20,(void*)0},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,(void*)0,&g_20,&g_20,(void*)0}},{{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,(void*)0,&g_20,&g_20,(void*)0},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20,(void*)0,&g_20,&g_20,(void*)0},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,(void*)0,&g_20,&g_20,(void*)0},{(void*)0,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}}};
        const int32_t **l_47 = (void*)0;
        uint32_t *l_50 = &g_51;
        uint64_t l_531 = 3UL;
        int i, j, k;
        l_550 &= func_33(l_36[2][4][5], func_37((func_39(g_2[g_4], ((safe_div_func_uint32_t_u_u(((*l_50) &= ((&g_20 == &g_20) != (~(((l_45 , l_46) != (g_48[2] = &g_2[g_4])) , (*p_31))))), g_3[1])) && l_45.f0)) , l_531)));
    }
lbl_730:
    (*p_31) = (((*g_545) = l_45.f0) > ((*l_564) = (((!0x6B22EC37L) | (safe_mul_func_uint16_t_u_u(g_526.f0, (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(4L, (safe_sub_func_int32_t_s_s((*p_31), ((-3L) == (safe_add_func_int16_t_s_s((65532UL != g_20), 0x6A9CL))))))), l_550)), 0xA8094945L))))) == (*p_31))));
lbl_753:
    for (g_526.f1 = 0; (g_526.f1 > 51); g_526.f1++)
    { 
        int16_t **l_570[2][6][7] = {{{(void*)0,&g_546,(void*)0,&g_545,(void*)0,(void*)0,&g_545},{&g_545,&l_564,&g_545,&l_564,(void*)0,(void*)0,&l_564},{(void*)0,&g_545,(void*)0,&g_545,&l_564,(void*)0,&g_545},{(void*)0,&g_545,&g_545,&g_545,(void*)0,(void*)0,&g_545},{(void*)0,&g_545,(void*)0,&g_545,&l_564,(void*)0,&g_545},{(void*)0,&l_564,&g_546,&g_545,(void*)0,&g_546,&g_545}},{{(void*)0,&g_546,(void*)0,(void*)0,&g_546,&g_546,(void*)0},{&l_564,(void*)0,&l_564,&g_546,&g_545,&g_546,&g_546},{&l_564,&l_564,&g_545,(void*)0,&g_546,&g_545,(void*)0},{&g_546,&g_545,&l_564,(void*)0,&g_546,&g_546,(void*)0},{(void*)0,&l_564,(void*)0,(void*)0,&g_546,&g_546,(void*)0},{&g_546,(void*)0,&g_545,(void*)0,&g_545,&l_564,(void*)0}}};
        uint8_t *l_571[2];
        int32_t l_590 = 0x00B76EDCL;
        int32_t *l_618 = &g_223[3];
        uint8_t l_622[3];
        struct S0 l_642 = {0UL,4294967287UL,0x2355L,65535UL};
        int32_t *l_643 = &l_639[0];
        int32_t *l_644 = (void*)0;
        int32_t *l_645 = (void*)0;
        int32_t *l_646 = (void*)0;
        int32_t *l_647 = (void*)0;
        int32_t *l_648 = &g_3[1];
        int32_t *l_649 = &g_223[0];
        int32_t *l_650 = &l_639[0];
        int32_t *l_651[6][5][7] = {{{&g_7[0][1][0],&g_3[0],&g_3[0],&g_7[0][1][0],(void*)0,&g_3[0],&g_3[1]},{(void*)0,&g_7[5][0][0],(void*)0,&g_3[1],(void*)0,&g_3[1],(void*)0},{&g_7[0][1][0],&g_7[0][1][0],(void*)0,&g_3[1],&g_7[0][1][0],&l_550,&g_3[1]},{(void*)0,&g_3[1],&g_3[0],&g_7[5][0][0],&g_3[0],&g_3[1],(void*)0},{(void*)0,&g_3[1],&g_3[0],(void*)0,&g_7[0][1][0],&g_3[0],&g_3[0]}},{{(void*)0,&g_7[5][0][0],&l_550,&g_7[5][0][0],(void*)0,&g_223[1],(void*)0},{&g_7[0][1][0],(void*)0,&g_3[0],&g_3[1],(void*)0,(void*)0,&g_3[1]},{&g_3[0],&g_7[5][0][0],&g_3[0],&g_3[1],(void*)0,&g_3[1],&g_3[0]},{&g_7[0][1][0],&g_3[1],(void*)0,&g_7[0][1][0],&g_7[0][1][0],(void*)0,&g_3[1]},{(void*)0,&g_3[1],(void*)0,&g_7[5][0][0],(void*)0,&g_3[1],(void*)0}},{{(void*)0,&g_7[0][1][0],&g_3[0],&g_3[0],&g_7[0][1][0],(void*)0,&g_3[0]},{(void*)0,&g_7[5][0][0],&l_550,&g_7[5][0][0],(void*)0,&g_223[1],(void*)0},{&g_7[0][1][0],&g_3[0],&g_3[0],&g_7[0][1][0],(void*)0,&g_3[0],&g_3[1]},{(void*)0,&g_7[5][0][0],(void*)0,&g_3[1],(void*)0,&g_3[1],(void*)0},{&g_7[0][1][0],&g_7[0][1][0],(void*)0,&g_3[1],&g_7[0][1][0],&l_550,&g_3[1]}},{{(void*)0,&g_3[1],&g_3[0],&g_7[5][0][0],&g_3[0],&g_3[1],(void*)0},{(void*)0,&g_3[1],&g_3[0],(void*)0,&g_7[0][1][0],&g_3[0],&g_3[0]},{(void*)0,&g_7[5][0][0],&l_550,&g_7[5][0][0],(void*)0,&g_223[1],(void*)0},{&g_7[0][1][0],(void*)0,&g_3[0],&g_3[1],(void*)0,(void*)0,&g_3[1]},{&g_3[0],&g_7[5][0][0],&g_3[0],&g_3[1],(void*)0,&g_3[1],&g_3[0]}},{{&g_7[0][1][0],&g_3[1],(void*)0,&g_7[0][1][0],&g_7[0][1][0],(void*)0,&g_3[1]},{(void*)0,&g_3[1],(void*)0,&g_7[5][0][0],(void*)0,&g_223[1],(void*)0},{&l_550,(void*)0,(void*)0,(void*)0,(void*)0,&l_550,(void*)0},{&g_3[0],&g_3[1],(void*)0,&g_3[1],&g_3[0],&g_7[5][0][0],&g_3[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_550,(void*)0,&g_3[0]}},{{&l_550,&g_3[1],&l_550,&g_223[1],(void*)0,&g_223[1],&l_550},{(void*)0,(void*)0,&g_3[1],&g_3[0],(void*)0,&g_7[0][1][0],&g_3[0]},{&g_3[0],&g_223[1],&l_550,&g_3[1],&l_550,&g_223[1],&g_3[0]},{&l_550,&g_3[0],(void*)0,&l_550,(void*)0,(void*)0,(void*)0},{(void*)0,&g_3[1],(void*)0,&g_3[1],(void*)0,&g_7[5][0][0],(void*)0}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_571[i] = &g_85;
        for (i = 0; i < 3; i++)
            l_622[i] = 0x06L;
        if ((safe_mul_func_uint8_t_u_u(0x23L, (g_85 = ((void*)0 != l_570[1][4][3])))))
        { 
            int8_t l_576 = 0xD2L;
            for (g_120.f0 = 0; (g_120.f0 > 20); g_120.f0 = safe_add_func_uint32_t_u_u(g_120.f0, 8))
            { 
                const int32_t l_589 = 8L;
                for (g_20 = 0; (g_20 <= 4); g_20 += 1)
                { 
                    int8_t *l_597 = &g_147;
                    int64_t *l_599 = &g_600;
                    int32_t l_601 = (-6L);
                    int i;
                    if ((*p_31))
                        break;
                    (*p_31) |= (safe_mod_func_uint16_t_u_u((((l_576 && ((safe_mod_func_int32_t_s_s((((((((*l_599) = (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((l_590 = (g_530 | (safe_mod_func_int8_t_s_s(l_589, (-1L))))), l_591[4][3][4])) & (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*l_597) = (g_120.f0 & g_596)), g_526.f2)), (*g_19)))) <= l_589), 14)), g_596)), g_598))) , 0xCFE1L) , l_576) || g_526.f2) | g_526.f0) >= 0UL), l_576)) , (*g_19))) | 0x0BD62355EF7C6BEALL) || (-3L)), l_601));
                    if (l_576)
                        continue;
                }
                return l_589;
            }
        }
        else
        { 
            uint8_t l_606[5][5] = {{0x33L,251UL,251UL,0x33L,251UL},{2UL,2UL,0xBEL,2UL,2UL},{251UL,0x33L,251UL,251UL,0x33L},{2UL,0xACL,0xACL,2UL,0xACL},{0x33L,0x33L,255UL,0x33L,0x33L}};
            int32_t l_609 = 0x2CB969A1L;
            struct S0 l_610 = {0x8D9CD76BL,0x11A0667EL,65526UL,0xD46BL};
            struct S0 *l_616 = &l_610;
            int32_t l_619 = 0x5E336B32L;
            int8_t *l_640 = &g_147;
            int i, j;
            for (g_120.f0 = 28; (g_120.f0 > 26); g_120.f0 = safe_sub_func_uint64_t_u_u(g_120.f0, 6))
            { 
                uint32_t l_605 = 1UL;
                l_609 |= ((safe_unary_minus_func_int32_t_s(l_605)) || ((--l_606[2][2]) < 0x995E2F5A59E84379LL));
                if (l_590)
                    break;
                if (((l_610 , (safe_unary_minus_func_int64_t_s(0x4E8C4494CDB9D8B7LL))) | (((-8L) == (g_156 <= l_610.f2)) , (safe_sub_func_int64_t_s_s(((0xD2C4L | 0xF01FL) && 0UL), 18446744073709551608UL)))))
                { 
                    uint8_t l_614 = 0x69L;
                    struct S0 *l_615 = (void*)0;
                    l_616 = (l_614 , l_615);
                }
                else
                { 
                    int32_t *l_620 = (void*)0;
                    int32_t *l_621[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_621[i][j] = &g_3[1];
                    }
                    if (l_610.f1)
                        goto lbl_617;
                    l_618 = &l_550;
                    if ((*g_176))
                        continue;
                    l_622[1]++;
                    if ((**g_175))
                        break;
                }
            }
            l_619 |= ((*p_31) > (0xF4C2A76DL & (((safe_mod_func_uint32_t_u_u(((g_641 = (((safe_add_func_int8_t_s_s(((*l_640) &= (safe_unary_minus_func_int16_t_s((7L ^ ((((*g_176) = (+((void*)0 != l_633))) , ((g_85 = (safe_lshift_func_int16_t_s_s((((l_609 ^= (safe_sub_func_int8_t_s_s((*p_30), ((void*)0 == &g_85)))) || (*p_31)) >= g_3[1]), 14))) >= l_639[0])) > (*l_618)))))), (*g_19))) | (*g_19)) , g_7[2][1][0])) < 0UL), g_223[1])) != 0xA76362C1L) | g_7[5][0][0])));
            (*g_175) = func_37(l_606[0][4]);
            if ((**g_175))
                continue;
            (*l_618) = (*p_31);
        }
        l_642 = l_642;
        g_655++;
    }
    for (g_85 = 0; (g_85 <= 3); g_85 += 1)
    { 
        uint8_t l_664[3][2];
        const uint32_t *l_666 = &g_596;
        const uint32_t **l_665 = &l_666;
        int32_t ** const *l_705[2];
        int32_t ** const ** const l_704[3] = {&l_705[0],&l_705[0],&l_705[0]};
        uint64_t *l_739 = &g_655;
        uint64_t **l_738 = &l_739;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_664[i][j] = 1UL;
        }
        for (i = 0; i < 2; i++)
            l_705[i] = &g_175;
        for (l_654 = 0; l_654 < 5; l_654 += 1)
        {
            for (l_550 = 0; l_550 < 4; l_550 += 1)
            {
                for (g_530 = 0; g_530 < 7; g_530 += 1)
                {
                    l_591[l_654][l_550][g_530] = (-1L);
                }
            }
        }
        (**g_175) = (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(0UL, ((safe_lshift_func_int16_t_s_u(((*l_564) ^= l_664[1][0]), (((*l_665) = p_31) == (((void*)0 == &l_664[1][1]) , p_31)))) != (*p_31)))), l_664[0][0]));
        for (g_530 = 3; (g_530 >= 0); g_530 -= 1)
        { 
            int32_t * const l_682 = &g_683;
            int32_t * const *l_681 = &l_682;
            int32_t * const **l_680 = &l_681;
            int32_t * const ***l_679 = &l_680;
            union U2 l_703 = {0x39B4AA35L};
            uint64_t *l_732[1];
            uint64_t **l_731 = &l_732[0];
            uint64_t l_747 = 0xD518D172971AC95CLL;
            struct S0 l_748 = {0x5D6A21C9L,0x3CCC710BL,0x0799L,1UL};
            int i;
            for (i = 0; i < 1; i++)
                l_732[i] = (void*)0;
            if (((*p_31) = (*p_31)))
            { 
                int32_t * const *l_677 = &l_46;
                int32_t * const **l_676 = &l_677;
                int32_t * const ***l_675 = &l_676;
                int32_t * const ****l_678[5][4] = {{&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675},{&l_675,&l_675,&l_675,&l_675}};
                uint32_t l_686 = 0xFA1A696CL;
                uint64_t l_690 = 0x1A147C534926C0E5LL;
                struct S1 *l_692 = &l_45;
                struct S1 **l_691 = &l_692;
                int32_t ****l_707 = (void*)0;
                int32_t *****l_706 = &l_707;
                int i, j;
                (*p_31) = (safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((l_679 = l_675) == (void*)0), (safe_div_func_int16_t_s_s(l_686, (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(((((**l_681) || ((-1L) != (0x04E3F204F5654F71LL ^ g_565))) == l_690) && l_664[1][1]))), l_550)))))), 10)), g_7[5][0][0])), g_683));
                if ((((l_691 != l_693) > ((*g_19) = (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(0xD6A7L, 9)) < ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((l_703 , l_704[1]) == ((*l_706) = (void*)0)), (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((*p_31) & g_20), 0x7BL)), 2)))), (**l_681))) && (***l_680))), g_7[4][1][0])))) , 0xDEBB6259L))
                { 
                    int32_t l_712 = 0xD9080181L;
                    return l_712;
                }
                else
                { 
                    uint32_t l_718 = 0x5D09D7E7L;
                    int32_t *l_719 = &l_652;
                    int32_t *l_720 = &g_721;
                    uint64_t *l_724 = &l_690;
                    int32_t l_726 = 0x21E67BEFL;
                    (*g_227) = (*g_227);
                    (**l_681) &= 8L;
                    (*p_31) ^= ((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((((((*p_30) = ((safe_unary_minus_func_uint16_t_u((g_156 || (*p_30)))) > (***l_680))) | (((*l_720) = ((*l_719) = (l_718 >= g_452.f0))) , ((((safe_rshift_func_uint8_t_u_s((0x2178L == ((g_453 = &l_703) == (void*)0)), (*l_682))) , g_223[4]) , &l_690) == l_724))) & l_725) != 9L), 6)) || g_224[4]) ^ (-1L)), l_726)) != (**l_681));
                }
                for (g_721 = 3; (g_721 >= 0); g_721 -= 1)
                { 
                    uint64_t l_727 = 0UL;
                    ++l_727;
                    (***l_680) &= (-5L);
                }
                for (g_600 = 0; (g_600 <= 3); g_600 += 1)
                { 
                    if (g_85)
                        goto lbl_730;
                    (*p_31) = ((void*)0 != &l_564);
                }
            }
            else
            { 
                g_733 = l_731;
            }
            for (g_526.f0 = 0; (g_526.f0 <= 3); g_526.f0 += 1)
            { 
                uint32_t ***l_736 = &l_734[2];
                uint32_t **l_737 = &l_735[3][1];
                struct S0 l_750 = {0xEC3B7733L,4294967295UL,0x8B9FL,8UL};
                if (((l_737 = ((*l_736) = l_734[4])) == ((((((**l_681) != ((((void*)0 != l_738) ^ ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((l_746 < ((void*)0 == &l_639[0])), l_747)) , 0x4BL), 3)), 11)) <= g_598)) && (*p_31))) == 0x9902L) & (-8L)) <= (-6L)) , (void*)0)))
                { 
                    struct S0 *l_749[7] = {&l_748,&g_526,&g_526,&l_748,&g_526,&g_526,&l_748};
                    int i;
                    l_750 = l_748;
                }
                else
                { 
                    struct S0 *l_751 = &l_748;
                    const int32_t l_752 = 0x44CDC8BEL;
                    (*l_751) = (g_51 , g_432);
                    if (l_752)
                        break;
                    if (g_598)
                        goto lbl_753;
                }
            }
        }
    }
    for (g_120.f0 = 0; (g_120.f0 <= 3); g_120.f0 += 1)
    { 
        uint64_t * const l_762 = &g_655;
        uint64_t * const *l_761 = &l_762;
        int64_t *l_771 = &g_600;
        struct S0 *l_772 = (void*)0;
        struct S0 **l_773 = &l_772;
        int i;
        (*g_176) &= ((*p_31) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(l_639[g_120.f0])), ((-1L) | (safe_sub_func_int64_t_s_s((((void*)0 != l_761) && (&l_639[g_120.f0] == &l_653)), (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((*l_771) |= (-1L)) && l_746), (*g_19))) ^ g_7[0][0][0]), l_45.f0)), 11)), 7))))))), l_639[g_120.f0])));
        (*l_773) = l_772;
        if (((*p_31) ^ (l_725 = l_639[g_120.f0])))
        { 
            return g_641;
        }
        else
        { 
            int64_t l_776 = 0xDEC5FA7F05E808A2LL;
            (**g_175) = (safe_add_func_uint16_t_u_u((l_776 != (((safe_add_func_uint8_t_u_u((p_30 != (void*)0), ((&l_762 != (void*)0) && 255UL))) ^ ((safe_mul_func_int16_t_s_s((0xA2E9ACC3L == (*g_176)), l_776)) | 5UL)) & (*g_176))), 0x9A22L));
        }
    }
    return l_781;
}



static int32_t  func_33(int8_t * p_34, int32_t * p_35)
{ 
    uint32_t l_549 = 0x872A3EACL;
    return l_549;
}



static int32_t * func_37(uint16_t  p_38)
{ 
    uint32_t l_536 = 0xAA4D967EL;
    uint16_t *l_541[5][3] = {{&g_526.f3,&g_526.f2,&g_526.f3},{&g_526.f3,&g_82.f1.f0,&g_526.f3},{&g_526.f3,&g_526.f2,&g_526.f3},{&g_526.f3,&g_82.f1.f0,&g_526.f3},{&g_526.f3,&g_526.f2,&g_526.f3}};
    int32_t l_542 = 0x5319D26FL;
    int i, j;
    (*g_176) |= (((((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_536, (safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((l_542 = g_452.f3), (safe_lshift_func_int8_t_s_u(((g_545 = l_541[0][1]) == (g_546 = l_541[3][2])), 2)))) | ((safe_rshift_func_int8_t_s_s(0x4FL, l_536)) ^ 0x96L)), l_536)))), 4294967295UL)) , l_536) | p_38) || l_536) <= l_536);
    return (*g_175);
}



static const struct S0  func_39(int64_t  p_40, uint16_t  p_41)
{ 
    int32_t *l_71 = &g_2[2];
    int32_t **l_70 = &l_71;
    int32_t ***l_69 = &l_70;
    int32_t l_97 = (-1L);
    int32_t l_98 = 0x7157DACBL;
    int32_t l_99 = (-1L);
    int64_t l_155 = (-1L);
    int32_t l_162[2];
    uint64_t l_166[7][2];
    int64_t l_213 = 0xF15DA5D19DA46A6CLL;
    const uint8_t *l_217 = &g_82.f3;
    int64_t l_222[3];
    uint32_t l_232 = 2UL;
    int32_t ****l_235[3];
    uint64_t l_320 = 0x43CEBBD0841CFCD2LL;
    uint8_t l_362 = 254UL;
    const int16_t *l_377 = &g_146[5];
    const struct S0 l_394 = {18446744073709551606UL,0UL,0UL,0xDAD7L};
    uint32_t l_414[7][6] = {{0xF7DEC0CFL,0xF9921DADL,0x38D32E37L,2UL,0x81F5BAF9L,0x81F5BAF9L},{2UL,0x81F5BAF9L,0x81F5BAF9L,2UL,0x38D32E37L,0xF9921DADL},{0xF7DEC0CFL,1UL,0x9E81DD16L,0xF9921DADL,1UL,1UL},{1UL,0x38D32E37L,1UL,0x38D32E37L,1UL,0xB01533F6L},{1UL,1UL,0xBE05C661L,4294967292UL,0x38D32E37L,0x9E81DD16L},{0x9E81DD16L,0x81F5BAF9L,1UL,1UL,0x81F5BAF9L,0x9E81DD16L},{4294967292UL,0xF9921DADL,0xBE05C661L,1UL,0x9E81DD16L,0xB01533F6L}};
    uint16_t l_431 = 0UL;
    int32_t ****l_492 = &l_69;
    int i, j;
    for (i = 0; i < 2; i++)
        l_162[i] = 0L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_166[i][j] = 0x7B9707EC07D53976LL;
    }
    for (i = 0; i < 3; i++)
        l_222[i] = 0x90D848C7A0681AF4LL;
    for (i = 0; i < 3; i++)
        l_235[i] = &l_69;
lbl_370:
    for (p_41 = 0; (p_41 >= 23); ++p_41)
    { 
        int32_t *l_56 = &g_7[5][0][0];
        union U2 l_64[4] = {{0xC4D35571L},{0xC4D35571L},{0xC4D35571L},{0xC4D35571L}};
        uint32_t *l_67 = (void*)0;
        uint32_t *l_68 = &g_51;
        int32_t l_100 = 1L;
        int32_t l_101 = 0x1B60CE22L;
        struct S1 *l_119 = &g_120;
        int32_t *l_122 = (void*)0;
        int32_t *l_123[1];
        int64_t l_142 = 1L;
        uint16_t l_163 = 3UL;
        uint32_t l_197 = 4UL;
        int32_t l_221 = 0xA988B8C5L;
        int i;
        for (i = 0; i < 1; i++)
            l_123[i] = &l_101;
        (*l_56) = (safe_lshift_func_uint16_t_u_u(65535UL, 14));
    }
    if (((g_227 = g_227) == &g_174[3]))
    { 
        int32_t *l_229 = &g_3[1];
        int32_t *l_230 = &g_2[2];
        int32_t *l_231[7];
        int32_t ****l_249 = &g_174[3];
        uint64_t l_276 = 18446744073709551606UL;
        struct S1 l_321 = {0xD863L};
        int8_t l_329 = 0L;
        int i;
        for (i = 0; i < 7; i++)
            l_231[i] = &l_162[0];
lbl_299:
        --l_232;
        l_231[0] = l_230;
        (**g_175) = ((void*)0 == l_235[1]);
        for (l_98 = 0; (l_98 <= 4); l_98 += 1)
        { 
            int64_t l_248 = 0x5519FD23FB492015LL;
            int32_t ****l_250 = &g_174[3];
            int16_t l_251 = (-1L);
            int32_t l_256 = 0x504D6D58L;
            int32_t l_260[7][4] = {{0L,0xFE7A2C51L,0L,0L},{0xFE7A2C51L,0xF8C57107L,0x8D93498EL,0x50D462A0L},{0x50D462A0L,0xEB3200A3L,0x27DCED75L,0xF8C57107L},{8L,0x27DCED75L,0x27DCED75L,8L},{0L,1L,(-1L),0xF8C57107L},{0x50D462A0L,0x8D93498EL,0xF8C57107L,0xFE7A2C51L},{0xF8C57107L,0xFE7A2C51L,0xA985E607L,0xFE7A2C51L}};
            const struct S0 l_274 = {1UL,4294967295UL,2UL,0xA09AL};
            uint16_t *l_297 = &g_120.f0;
            uint8_t l_298 = 0x9BL;
            uint64_t l_330 = 18446744073709551615UL;
            union U2 *l_350[1];
            uint64_t l_367 = 18446744073709551613UL;
            const struct S1 l_376[6] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_350[i] = &g_82;
            for (g_78 = 0; (g_78 <= 4); g_78 += 1)
            { 
                int32_t l_253 = 1L;
                int32_t l_254 = 7L;
                int32_t l_257[3];
                int8_t l_265 = 3L;
                uint32_t l_268 = 0UL;
                int32_t l_275[1][6][6] = {{{8L,0x74AB278CL,(-7L),(-2L),0L,(-2L)},{0x89F1A001L,0x99C70E43L,0x89F1A001L,0xA59098D1L,0L,0xE33793E1L},{(-7L),0x74AB278CL,8L,0x89F1A001L,0x89F1A001L,8L},{0x2614E631L,0x2614E631L,0xD9C287AFL,0x89F1A001L,0x74AB278CL,0xA59098D1L},{(-7L),0xD9C287AFL,0xE33793E1L,0xA59098D1L,0xE33793E1L,0xD9C287AFL},{0x89F1A001L,(-7L),0xE33793E1L,(-2L),0x2614E631L,0xA59098D1L}}};
                int64_t *l_286 = &l_155;
                struct S1 l_323 = {0x952FL};
                uint32_t l_326 = 0x947211DBL;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_257[i] = 0xB8262D47L;
                if (((*l_71) ^= ((((((safe_add_func_uint32_t_u_u((g_82 , (g_224[l_98] <= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s((((((safe_sub_func_uint8_t_u_u((((((((safe_lshift_func_int8_t_s_u(5L, 2)) > (g_224[g_78] < ((void*)0 != &l_69))) ^ p_41) | (*g_19)) <= 4294967295UL) > 0xE295C7D5L) & g_7[2][0][0]), g_20)) || g_146[6]) ^ p_40) ^ 1UL) >= 0x23L), g_3[1])) , g_224[g_78]) >= l_248), 0x68L)), 2)))), g_224[g_78])) > p_40) >= g_51) , l_249) != l_250) > p_40)))
                { 
                    int16_t l_252 = 0xC5DAL;
                    int32_t l_255 = 0xBAD87660L;
                    int32_t l_258 = 0x4FC86CB7L;
                    int8_t l_259 = (-2L);
                    int32_t l_261 = (-5L);
                    int32_t l_262 = (-1L);
                    int32_t l_263 = 0x0D7219D6L;
                    int32_t l_264 = 0x73319C66L;
                    int32_t l_266 = (-6L);
                    int32_t l_267[1][1][7] = {{{0x8BAE48ADL,(-4L),(-4L),0x8BAE48ADL,(-4L),(-4L),0x8BAE48ADL}}};
                    uint16_t *l_273 = &g_82.f1.f0;
                    int i, j, k;
                    l_251 = (g_156 < (-4L));
                    --l_268;
                    if ((*g_176))
                        continue;
                    if ((*g_176))
                        break;
                    (*l_229) = (safe_sub_func_int16_t_s_s(l_257[0], ((*l_273) = g_156)));
                }
                else
                { 
                    return l_274;
                }
                ++l_276;
                for (l_276 = 0; (l_276 < 5); ++l_276)
                { 
                    return l_274;
                }
                if ((((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((***l_69), (~((*l_286) = g_223[1])))), ((void*)0 == &g_120))) >= (safe_rshift_func_uint8_t_u_u((((((safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_297 != ((3L & (l_298 & p_41)) , (void*)0)), 7)), p_40)), (***l_69))) <= 0x67BEEB56L), g_82.f0)) <= p_40) & 0x68L) < p_40) & 65534UL), 0))) , (****l_250)))
                { 
                    union U2 *l_301[3];
                    union U2 **l_300 = &l_301[2];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_301[i] = &g_82;
                    if (l_274.f1)
                        goto lbl_299;
                    (*l_300) = &g_82;
                    (*g_175) = (*g_175);
                }
                else
                { 
                    int16_t l_306 = (-10L);
                    int32_t *l_322[4][4] = {{&l_162[1],&l_162[1],&l_98,&l_162[1]},{&l_162[1],&l_275[0][1][4],&l_98,&l_98},{&l_162[1],&l_162[1],&l_162[1],&l_98},{&l_257[2],&l_275[0][1][4],&l_257[2],&l_162[1]}};
                    struct S1 *l_324 = (void*)0;
                    struct S1 *l_325 = &l_323;
                    int i, j;
                    (**l_69) = (***l_250);
                    l_253 &= (p_41 | ((*g_19) || (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_306, l_306)), (g_146[2] = (safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((((~(safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((**l_70) = (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((*g_19), ((p_40 , 1UL) | p_41))) , p_40), 0))), p_40)) , g_78), g_4))) && l_320) > g_85), 4)) ^ g_223[1]) && g_3[1]), g_120.f0)))))));
                    l_322[2][2] = (l_321 , (void*)0);
                    (*l_325) = l_323;
                    l_326--;
                }
            }
            l_330--;
            (*l_229) = ((****l_250) = ((safe_add_func_uint16_t_u_u((**l_70), (safe_unary_minus_func_uint8_t_u(((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((**l_70), (!(safe_add_func_int8_t_s_s(((g_82.f0 , (void*)0) == &p_41), (safe_mul_func_int8_t_s_s((***l_69), (p_41 & (****l_250))))))))), 0x4AL)) || p_40), g_3[1])) ^ p_41))))) > g_4));
            (*l_229) = (((p_40 >= (--(*l_297))) >= g_85) < (safe_unary_minus_func_uint64_t_u(((void*)0 != l_350[0]))));
            if (((*l_230) = p_40))
            { 
                int64_t l_372 = 3L;
                int64_t *l_409 = (void*)0;
                int64_t *l_410 = (void*)0;
                int64_t *l_411[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_412[1];
                int32_t l_413[6];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_412[i] = 9L;
                for (i = 0; i < 6; i++)
                    l_413[i] = 0x0C6803B6L;
                for (l_155 = 11; (l_155 <= (-19)); l_155 = safe_sub_func_int16_t_s_s(l_155, 7))
                { 
                    struct S1 *l_353 = &g_120;
                    uint32_t *l_365 = &g_51;
                    int32_t l_366 = 0x11AE6E56L;
                    (*l_353) = g_120;
                    (*g_176) = (safe_rshift_func_uint8_t_u_s(4UL, ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((*l_229), 12)), ((*g_19) = (safe_mul_func_int16_t_s_s((l_362 & 0xB9A815CAL), ((safe_div_func_uint8_t_u_u(p_41, ((((*l_353) , l_365) == (void*)0) && g_49))) , 0x73F0L)))))) != (*g_176))));
                    ++l_367;
                }
                if (p_41)
                { 
                    int32_t l_371 = (-9L);
                    if (g_120.f0)
                        goto lbl_370;
                    (***l_250) = (***l_250);
                    l_372 = ((*l_229) |= l_371);
                }
                else
                { 
                    const int16_t **l_378 = &l_377;
                    const struct S0 l_391 = {1UL,0xB1CC5B01L,1UL,65535UL};
                    (****l_250) ^= (18446744073709551615UL && g_78);
                    (*l_229) |= ((safe_rshift_func_uint16_t_u_u(g_156, ((((!(l_376[3] , (((*l_378) = l_377) != &g_146[6]))) & ((0xFF698FAA8280FFA9LL == (safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(0xEBL, (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u(g_223[1], 4)) , &g_228) == &l_69), 0x417BA2DDB05C8518LL)), 8)), g_156)) , l_350[0]) != l_350[0]))) | g_82.f3), 0xFB95L))) > (***l_69))) | (-10L)) | (****l_249)))) | p_40);
                    return l_391;
                }
                for (g_51 = 0; (g_51 != 40); g_51 = safe_add_func_int16_t_s_s(g_51, 8))
                { 
                    return l_394;
                }
                if ((****l_249))
                    continue;
                (*l_229) |= (safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((g_2[2] | ((4294967293UL | (((safe_sub_func_int32_t_s_s(p_41, l_372)) < ((safe_rshift_func_uint16_t_u_s(((((l_413[4] &= ((l_372 | (l_412[0] = (safe_add_func_int32_t_s_s((g_85 || (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0L, (**l_70))), (****l_250)))), (****l_250))))) <= g_51)) <= g_224[2]) ^ p_40) < 0xA74E29A5L), 9)) & 4294967291UL)) | l_414[4][5])) , g_4)), g_51)) , (****l_250)), 0x9EAFL));
            }
            else
            { 
                int16_t l_419 = 0x563AL;
                for (l_251 = 0; (l_251 > 9); l_251 = safe_add_func_uint64_t_u_u(l_251, 2))
                { 
                    (*l_230) ^= (safe_lshift_func_int8_t_s_s(p_41, p_40));
                }
                if (l_419)
                { 
                    union U2 **l_421 = &l_350[0];
                    union U2 ***l_420 = &l_421;
                    (*l_420) = (void*)0;
                }
                else
                { 
                    uint32_t l_430 = 0xA0DF20E0L;
                    l_431 &= ((*g_176) = (0xB5B868FDL > ((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s((p_40 & (g_4 == (safe_rshift_func_uint16_t_u_u((((****l_250) <= 0x2EFFDA58L) ^ 0xA0C0C4A79FA3AD95LL), 7)))), (l_430 > g_2[1]))), l_430)) <= (****l_250)), 0xE58B13FAL)) || (*l_229))));
                    (*l_70) = (***l_249);
                    (****l_250) = l_430;
                    return g_432;
                }
                return g_432;
            }
        }
        (*l_229) &= ((safe_rshift_func_int8_t_s_u((-3L), 3)) , (*g_176));
    }
    else
    { 
        int16_t l_437 = 0xB8C5L;
        union U2 *l_448 = (void*)0;
        const int32_t *l_454 = &g_223[4];
        int32_t l_457 = 0x0B4AF93EL;
        int32_t ****l_489 = &g_174[3];
        (***l_69) ^= (safe_add_func_uint32_t_u_u(l_437, g_223[4]));
lbl_529:
        for (g_120.f0 = (-21); (g_120.f0 < 30); g_120.f0 = safe_add_func_int8_t_s_s(g_120.f0, 1))
        { 
            uint32_t l_440 = 5UL;
            const int32_t *l_456[1][3][4] = {{{&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99}}};
            int32_t l_485 = 0x8D0DEDBBL;
            int32_t l_518 = 0L;
            struct S1 *l_524 = &g_120;
            struct S1 **l_523 = &l_524;
            int i, j, k;
            l_440++;
            for (l_431 = (-24); (l_431 >= 1); l_431 = safe_add_func_int64_t_s_s(l_431, 1))
            { 
                uint16_t l_445 = 0x979BL;
                union U2 **l_449 = (void*)0;
                union U2 **l_450[2];
                const int32_t **l_455[5];
                int i;
                for (i = 0; i < 2; i++)
                    l_450[i] = (void*)0;
                for (i = 0; i < 5; i++)
                    l_455[i] = &g_48[2];
                l_445++;
                if (g_82.f3)
                    goto lbl_370;
                (*l_71) = (((g_451 = l_448) != (g_453 = &g_82)) , 0x275D7CE2L);
                l_456[0][1][3] = (g_48[2] = l_454);
            }
            l_457 &= 0x725513B1L;
            for (p_41 = 0; (p_41 == 44); p_41++)
            { 
                for (l_437 = 0; (l_437 >= 0); l_437 -= 1)
                { 
                    uint64_t *l_467 = &l_320;
                    uint8_t *l_474 = &g_85;
                    uint8_t *l_477[2][1][7] = {{{&l_362,&l_362,&l_362,&l_362,&l_362,&l_362,&l_362}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t l_486 = (-8L);
                    int i, j, k;
                    if ((***l_69))
                        break;
                    l_486 ^= (safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((((*l_467)++) <= (safe_lshift_func_uint16_t_u_s(65528UL, (0x31A2BCB8L && (safe_sub_func_uint16_t_u_u(((g_478 = (--(*l_474))) , ((safe_unary_minus_func_uint32_t_u(0x2397F001L)) , (safe_add_func_int32_t_s_s(0xD8B398FEL, ((void*)0 != g_482[1][1]))))), (safe_rshift_func_uint16_t_u_s((0x40EEC1F7E90F0489LL ^ p_41), p_40)))))))))), (**l_70))), 8UL)), l_485));
                }
            }
            for (l_99 = 0; (l_99 == 12); ++l_99)
            { 
                int32_t *****l_490 = &l_235[1];
                int32_t *****l_491[5] = {&l_489,&l_489,&l_489,&l_489,&l_489};
                uint32_t l_495 = 18446744073709551613UL;
                int i;
                l_492 = ((*l_490) = l_489);
                for (l_485 = (-28); (l_485 >= (-22)); l_485 = safe_add_func_int8_t_s_s(l_485, 3))
                { 
                    uint8_t l_517 = 7UL;
                    if ((*g_176))
                        break;
                    --l_495;
                    l_518 = ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((p_41 & ((((((****l_489) = (safe_add_func_uint16_t_u_u((255UL | (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((p_40 == ((&g_82 == l_448) | ((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u((~((((((safe_sub_func_uint64_t_u_u(g_85, ((g_223[1] && p_40) >= g_78))) < p_41) == p_40) | (****l_489)) || 0x5E74L) < 0x21D79EC05874A23DLL)), (-8L))) , p_40) < 0x4045L), 6)) == 0L))) , p_41), 2)), p_40))), l_517))) ^ g_146[0]) & (-5L)) , 0x2471DEEFL) == p_41)) && p_41) & p_41), l_517)), 0xCACDC159L)) < p_41);
                }
                for (l_213 = (-15); (l_213 > (-9)); l_213 = safe_add_func_int8_t_s_s(l_213, 2))
                { 
                    struct S1 *l_522 = &g_120;
                    struct S1 **l_521 = &l_522;
                    struct S0 *l_525 = &g_526;
                    l_523 = (g_147 , l_521);
                    (*l_525) = g_432;
                }
                (****l_489) &= 0x4D79B805L;
            }
        }
        for (g_20 = 0; (g_20 >= 20); g_20 = safe_add_func_int16_t_s_s(g_20, 2))
        { 
            if (g_20)
                goto lbl_529;
        }
    }
    g_530 |= (****l_492);
    return l_394;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_82.f3, "g_82.f3", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_120.f0, "g_120.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_223[i], "g_223[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_224[i], "g_224[i]", print_hash_value);

    }
    transparent_crc(g_432.f0, "g_432.f0", print_hash_value);
    transparent_crc(g_432.f1, "g_432.f1", print_hash_value);
    transparent_crc(g_432.f2, "g_432.f2", print_hash_value);
    transparent_crc(g_432.f3, "g_432.f3", print_hash_value);
    transparent_crc(g_452.f0, "g_452.f0", print_hash_value);
    transparent_crc(g_452.f3, "g_452.f3", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_526.f0, "g_526.f0", print_hash_value);
    transparent_crc(g_526.f1, "g_526.f1", print_hash_value);
    transparent_crc(g_526.f2, "g_526.f2", print_hash_value);
    transparent_crc(g_526.f3, "g_526.f3", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_864[i], "g_864[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_879[i], "g_879[i]", print_hash_value);

    }
    transparent_crc(g_930.f0, "g_930.f0", print_hash_value);
    transparent_crc(g_930.f3, "g_930.f3", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1007[i][j][k].f0, "g_1007[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1223, "g_1223", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1267[i][j][k], "g_1267[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
