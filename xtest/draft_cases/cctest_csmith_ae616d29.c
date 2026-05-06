// SPDX-License-Identifier: MIT
// cctest_csmith_ae616d29.c --- cctest case csmith_ae616d29 (csmith seed 2925620521)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x264f865a */

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

// Options:   -s 2925620521 -o /tmp/csmith_gen_wbttil1j/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int64_t g_11 = 0xC541651328F6C74ALL;
static int32_t g_30 = 0x9C4DDB84L;
static uint32_t g_47 = 4294967295UL;
static uint32_t g_54 = 0xBC1F9C85L;
static int16_t g_63 = (-1L);
static int8_t g_64 = 1L;
static uint64_t g_66 = 0x3DAD933B151854E4LL;
static int16_t g_96 = 0L;
static uint16_t g_114 = 0x3A4BL;
static int16_t g_115 = 0xDFB5L;
static int32_t g_124 = (-1L);
static int64_t g_127[3][1] = {{1L},{1L},{1L}};
static const uint32_t g_160 = 0x16C188A1L;
static uint64_t g_162 = 18446744073709551609UL;
static int16_t g_163 = 0L;
static int8_t g_181 = 0L;
static int16_t g_195[1][1] = {{0x4296L}};
static uint64_t g_210 = 18446744073709551615UL;
static int16_t g_211 = 0L;
static int8_t g_237 = 8L;
static uint32_t g_240[3] = {0x4208AA58L,0x4208AA58L,0x4208AA58L};
static uint64_t g_246 = 0xDC2EDBB1F5C7022BLL;
static uint32_t g_247 = 0xBC87BEFEL;



static int32_t  func_1(void);
static int8_t  func_4(int8_t  p_5, uint8_t  p_6, uint64_t  p_7, int64_t  p_8, int32_t  p_9);
static int16_t  func_21(int32_t  p_22, uint16_t  p_23, int64_t  p_24);




