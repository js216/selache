// SPDX-License-Identifier: MIT
// cctest_csmith_1007e4f5.c --- cctest case csmith_1007e4f5 (csmith seed 268952821)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8465f995 */
/* @exp_ticks 0x5621 */

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

// Options:   -s 268952821 -o /home/agent1/fast_data/tmp/csmith_gen_quzdf2gj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint16_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

struct S3 {
   struct S2  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int8_t  f0;
   uint32_t  f1;
   const int16_t  f2;
   uint32_t  f3;
   int16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U5 {
   const struct S0  f0;
   uint8_t  f1;
   uint32_t  f2;
   const int32_t  f3;
};

union U6 {
   int8_t  f0;
};

union U7 {
   int16_t  f0;
};


static int32_t g_2 = 7L;
static struct S2 g_25 = {65527UL,0L,0x3585CA25L,0x9D38951FE511BD77LL};
static const struct S1 g_26 = {0xD4L};
static int8_t g_63 = (-8L);
static int32_t g_65[3] = {(-6L),(-6L),(-6L)};
static union U7 g_80 = {-8L};
static int8_t g_91 = 0x54L;
static union U6 g_104 = {-1L};
static struct S3 g_108 = {{0xEE2DL,0x6AL,-6L,1UL}};
static union U5 g_116 = {{0xE5L,0x80BE8948L,-1L,4294967295UL,-1L,1UL}};
static uint64_t g_122 = 3UL;



static uint8_t  func_1(void);
static struct S3  func_5(uint64_t  p_6, struct S3  p_7, uint16_t  p_8);
static int8_t  func_14(const struct S1  p_15, int8_t  p_16);
static const struct S1  func_17(uint16_t  p_18, uint16_t  p_19, int64_t  p_20, struct S2  p_21);




static uint8_t  func_1(void)
{ 
    uint64_t l_13 = 18446744073709551607UL;
    union U6 l_109[2][5][4] = {{{{1L},{0x30L},{-6L},{0x17L}},{{1L},{0x8FL},{0L},{0x8FL}},{{0x8FL},{-6L},{1L},{0x8FL}},{{1L},{0x8FL},{0x17L},{0x17L}},{{0x30L},{0x30L},{0L},{1L}}},{{{0x30L},{-6L},{0x17L},{0x30L}},{{1L},{1L},{1L},{0x17L}},{{0x8FL},{1L},{0L},{0x30L}},{{1L},{-6L},{-6L},{1L}},{{1L},{0x30L},{-6L},{0x17L}}}};
    int8_t l_117 = 0xA3L;
    uint16_t l_118[5][5] = {{1UL,3UL,1UL,3UL,1UL},{1UL,1UL,1UL,1UL,1UL},{1UL,3UL,1UL,3UL,1UL},{1UL,1UL,1UL,1UL,1UL},{1UL,3UL,1UL,3UL,1UL}};
    struct S2 l_121 = {7UL,3L,0x42475AA4L,0x4801D3CF30455FDELL};
    uint16_t l_123 = 0UL;
    int i, j, k;
    for (g_2 = (-11); (g_2 != 15); g_2++)
    { 
        int16_t l_24 = 8L;
        struct S1 l_27 = {0x8AL};
        uint16_t l_119[4] = {0xE95CL,0xE95CL,0xE95CL,0xE95CL};
        int32_t l_120 = (-8L);
        int i;
        g_108 = func_5((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((l_13 , 0x67L), func_14((l_27 = func_17(((((safe_add_func_int64_t_s_s(g_2, l_13)) <= l_13) ^ l_24) & l_13), l_13, l_13, g_25)), g_26.f0))), 7)), g_108, l_24);
        l_120 = ((((g_104 = l_109[0][2][2]) , (l_118[4][4] ^= ((safe_mod_func_uint8_t_u_u(((l_24 < (safe_mul_func_uint16_t_u_u((g_25.f0 = (safe_mul_func_uint16_t_u_u((g_25.f2 && (g_116 , l_13)), g_25.f3))), l_117))) && l_13), l_109[0][2][2].f0)) , 65527UL))) <= l_119[0]) ^ l_109[0][2][2].f0);
        for (l_120 = 0; l_120 < 3; l_120 += 1)
        {
            g_65[l_120] = (-1L);
        }
    }
    g_2 = (l_121 , ((((g_122 &= (g_108.f0.f2 = (l_121.f3 , ((g_25.f2 = (((g_116.f2 & l_13) || 0UL) , g_25.f0)) , g_108.f0.f3)))) , l_13) < g_65[2]) ^ l_123));
    return l_118[0][1];
}



static struct S3  func_5(uint64_t  p_6, struct S3  p_7, uint16_t  p_8)
{ 
    g_65[1] = (-3L);
    return g_108;
}



