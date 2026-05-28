// SPDX-License-Identifier: MIT
// cctest_csmith_4590680e.c --- cctest case csmith_4590680e (csmith seed 1167091726)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9038e2c4 */
/* @exp_ticks 0x62ea */

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

// Options:   -s 1167091726 -o /tmp/csmith_gen_i7fzv3wq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int16_t  f1;
   int16_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   uint32_t  f1;
   int8_t  f2;
   int16_t  f3;
};

union U2 {
   uint32_t  f0;
   int8_t  f1;
   struct S0  f2;
};

union U4 {
   const int8_t  f0;
   uint16_t  f1;
   uint16_t  f2;
};


static union U2 g_15 = {4294967292UL};
static int8_t g_17[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static struct S0 g_43[1][1] = {{{0x761B8CE2L,0x955DL,0L,0x422F8DC7L}}};
static int8_t g_52 = 9L;
static int64_t g_53 = (-8L);
static int32_t g_55 = 7L;
static int16_t g_58[1][1][3] = {{{0x1D1BL,0x1D1BL,0x1D1BL}}};
static uint32_t g_60 = 1UL;
static union U1 g_65[4][5] = {{{2UL},{1UL},{2UL},{2UL},{1UL}},{{1UL},{2UL},{2UL},{1UL},{2UL}},{{1UL},{1UL},{1UL},{1UL},{1UL}},{{2UL},{1UL},{2UL},{2UL},{1UL}}};
static int8_t g_84 = 0x92L;
static int64_t g_85 = 0L;
static uint8_t g_86 = 7UL;
static int32_t g_104 = (-1L);
static int32_t g_106[5] = {0L,0L,0L,0L,0L};
static int8_t g_107 = 0x28L;
static union U4 g_129[3][1][4] = {{{{0x87L},{0x87L},{0x16L},{1L}}},{{{0x79L},{0x82L},{0x79L},{0x16L}}},{{{0x79L},{0x16L},{0x16L},{0x79L}}}};



static union U4  func_1(void);
static union U2  func_5(int32_t  p_6, int64_t  p_7, const int16_t  p_8);
static const int8_t  func_11(int32_t  p_12);
static int16_t  func_18(union U1  p_19, uint8_t  p_20);




static union U4  func_1(void)
{ 
    int32_t l_4 = 1L;
    union U2 l_128 = {4294967295UL};
    l_4 = (safe_add_func_int32_t_s_s(l_4, ((l_128 = func_5((safe_lshift_func_int8_t_s_u(func_11((g_17[4] = ((((safe_mul_func_uint16_t_u_u((g_15 , l_4), ((~4294967295UL) > g_15.f1))) , 1UL) ^ g_15.f0) ^ g_15.f1))), 0)), l_4, l_4)) , g_17[0])));
    return g_129[1][0][3];
}



static union U2  func_5(int32_t  p_6, int64_t  p_7, const int16_t  p_8)
{ 
    uint8_t l_79[5];
    uint32_t l_80[1][3];
    int32_t l_82[1];
    union U2 l_83 = {8UL};
    const int16_t l_112 = 8L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_79[i] = 0x69L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_80[i][j] = 0xE3E23DE1L;
    }
    for (i = 0; i < 1; i++)
        l_82[i] = 0xBAF9C35CL;
    if (((((((safe_div_func_int16_t_s_s(0xFE4DL, (safe_rshift_func_uint8_t_u_u(((+g_65[1][0].f2) , (~(255UL | (safe_unary_minus_func_int32_t_s((((((safe_div_func_uint8_t_u_u(254UL, 0x55L)) == g_55) | l_79[3]) != l_79[3]) && g_17[4])))))), g_52)))) <= l_80[0][2]) != p_6) >= l_79[1]) ^ 0x6120E7A9L) <= p_6))
    { 
        g_55 = (-1L);
        for (g_55 = 0; (g_55 <= 0); g_55 += 1)
        { 
            g_43[0][0].f3 = (-6L);
            for (p_7 = 0; (p_7 <= 0); p_7 += 1)
            { 
                uint64_t l_81 = 9UL;
                l_81 |= g_43[0][0].f1;
            }
        }
        l_82[0] &= p_6;
    }
    else
    { 
        return l_83;
    }
    if (((++g_86) >= g_58[0][0][1]))
    { 
        uint32_t l_89 = 18446744073709551609UL;
        union U4 l_103 = {5L};
        l_89--;
        for (g_55 = 0; (g_55 <= (-30)); g_55 = safe_sub_func_uint32_t_u_u(g_55, 1))
        { 
            uint32_t l_94 = 9UL;
            int32_t l_105 = 0x5289450AL;
            g_43[0][0].f3 = l_94;
            if (((safe_mul_func_int16_t_s_s(l_94, ((((safe_mod_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s((l_103 , ((g_104 = 0x597785040678986BLL) & ((l_79[3] >= g_60) >= g_58[0][0][0]))), 0xBBE02B32L)) < l_103.f0) > g_17[4]) & l_89), l_94)) && l_83.f1), p_7)) && l_79[1]) , 8L) | p_6))) & 0xE927CFDAL))
            { 
                if (g_65[1][0].f2)
                    break;
                l_83.f2.f3 = (l_82[0] == l_103.f0);
            }
            else
            { 
                uint16_t l_108 = 65534UL;
                --l_108;
            }
            l_105 = l_105;
        }
        return g_15;
    }
    else
    { 
        struct S0 l_114 = {0x4417F0C4L,0xEE0EL,-2L,-1L};
        struct S0 l_115 = {18446744073709551611UL,0x130CL,0xD1EDL,-1L};
        if ((safe_unary_minus_func_int16_t_s(l_112)))
        { 
            struct S0 l_113 = {0x58447AD0L,0xD660L,0xA124L,0x13D8BF85L};
            l_83.f2 = l_113;
            l_115 = (l_114 = l_83.f2);
            for (l_113.f1 = 0; (l_113.f1 >= (-26)); l_113.f1 = safe_sub_func_int16_t_s_s(l_113.f1, 3))
            { 
                return g_15;
            }
        }
        else
        { 
            l_82[0] = (l_82[0] | 0L);
            for (g_15.f2.f3 = 0; (g_15.f2.f3 <= 2); ++g_15.f2.f3)
            { 
                l_82[0] ^= (safe_sub_func_uint8_t_u_u(0x74L, (safe_add_func_int16_t_s_s(l_83.f0, (((g_86 = 0x68L) , (safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((((g_107 <= g_17[1]) == 0x88L) >= l_115.f0), 0UL)), 11))) , p_8)))));
                g_43[0][0] = g_43[0][0];
            }
            return l_83;
        }
    }
    return g_15;
}