static int32_t  func_1(void)
{ 
    uint32_t l_10 = 0xE5C7A00FL;
    uint32_t l_74 = 0UL;
    int32_t l_99 = (-1L);
    int32_t l_100 = (-4L);
    uint64_t l_101 = 0x1EB1534744A690E3LL;
    int16_t l_137 = (-1L);
    uint64_t l_138[4][4] = {{0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL},{0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL},{0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL},{0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL,0x888D3F9E7EE7FC08LL}};
    uint32_t l_168 = 18446744073709551615UL;
    uint8_t l_245 = 0x1FL;
    int i, j;
    if ((safe_rshift_func_int8_t_s_u(func_4((((g_11 = l_10) , ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((~(safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((func_21((+g_11), (safe_unary_minus_func_int16_t_s((safe_mul_func_uint16_t_u_u(g_11, 65535UL)))), l_10) < g_63) , g_11), l_10)), 0))) >= 5UL), l_74)), 8UL)) < g_63)) , 0x96L), l_74, g_64, g_64, l_10), 2)))
    { 
        int8_t l_98[4][2];
        int8_t l_125 = (-2L);
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_98[i][j] = 0xCAL;
        }
        --l_101;
        if (((safe_add_func_int64_t_s_s(g_47, (((g_114 = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((l_99 = (safe_mul_func_int16_t_s_s(((l_99 < (safe_rshift_func_uint8_t_u_u(0UL, g_30))) , g_30), 1L))), (-1L))), g_47))) ^ 7L) , l_98[2][0]))) == l_74))
        { 
            int32_t l_122 = 0x06A83B75L;
            int32_t l_123[3];
            int i;
            for (i = 0; i < 3; i++)
                l_123[i] = (-1L);
            g_115 = g_47;
            g_124 ^= ((g_115 ^ (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((((((g_115 > (((safe_add_func_int32_t_s_s((l_122 &= (l_98[1][1] == g_114)), l_100)) > l_123[2]) >= g_63)) < l_98[2][1]) == 0xB4L) & g_63) || g_96), g_64)), l_123[2]))) & 0UL);
            l_125 = 0L;
        }
        else
        { 
            uint64_t l_126 = 1UL;
            g_127[0][0] = l_126;
        }
    }
    else
    { 
        uint32_t l_134 = 9UL;
        uint8_t l_176 = 0x9CL;
        const int32_t l_196[4] = {0x7732ECB4L,0x7732ECB4L,0x7732ECB4L,0x7732ECB4L};
        int32_t l_197 = (-9L);
        int i;
        if (((((((g_30 , ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s((l_134 || ((((((safe_mod_func_int32_t_s_s(l_99, 4294967287UL)) > 0x91DFL) >= 0xC9L) , 250UL) || l_137) != g_66)), 0)) <= 0UL), l_134)) | 9UL)) >= l_134) || 0xF8CFL) , g_96) != 0L) , l_138[2][1]))
        { 
            int64_t l_169 = 0x158A726563165A29LL;
            for (l_99 = 0; (l_99 <= 0); l_99 += 1)
            { 
                uint32_t l_161 = 1UL;
                g_163 = ((safe_add_func_uint64_t_u_u((g_162 = (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((((-1L) > (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((((-1L) == (safe_sub_func_int8_t_s_s((!(safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(g_127[0][0], 11)) < 0x27L) > g_47), g_160)), g_114)), g_127[0][0]))), 0x94L))) & l_161) & g_127[1][0]), 9)), g_114))) > l_134) && 0x9F66274CL) & g_64), g_11)) & 0x4CF6L), 0x45L))), g_124)) && 0x3AA939E12E8AAE05LL);
                l_169 |= (safe_lshift_func_int8_t_s_u(l_137, ((safe_add_func_uint32_t_u_u(g_47, (l_168 || g_47))) , l_134)));
                g_181 ^= (safe_sub_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((l_100 = (((((65527UL | (++l_176)) ^ ((((((g_114 |= 0x3E55L) < (safe_sub_func_uint32_t_u_u(6UL, 4294967295UL))) ^ 0x12ABF099L) != g_64) != l_169) & l_138[2][1])) >= g_124) == 0UL) , l_169)), g_160)) | 0xF546L) && l_161), 0x6AE705E6A0804737LL)) , 0x53C7L), g_127[0][0]));
            }
            return g_127[0][0];
        }
        else
        { 
            int8_t l_184 = (-1L);
            uint8_t l_208 = 0UL;
            int32_t l_209 = (-8L);
            for (l_176 = (-23); (l_176 >= 45); ++l_176)
            { 
                return l_184;
            }
            if ((0x6A0D05BAL || (249UL || (((~(l_99 = ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(0L)), l_176)) ^ l_134))) , 0xAFL) , l_176))))
            { 
                l_197 = ((safe_rshift_func_int8_t_s_u((g_181 || (safe_sub_func_int16_t_s_s(((((safe_div_func_int8_t_s_s((((g_63 <= ((g_114 = (l_137 , g_195[0][0])) , l_196[3])) ^ l_176) , g_162), (-1L))) & 1UL) , g_66) || 65535UL), l_184))), 0)) >= g_127[1][0]);
            }
            else
            { 
                g_211 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_63 >= (g_210 = (l_209 = (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_208 , g_127[0][0]), g_66)), 0x38ADB6E0L)), 0L))))), 0)), g_64));
            }
        }
    }
    for (g_47 = 4; (g_47 > 37); g_47++)
    { 
        int8_t l_227 = (-3L);
        int32_t l_228 = 0x76F327A7L;
        for (l_99 = 0; (l_99 <= (-28)); l_99--)
        { 
            int64_t l_216[4][2] = {{0L,0xF529ED1989E60245LL},{0L,0xF529ED1989E60245LL},{0L,0xF529ED1989E60245LL},{0L,0xF529ED1989E60245LL}};
            int i, j;
            l_216[1][1] |= g_115;
            if ((safe_rshift_func_int16_t_s_u((!(((l_99 >= (safe_mul_func_uint16_t_u_u(((l_216[0][1] , l_74) & 0xE824C827FE7776E9LL), g_162))) != 0x3F4DB05CL) > 0x91L)), 0)))
            { 
                uint32_t l_224 = 18446744073709551615UL;
                l_228 = (safe_add_func_int16_t_s_s(l_224, (g_96 & (safe_mul_func_int8_t_s_s(((g_54 & l_227) != 1L), g_162)))));
                l_100 = (safe_unary_minus_func_uint32_t_u(4294967295UL));
            }
            else
            { 
                uint16_t l_230[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_230[i] = 1UL;
                --l_230[0];
                g_237 = (l_228 = ((((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(g_115, 3)) && (0x55L == (((-3L) < l_227) || g_160))) != (-7L)), 0x42L)) > l_99) & g_162) || g_162));
                return g_30;
            }
        }
        g_247 = (((((g_240[2] &= (g_54--)) , ((safe_add_func_uint8_t_u_u(((g_11 |= g_127[0][0]) && ((g_246 = ((safe_sub_func_uint64_t_u_u(0xAD90D2FA85E07166LL, l_245)) || 0x3810D713L)) && 0xC1EE95B8L)), l_227)) & 0L)) != 0x9CL) == g_195[0][0]) ^ l_227);
    }
    return l_137;
}