static int8_t  func_14(const struct S1  p_15, int8_t  p_16)
{ 
    uint16_t l_28[3];
    uint8_t l_29 = 0xDAL;
    struct S1 l_35[5] = {{8L},{8L},{8L},{8L},{8L}};
    int32_t l_53 = 0x833E1ABBL;
    uint8_t l_57 = 0x1FL;
    int32_t l_73 = 0xE528CFE7L;
    struct S3 l_105 = {{0xCD60L,0x17L,5L,0UL}};
    int32_t l_107 = 1L;
    int i;
    for (i = 0; i < 3; i++)
        l_28[i] = 65531UL;
lbl_64:
    l_29 |= l_28[1];
    if (((safe_unary_minus_func_uint64_t_u(l_29)) > ((l_28[1] != (((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(1UL, (l_29 | p_16))), 0x29L)) & l_28[2]) , 0xE2L)) , g_2)))
    { 
        const int8_t l_54 = 0xF4L;
        int32_t l_60 = 0xDD0043BDL;
        int32_t l_74[5];
        uint16_t l_77 = 65531UL;
        int i;
        for (i = 0; i < 5; i++)
            l_74[i] = (-7L);
        for (l_29 = 0; (l_29 <= 2); l_29 += 1)
        { 
            int8_t l_67 = 0xCDL;
            int32_t l_69 = 0x8F49DA2BL;
            int32_t l_71 = 0x3FEA38A5L;
            int32_t l_76 = (-1L);
            for (g_25.f1 = 2; (g_25.f1 >= 0); g_25.f1 -= 1)
            { 
                l_35[2] = p_15;
            }
            if ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((((g_2 == ((safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s((l_35[2].f0 >= (((((p_16 == (safe_lshift_func_uint8_t_u_u((l_53 = (p_15.f0 , p_16)), 1))) == 0x1945B4E6L) | g_2) ^ g_25.f2) != 1L)), p_15.f0)))) > p_15.f0)) == g_25.f2) < g_2), g_25.f0)) & g_2) < 18446744073709551607UL), 1UL)), (-5L))), p_15.f0)), (-6L))) != 0xDB3F0F592B025F3DLL), g_25.f3)))
            { 
                int16_t l_55 = 0xCFEBL;
                int32_t l_56[2][1][3] = {{{1L,(-8L),(-8L)}},{{1L,(-8L),(-8L)}}};
                int i, j, k;
                l_55 = l_54;
                l_57--;
                l_60 |= 0xF8626BADL;
            }
            else
            { 
                int32_t l_66 = (-5L);
                int32_t l_68 = (-1L);
                int32_t l_70 = 8L;
                int32_t l_72 = 0xC21D0123L;
                int32_t l_75[5][2] = {{0x48247AD0L,0L},{0x697EBF99L,0L},{0x48247AD0L,0x697EBF99L},{(-1L),(-1L)},{(-1L),0x697EBF99L}};
                int i, j;
                g_63 |= (safe_lshift_func_int8_t_s_s(((0UL & ((g_25.f3 != 0xCC25L) <= p_16)) , g_25.f2), l_53));
                if (g_25.f2)
                    goto lbl_64;
                ++l_77;
            }
            for (l_71 = 0; (l_71 <= 2); l_71 += 1)
            { 
                g_65[2] = ((g_25.f1 > p_15.f0) | (1L & (g_80 , 9UL)));
                g_65[0] = 0xD67DEC96L;
            }
        }
        l_73 = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_53 &= (safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(p_15.f0, l_74[4])), (g_91 = p_15.f0))) , ((safe_rshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s((g_65[1] & 1L), p_15.f0)) > (-1L)), 13)) & 8UL)), 1L))), g_25.f1)), 0));
    }
    else
    { 
        int8_t l_96 = 0xA2L;
        int32_t l_97 = 0xBD45ED72L;
        int32_t l_106 = 0L;
        l_107 = (l_106 &= (((((l_96 = p_16) >= l_97) != (l_53 = (safe_add_func_int64_t_s_s(((l_73 = ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((((g_104 , ((((l_105 , g_63) , 7UL) | 0UL) <= p_15.f0)) < p_16) | p_15.f0), 0)) < p_16), 10)) , 0xC440229A812DEA9BLL)) || 0L), 0x0491E1CB09366CA3LL)))) < 1L) | 0x1771L));
    }
    return g_25.f0;
}



static const struct S1  func_17(uint16_t  p_18, uint16_t  p_19, int64_t  p_20, struct S2  p_21)
{ 
    g_25 = p_21;
    return g_26;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
    transparent_crc(g_25.f3, "g_25.f3", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);

    }
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_108.f0.f0, "g_108.f0.f0", print_hash_value);
    transparent_crc(g_108.f0.f1, "g_108.f0.f1", print_hash_value);
    transparent_crc(g_108.f0.f2, "g_108.f0.f2", print_hash_value);
    transparent_crc(g_108.f0.f3, "g_108.f0.f3", print_hash_value);
    transparent_crc(g_116.f0.f0, "g_116.f0.f0", print_hash_value);
    transparent_crc(g_116.f0.f1, "g_116.f0.f1", print_hash_value);
    transparent_crc(g_116.f0.f2, "g_116.f0.f2", print_hash_value);
    transparent_crc(g_116.f0.f3, "g_116.f0.f3", print_hash_value);
    transparent_crc(g_116.f0.f4, "g_116.f0.f4", print_hash_value);
    transparent_crc(g_116.f0.f5, "g_116.f0.f5", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_116.f3, "g_116.f3", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