static const int8_t  func_11(int32_t  p_12)
{ 
    union U1 l_21[3] = {{18446744073709551612UL},{18446744073709551612UL},{18446744073709551612UL}};
    int32_t l_69 = 6L;
    int i;
    l_69 = (func_18(l_21[1], g_17[2]) <= (safe_lshift_func_int16_t_s_s(((0x1E2253E4L & l_21[1].f0) | p_12), l_21[1].f2)));
    return l_69;
}



static int16_t  func_18(union U1  p_19, uint8_t  p_20)
{ 
    uint8_t l_22 = 0xFFL;
    int32_t l_57 = (-1L);
    int64_t l_66 = 0xE821FD1B63E3B667LL;
    for (p_19.f1 = 0; (p_19.f1 <= 4); p_19.f1 += 1)
    { 
        uint64_t l_44 = 18446744073709551615UL;
        int32_t l_59 = 1L;
        l_22++;
        for (l_22 = 0; (l_22 <= 4); l_22 += 1)
        { 
            int32_t l_54 = 0x3C25A1B5L;
            int32_t l_56[4];
            int i;
            for (i = 0; i < 4; i++)
                l_56[i] = 7L;
            if (((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((g_17[p_19.f1] != (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0xDCD6L, ((g_17[2] > (((safe_sub_func_int32_t_s_s((0x6A67606EL != p_19.f2), g_17[p_19.f1])) , g_43[0][0]) , l_44)) < 0xCCFDEF05L))), 1L)), 0UL))), g_43[0][0].f1)), g_43[0][0].f2)), g_17[p_19.f1])), g_43[0][0].f3)), 0x160C6370L)) | g_43[0][0].f0) , p_19.f0) != 0L))
            { 
                g_15.f2.f3 = (((safe_mod_func_uint32_t_u_u(g_15.f1, (safe_rshift_func_int16_t_s_u((g_43[0][0].f0 & ((~p_20) ^ (safe_mod_func_int8_t_s_s((((l_44 || l_44) ^ g_17[3]) , p_19.f3), (-1L))))), l_22)))) , 9UL) >= 0x13DAL);
                ++g_60;
            }
            else
            { 
                l_59 = (safe_mod_func_int32_t_s_s((g_55 = (0x37D796E9900F1D91LL ^ (((0x3F99L == (g_65[1][0] , (p_19.f2 & p_19.f3))) ^ g_65[1][0].f3) < p_19.f2))), 5L));
            }
        }
    }
    g_55 |= l_66;
    return l_66;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_43[i][j].f0, "g_43[i][j].f0", print_hash_value);
            transparent_crc(g_43[i][j].f1, "g_43[i][j].f1", print_hash_value);
            transparent_crc(g_43[i][j].f2, "g_43[i][j].f2", print_hash_value);
            transparent_crc(g_43[i][j].f3, "g_43[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_58[i][j][k], "g_58[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_65[i][j].f0, "g_65[i][j].f0", print_hash_value);
            transparent_crc(g_65[i][j].f1, "g_65[i][j].f1", print_hash_value);
            transparent_crc(g_65[i][j].f2, "g_65[i][j].f2", print_hash_value);
            transparent_crc(g_65[i][j].f3, "g_65[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);

    }
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_129[i][j][k].f0, "g_129[i][j][k].f0", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