static int8_t  func_4(int8_t  p_5, uint8_t  p_6, uint64_t  p_7, int64_t  p_8, int32_t  p_9)
{ 
    int8_t l_75[1][1];
    int32_t l_78 = 0xD3A61860L;
    int64_t l_95[2][1];
    int32_t l_97 = 0x5FBB4CDDL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_75[i][j] = 0L;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_95[i][j] = 0xBB50BB1179EF6EAELL;
    }
    for (g_11 = 0; (g_11 >= 0); g_11 -= 1)
    { 
        int16_t l_79 = 1L;
        int16_t l_86 = 0L;
        int32_t l_87 = 1L;
        l_78 = (safe_add_func_int16_t_s_s(p_5, p_5));
        l_79 = p_8;
        for (p_5 = 0; (p_5 <= 0); p_5 += 1)
        { 
            int i, j;
            l_87 = ((((safe_mod_func_uint16_t_u_u((l_75[g_11][g_11] >= (safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((l_86 |= 0UL) , g_63), g_11)), 254UL))), 0x3A37L)) < l_78) ^ 0UL) , 0x04586DB8L);
            if (p_7)
                continue;
        }
    }
    l_97 = ((safe_lshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((g_64 = (((p_7 = (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(l_95[0][0])), g_30))) | (l_78 ^= (p_9 > 8UL))) , g_96)), l_75[0][0])) , g_96), l_95[0][0])) != 0x2110C122BDA4FDBCLL);
    return l_75[0][0];
}



static int16_t  func_21(int32_t  p_22, uint16_t  p_23, int64_t  p_24)
{ 
    int64_t l_29[3];
    int32_t l_39 = 3L;
    int32_t l_40[2];
    int i;
    for (i = 0; i < 3; i++)
        l_29[i] = 0xB6EAB3CF81320F2DLL;
    for (i = 0; i < 2; i++)
        l_40[i] = 7L;
    g_30 = (((l_29[0] = (p_24 != 1UL)) || l_29[1]) != g_11);
    l_40[0] ^= ((((g_30 > 0x9A275FF4L) , ((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_39 ^= (safe_sub_func_uint64_t_u_u(g_11, l_29[2]))), p_24)), 0x63L)), l_29[2])) & p_23)) , g_30) , g_11);
    if (((safe_lshift_func_int8_t_s_u(((g_47 = ((((safe_sub_func_uint32_t_u_u(0UL, ((-1L) == (((l_40[0] = g_11) < g_11) > p_24)))) | 0xF407293CC9D6C840LL) < p_24) || 0xDBF12959AF2C67A9LL)) <= 0UL), l_39)) || 248UL))
    { 
        uint32_t l_52 = 2UL;
        int32_t l_53 = 0xEE07F093L;
        int32_t l_55 = 0x94A98A1BL;
        uint64_t l_62 = 0x3A04BB84A8A623B0LL;
        int32_t l_65[3][2];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_65[i][j] = 0x11D73CB4L;
        }
        l_55 = (0x77ED469FL <= (g_54 &= (((0x9E864ADBL || (l_53 = ((safe_mul_func_int16_t_s_s((((((safe_mod_func_int32_t_s_s(g_11, l_52)) < 0x5348L) ^ 0xD7L) != g_30) , l_52), 0x0146L)) >= p_24))) , 6L) < p_24)));
        l_55 ^= (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((l_62 = ((safe_sub_func_int8_t_s_s(((p_22 | ((p_23 || p_24) ^ l_29[1])) >= 0x1BL), p_22)) , l_53)) ^ g_47), p_24)), p_22));
        g_66++;
    }
    else
    { 
        int32_t l_73 = 0x8B735D46L;
        for (g_30 = 0; (g_30 != (-24)); g_30 = safe_sub_func_int64_t_s_s(g_30, 6))
        { 
            for (p_23 = 15; (p_23 <= 28); p_23++)
            { 
                l_73 = (0xFDCF91F6L && 4294967295UL);
            }
        }
        return g_63;
    }
    return p_23;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_127[i][j], "g_127[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_195[i][j], "g_195[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_240[i], "g_240[i]", print_hash_value);

    }
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
