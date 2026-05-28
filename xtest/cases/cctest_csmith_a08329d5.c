// SPDX-License-Identifier: MIT
// cctest_csmith_a08329d5.c --- cctest case csmith_a08329d5 (csmith seed 2692950485)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xac4757da */
/* @exp_ticks 0x4221 */

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

// Options:   -s 2692950485 -o /tmp/csmith_gen_2_35u645/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   uint8_t  f2;
   int32_t  f3;
   int16_t  f4;
   uint16_t  f5;
   const uint32_t  f6;
   const int64_t  f7;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   const uint64_t  f1;
   int16_t  f2;
   const int8_t * f3;
};

union U2 {
   int8_t  f0;
   uint8_t  f1;
   int32_t  f2;
};

union U3 {
   int32_t  f0;
   const int64_t  f1;
   uint16_t  f2;
   const uint16_t  f3;
   int8_t  f4;
};


static uint16_t g_7[2] = {0x29B3L,0x29B3L};
static int32_t g_19 = 0xC19583E3L;
static int8_t g_28 = (-8L);
static int32_t g_34[4] = {0xC20B1330L,0xC20B1330L,0xC20B1330L,0xC20B1330L};
static int64_t g_43 = 0x1F8626BADC49480DLL;
static int64_t *g_42 = &g_43;
static int32_t g_99 = (-10L);
static int32_t *g_98[4] = {&g_99,&g_99,&g_99,&g_99};
static struct S0 g_118[1][2] = {{{0x03FA2AEE08D7298ELL,0UL,1UL,0x938E44D0L,0x283BL,0x12B1L,0UL,-1L},{0x03FA2AEE08D7298ELL,0UL,1UL,0x938E44D0L,0x283BL,0x12B1L,0UL,-1L}}};
static int64_t g_122[1][7] = {{0xDC485AA36D6AEB5ELL,0xDC485AA36D6AEB5ELL,0xDC485AA36D6AEB5ELL,0xDC485AA36D6AEB5ELL,0xDC485AA36D6AEB5ELL,0xDC485AA36D6AEB5ELL,0xDC485AA36D6AEB5ELL}};
static uint32_t g_135[1][4] = {{0UL,0UL,0UL,0UL}};
static int16_t g_147 = 0xDDB0L;
static union U3 g_163 = {0x4715A482L};
static uint16_t g_184 = 0x5854L;
static union U2 g_214 = {0xB4L};
static const int32_t g_250[3] = {0xF335C160L,0xF335C160L,0xF335C160L};
static union U2 *g_254 = &g_214;
static union U1 g_332 = {5L};
static uint64_t *g_340 = &g_118[0][1].f0;
static uint64_t **g_339 = &g_340;
static uint64_t ***g_343[2] = {&g_339,&g_339};
static int32_t g_429 = 0x9A86223CL;
static int8_t g_513 = 0x19L;
static uint32_t g_526 = 0xA40F8226L;
static uint16_t *g_592 = &g_118[0][1].f5;
static uint8_t *g_730 = &g_118[0][1].f1;
static uint64_t g_771 = 0x6E9CCC789DCFA11BLL;
static const uint64_t *g_770 = &g_771;
static const uint64_t **g_769 = &g_770;
static const uint64_t ***g_768 = &g_769;
static int32_t g_810 = 0xC0089847L;
static uint64_t ***g_838 = &g_339;
static union U1 ***g_882 = (void*)0;
static union U1 ***g_884 = (void*)0;
static int32_t g_900[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t **g_929[7][5][6] = {{{(void*)0,&g_98[2],&g_98[0],(void*)0,(void*)0,&g_98[0]},{&g_98[2],(void*)0,&g_98[2],&g_98[0],(void*)0,(void*)0},{(void*)0,&g_98[0],&g_98[0],&g_98[2],&g_98[0],&g_98[0]},{&g_98[0],(void*)0,&g_98[0],(void*)0,(void*)0,&g_98[0]},{&g_98[0],&g_98[0],&g_98[0],&g_98[2],&g_98[2],&g_98[0]}},{{(void*)0,&g_98[0],(void*)0,&g_98[1],(void*)0,&g_98[0]},{&g_98[0],(void*)0,(void*)0,&g_98[0],&g_98[0],&g_98[0]},{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0]},{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0]},{(void*)0,&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0]}},{{&g_98[0],(void*)0,&g_98[0],&g_98[0],(void*)0,&g_98[1]},{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[2],&g_98[2]},{(void*)0,&g_98[0],(void*)0,&g_98[0],(void*)0,(void*)0},{&g_98[0],(void*)0,(void*)0,&g_98[0],&g_98[0],&g_98[2]},{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[1]}},{{&g_98[0],&g_98[2],&g_98[0],&g_98[1],&g_98[0],&g_98[0]},{(void*)0,&g_98[0],&g_98[0],&g_98[2],&g_98[0],&g_98[0]},{&g_98[0],(void*)0,&g_98[0],(void*)0,(void*)0,&g_98[0]},{&g_98[0],&g_98[0],&g_98[0],&g_98[2],&g_98[2],&g_98[0]},{(void*)0,&g_98[0],(void*)0,&g_98[1],(void*)0,&g_98[0]}},{{&g_98[0],(void*)0,(void*)0,&g_98[0],&g_98[0],&g_98[0]},{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0]},{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0]},{(void*)0,&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0]},{&g_98[0],(void*)0,&g_98[0],&g_98[0],(void*)0,&g_98[1]}},{{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[2],&g_98[2]},{(void*)0,&g_98[0],(void*)0,&g_98[0],(void*)0,(void*)0},{&g_98[0],(void*)0,(void*)0,&g_98[0],&g_98[0],&g_98[2]},{&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[0],&g_98[1]},{&g_98[0],&g_98[2],&g_98[0],&g_98[1],&g_98[0],&g_98[0]}},{{(void*)0,&g_98[0],&g_98[0],&g_98[2],&g_98[0],&g_98[0]},{&g_98[0],(void*)0,&g_98[0],(void*)0,(void*)0,&g_98[0]},{&g_98[0],&g_98[0],&g_98[0],&g_98[2],&g_98[2],&g_98[0]},{(void*)0,&g_98[0],(void*)0,&g_98[1],(void*)0,&g_98[0]},{(void*)0,&g_98[0],&g_98[2],(void*)0,&g_98[2],&g_98[1]}}};
static int32_t ***g_928 = &g_929[3][3][0];
static const int32_t *g_937[4][1][6] = {{{&g_250[0],&g_250[0],&g_163.f0,&g_250[0],&g_250[0],&g_163.f0}},{{&g_250[0],&g_250[0],&g_163.f0,&g_250[0],&g_250[0],&g_163.f0}},{{&g_250[0],&g_250[0],&g_163.f0,&g_250[0],&g_250[0],&g_163.f0}},{{&g_250[0],&g_250[0],&g_163.f0,&g_250[0],&g_250[0],&g_163.f0}}};
static const int32_t **g_936 = &g_937[3][0][5];
static const int32_t ***g_935 = &g_936;
static const int32_t ****g_934 = &g_935;
static uint8_t g_943 = 0x18L;
static int64_t g_961 = 0xEAB916A089BBBE0FLL;
static int8_t g_991 = 0L;
static union U3 g_1031 = {0x73CC0135L};
static union U3 *g_1030[1][6][6] = {{{&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,(void*)0},{&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031},{&g_1031,&g_1031,(void*)0,&g_1031,&g_1031,(void*)0},{&g_1031,&g_1031,(void*)0,&g_1031,&g_1031,&g_1031},{&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,(void*)0},{&g_1031,&g_1031,&g_1031,&g_1031,&g_1031,&g_1031}}};
static int32_t ** const *g_1037[3] = {&g_929[5][4][2],&g_929[5][4][2],&g_929[5][4][2]};
static int32_t ** const **g_1036 = &g_1037[2];
static union U1 *g_1143 = &g_332;
static int32_t * const *g_1163 = &g_98[2];
static int32_t * const **g_1162[7][5] = {{&g_1163,&g_1163,(void*)0,&g_1163,&g_1163},{&g_1163,&g_1163,&g_1163,&g_1163,(void*)0},{(void*)0,&g_1163,&g_1163,&g_1163,(void*)0},{&g_1163,&g_1163,&g_1163,&g_1163,&g_1163},{&g_1163,&g_1163,&g_1163,(void*)0,&g_1163},{&g_1163,&g_1163,&g_1163,&g_1163,&g_1163},{&g_1163,&g_1163,(void*)0,(void*)0,&g_1163}};
static const uint32_t g_1209 = 0xEF00B678L;
static const uint32_t *g_1208 = &g_1209;
static int8_t *g_1239 = (void*)0;
static int64_t g_1284 = 1L;
static uint32_t g_1297 = 0UL;
static union U1 g_1340 = {0L};
static union U3 ** const g_1434 = &g_1030[0][4][4];
static union U3 ** const *g_1433 = &g_1434;
static int32_t g_1446 = 0xCBB06E2EL;
static int32_t ****g_1471 = &g_928;
static int32_t *****g_1470 = &g_1471;
static int64_t g_1554 = 0x923AEA6025A62D77LL;



static const struct S0  func_1(void);
static int32_t  func_2(int64_t  p_3, int8_t * p_4);
static int8_t * func_8(struct S0  p_9, uint16_t  p_10, int8_t  p_11, int8_t * p_12);
static struct S0  func_13(const int8_t  p_14, union U3  p_15, uint32_t  p_16, uint32_t  p_17, int64_t * p_18);
static const uint8_t  func_20(int64_t  p_21, struct S0  p_22, int8_t * p_23, int32_t  p_24, int8_t * p_25);
static uint64_t  func_54(int8_t * p_55, uint32_t  p_56, struct S0  p_57, int32_t * p_58, union U1  p_59);
static int8_t * func_60(int64_t * p_61, int64_t * p_62, uint16_t * p_63, const int16_t  p_64);
static int64_t * func_66(union U3  p_67, int64_t * p_68);




static const struct S0  func_1(void)
{ 
    int64_t *l_5 = (void*)0;
    int64_t *l_6[3];
    struct S0 l_26 = {0xDC4B6369DDA31432LL,255UL,0x4FL,9L,4L,0xCBD4L,0xAED0F12AL,-2L};
    int8_t *l_27 = &g_28;
    uint16_t *l_31 = (void*)0;
    int32_t l_32 = 1L;
    union U3 l_41 = {0L};
    int32_t *l_1445[1];
    int8_t l_1447 = 0x83L;
    int32_t *****l_1508 = &g_1471;
    uint64_t *** const *l_1520 = &g_838;
    int8_t l_1524 = (-7L);
    int i;
    for (i = 0; i < 3; i++)
        l_6[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1445[i] = &g_1446;
    return g_118[0][0];
}



static int32_t  func_2(int64_t  p_3, int8_t * p_4)
{ 
    union U1 *** const l_1248 = (void*)0;
    int32_t ** const *l_1255 = &g_929[3][3][0];
    union U3 l_1269 = {0x86AF3D83L};
    int32_t l_1294 = 0x17F6482AL;
    int32_t l_1295[1][2];
    uint32_t l_1301 = 0UL;
    union U1 *l_1339 = &g_1340;
    int16_t l_1349 = 0x89ACL;
    uint8_t l_1375 = 0x43L;
    uint8_t l_1378 = 0xBDL;
    union U2 l_1412 = {-2L};
    struct S0 l_1430 = {18446744073709551614UL,255UL,0xBFL,-1L,1L,65535UL,0x45B2C8F1L,0x5232DA50083D4933LL};
    uint8_t l_1431 = 0UL;
    int64_t l_1444[6] = {(-4L),0xE2AB5675B0D4041ELL,(-4L),(-4L),0xE2AB5675B0D4041ELL,(-4L)};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1295[i][j] = (-1L);
    }
    for (g_214.f2 = 0; (g_214.f2 == 10); ++g_214.f2)
    { 
        uint64_t l_1243[1][5][7] = {{{0x11CA9CF8FFE30C30LL,0xCD1C57C4BD607BF2LL,18446744073709551612UL,18446744073709551612UL,0xCD1C57C4BD607BF2LL,0x11CA9CF8FFE30C30LL,1UL},{0x7DFF85D644EBB4BCLL,0UL,0x46160BEA1D8B39F7LL,0x46160BEA1D8B39F7LL,0UL,0x7DFF85D644EBB4BCLL,0x6CA854152D5EBF92LL},{0x11CA9CF8FFE30C30LL,0xCD1C57C4BD607BF2LL,18446744073709551612UL,18446744073709551612UL,0xCD1C57C4BD607BF2LL,0x11CA9CF8FFE30C30LL,1UL},{0x7DFF85D644EBB4BCLL,0UL,0x46160BEA1D8B39F7LL,0x46160BEA1D8B39F7LL,0UL,0x7DFF85D644EBB4BCLL,0x6CA854152D5EBF92LL},{0x11CA9CF8FFE30C30LL,0xCD1C57C4BD607BF2LL,18446744073709551612UL,18446744073709551612UL,0xCD1C57C4BD607BF2LL,0x11CA9CF8FFE30C30LL,1UL}}};
        int32_t *l_1262 = &g_163.f0;
        uint8_t l_1280[3];
        int32_t l_1288[3];
        int64_t l_1300 = 3L;
        union U1 *l_1341 = (void*)0;
        int8_t l_1361 = 0x36L;
        int32_t *l_1374 = &g_900[3];
        int8_t l_1376[7][1] = {{0x47L},{0x9BL},{0x47L},{0x47L},{0x9BL},{0x47L},{0x47L}};
        int8_t l_1396[3];
        int32_t ***l_1421 = (void*)0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1280[i] = 0x07L;
        for (i = 0; i < 3; i++)
            l_1288[i] = (-4L);
        for (i = 0; i < 3; i++)
            l_1396[i] = 0x7CL;
        for (g_43 = 2; (g_43 >= 0); g_43 -= 1)
        { 
            int32_t l_1242 = 0xBB928B8DL;
            const union U1 *** const l_1282[2] = {(void*)0,(void*)0};
            const union U1 *** const *l_1281 = &l_1282[0];
            int32_t l_1293[6];
            int32_t l_1348 = 0x75A17C81L;
            const uint8_t l_1350 = 0UL;
            int i;
            for (i = 0; i < 6; i++)
                l_1293[i] = 0x2F819F4CL;
            l_1243[0][0][1]--;
            if ((safe_add_func_uint16_t_u_u(((g_884 == l_1248) & (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_99, 14)), (*g_592))), 1L))), (l_1255 != (void*)0))))
            { 
                uint64_t *l_1260 = &l_1243[0][0][1];
                int32_t *l_1263 = &g_163.f0;
                for (g_1031.f4 = 0; (g_1031.f4 == (-20)); g_1031.f4 = safe_sub_func_uint64_t_u_u(g_1031.f4, 9))
                { 
                    uint16_t l_1261 = 0xAC8FL;
                    int32_t *l_1264 = &g_34[2];
                    (**g_1163) = (safe_mod_func_uint64_t_u_u(p_3, 0x93582B74F202CC64LL));
                    (**g_1163) = ((void*)0 == l_1260);
                    if (l_1261)
                        continue;
                    (**g_935) = l_1262;
                    l_1264 = (l_1263 = (void*)0);
                }
                (*l_1262) ^= (p_3 , (((p_3 & p_3) || ((safe_rshift_func_int8_t_s_u((p_3 && (*g_42)), 2)) | p_3)) && p_3));
            }
            else
            { 
                int64_t *l_1283[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1283[i] = &g_122[0][3];
                for (g_771 = 0; (g_771 <= 0); g_771 += 1)
                { 
                    uint16_t *l_1271 = &g_7[1];
                    int16_t *l_1272 = &g_147;
                    struct S0 l_1273 = {0x2C48172A6016186FLL,7UL,251UL,0x6308852CL,0x0F47L,0x718CL,0x4174DBF0L,1L};
                    int i, j, k;
                    (**g_1163) &= ((*l_1262) = (p_3 <= (safe_mod_func_int16_t_s_s(((*l_1272) |= (l_1269 , (~((*l_1271) = ((*g_592) = 0xEDDEL))))), (l_1273 , (-2L))))));
                }
                for (g_526 = 20; (g_526 > 32); g_526++)
                { 
                    return p_3;
                }
                (*l_1262) = ((g_1284 = (safe_sub_func_uint32_t_u_u(((*g_730) > ((((g_43 | (l_1280[0] , ((((&g_254 != (void*)0) || p_3) , l_1281) != &g_882))) && 1UL) , p_3) >= (*g_340))), 0x8B873206L))) > (*g_42));
                if (p_3)
                    break;
            }
            (*l_1262) ^= 8L;
            for (g_99 = 0; (g_99 <= 0); g_99 += 1)
            { 
                int32_t l_1285 = 3L;
                int32_t l_1292 = 0xBA02E094L;
                int32_t l_1296[7][4] = {{0L,(-5L),(-5L),0L},{1L,(-5L),0x52E10519L,(-5L)},{(-5L),(-1L),0x52E10519L,0x52E10519L},{1L,1L,(-5L),0x52E10519L},{0L,(-1L),0L,(-5L)},{0L,(-5L),(-5L),0L},{1L,(-5L),0x52E10519L,(-5L)}};
                uint8_t l_1304 = 0x64L;
                uint32_t l_1319 = 1UL;
                int i, j;
                if ((g_135[g_99][g_99] | g_7[(g_99 + 1)]))
                { 
                    int32_t *l_1286 = &l_1242;
                    int32_t *l_1287 = &g_34[1];
                    int32_t *l_1289 = &g_34[3];
                    int32_t *l_1290 = &g_810;
                    int32_t *l_1291[2];
                    int16_t *l_1317 = (void*)0;
                    int16_t *l_1318 = &g_118[0][1].f4;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1291[i] = &l_1288[2];
                    g_1297--;
                    ++l_1301;
                    if (p_3)
                        break;
                    ++l_1304;
                    (*l_1262) &= (safe_div_func_int32_t_s_s((((*g_1143) , (safe_add_func_uint64_t_u_u(p_3, 0x7DB99D719B0D282FLL))) && ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((p_3 != ((*l_1318) = ((((p_3 ^ ((((safe_rshift_func_uint8_t_u_u(0xF7L, (p_3 > (*g_592)))) >= l_1285) > 4294967291UL) < (*g_592))) ^ 7UL) ^ 255UL) != 18446744073709551615UL))), p_3)), l_1319)) & (*g_730))), 0x22E0387CL));
                }
                else
                { 
                    uint64_t l_1324 = 1UL;
                    union U1 *l_1338 = &g_332;
                    uint16_t *l_1351 = &g_7[(g_99 + 1)];
                    int i, j;
                    if (p_3)
                        break;
                    l_1242 &= ((l_1269 , 0x9BL) && (((p_3 | ((((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(3UL, (p_3 , (l_1324 != (safe_mod_func_uint16_t_u_u((++(*g_592)), (safe_mul_func_uint8_t_u_u(((*g_730) &= 255UL), 255UL)))))))) < 0xE90FD1ADL), (-2L))) < 0x273FL) <= p_3) != 0xE4L)) >= l_1324) == p_3));
                    if (l_1324)
                        continue;
                    (*l_1262) = (((*g_340) = (safe_div_func_int64_t_s_s(((((((safe_mul_func_uint16_t_u_u((*g_592), (*g_592))) != p_3) > ((!(((*l_1351) = ((safe_div_func_int64_t_s_s((g_7[(g_99 + 1)] , ((l_1339 = l_1338) == l_1341)), (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((g_135[g_99][g_43] = (0UL || l_1348)) > 0L), l_1349)), 6)))) | l_1350)) > l_1304)) < p_3)) , 18446744073709551615UL) <= 1L) || 0x384F0841L), (*l_1262)))) || p_3);
                    (*g_936) = &l_1293[0];
                }
                for (g_1031.f0 = 4; (g_1031.f0 != 7); g_1031.f0 = safe_add_func_int16_t_s_s(g_1031.f0, 1))
                { 
                    (*l_1262) = (safe_unary_minus_func_uint16_t_u((~(safe_add_func_uint16_t_u_u((3UL > 0x0FF8L), p_3)))));
                }
                (**g_935) = &l_1288[1];
                for (l_1304 = 0; (l_1304 < 44); l_1304++)
                { 
                    return p_3;
                }
            }
        }
        if ((((*l_1262) || (~(l_1361 > (p_3 < (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((*g_42) = (((((*l_1262) , (0xB62972B1L | ((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((*g_730), (((*l_1374) = ((*g_254) , g_1031.f4)) , 0x9FL))) & 0x212E6B6BL), (*l_1262))) == (*g_592)), (*l_1262))), 0xFDL)) != p_3))) > p_3) ^ g_135[0][1]) & l_1375)), (*l_1262))) && (*g_730)), 12)))))) , l_1376[4][0]))
        { 
            uint32_t l_1377 = 0x6729430DL;
            (*l_1262) &= l_1377;
            return l_1378;
        }
        else
        { 
            uint32_t l_1385 = 0xCB1AA289L;
            int32_t l_1437 = 0x92F0C1E3L;
            int32_t l_1438 = 0x10B03669L;
            int32_t l_1439[2][5][7] = {{{0xA7205047L,0L,0xE67B76FBL,(-1L),0x3590E1A5L,0xA7205047L,0x67C6278FL},{0x0E1D6BB0L,0x9B1B9FFEL,6L,(-1L),0x738CE0F1L,0xE67B76FBL,(-1L)},{0xB02FEF33L,0xA7205047L,0x73291F24L,0x374CF252L,0x73291F24L,0xA7205047L,0xB02FEF33L},{0xB02FEF33L,6L,0x3590E1A5L,0x9B1B9FFEL,0xA7205047L,0L,0x73291F24L},{0x0E1D6BB0L,0x421042BEL,(-1L),(-1L),0xDBB135ECL,0x53CB612DL,0x421042BEL}},{{0xDBB135ECL,0x738CE0F1L,0x3590E1A5L,0L,1L,0xDBB135ECL,1L},{(-1L),0x73291F24L,0x73291F24L,(-1L),1L,5L,0x9B1B9FFEL},{0x03905B97L,0xA7205047L,6L,0x67C6278FL,0xDBB135ECL,(-1L),0xB02FEF33L},{(-1L),0xDBB135ECL,0x67C6278FL,6L,0xA7205047L,0x03905B97L,0x9B1B9FFEL},{5L,1L,(-1L),0x73291F24L,0x73291F24L,(-1L),1L}}};
            uint8_t l_1441 = 0x93L;
            int i, j, k;
            for (l_1294 = 0; (l_1294 > (-22)); --l_1294)
            { 
                int16_t l_1381 = 0x913EL;
                int32_t *l_1382 = &g_118[0][1].f3;
                int32_t *l_1383 = &g_1031.f0;
                int32_t *l_1384[4];
                uint64_t *l_1390[4] = {&g_118[0][1].f0,&g_118[0][1].f0,&g_118[0][1].f0,&g_118[0][1].f0};
                int i;
                for (i = 0; i < 4; i++)
                    l_1384[i] = &g_163.f0;
                l_1385--;
                if (p_3)
                    break;
                (**g_1163) &= ((1L == ((*l_1262) && ((((((safe_mod_func_int64_t_s_s((((void*)0 != l_1390[2]) > (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((246UL || (((((*l_1382) , (~(((**g_339) = p_3) > (*g_42)))) >= p_3) , p_3) >= l_1385)), (*g_592))), 1))), p_3)) & l_1385) , g_214.f0) || l_1396[0]) >= (*g_730)) , l_1375))) == 0xE525L);
                if (((safe_mod_func_uint32_t_u_u(((((*l_1339) , ((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_3, (((*g_42) = (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((+(safe_div_func_uint32_t_u_u(0UL, (safe_add_func_uint16_t_u_u(1UL, g_34[1]))))), (g_943 , (((l_1412 , p_3) ^ p_3) > (-5L))))), (*l_1382)))) == p_3))), (**g_339))) | (*l_1262))) , 1L) ^ 0x976F5348L), 4294967295UL)) && (*l_1262)))
                { 
                    int32_t ***l_1422 = &g_929[6][0][5];
                    uint32_t *l_1423 = &l_1385;
                    int64_t **l_1432 = &g_42;
                    (**g_1163) ^= (safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s((*l_1382), (safe_mod_func_uint64_t_u_u((((((((*l_1423) |= (safe_mul_func_uint8_t_u_u((l_1421 != l_1422), (*g_730)))) | 0x01DFDAD8L) >= (((((safe_mod_func_int32_t_s_s(0x2028928EL, (safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_1430 , l_1430.f0), l_1431)), (*g_730))))) & 0UL) ^ p_3) | p_3) | 0xA2BC2EE5BCFFA660LL)) , l_1432) == &g_42) <= (*l_1382)), 0x87227A77A5AFFD93LL)))), p_3));
                    if (p_3)
                        break;
                    return l_1385;
                }
                else
                { 
                    union U3 ** const **l_1435 = &g_1433;
                    int32_t l_1436[7][3][3] = {{{(-2L),(-4L),0x3144FAB6L},{0x056667FFL,0x8CFF01CAL,0x8CFF01CAL},{0xB4A4D3D4L,0x8CFF01CAL,(-1L)}},{{1L,(-4L),0x629F2E99L},{0xB4A4D3D4L,0x3144FAB6L,0x629F2E99L},{0x056667FFL,0x5AE7D44AL,(-1L)}},{{(-2L),0x3144FAB6L,0x8CFF01CAL},{(-2L),(-4L),0x3144FAB6L},{0x056667FFL,0x8CFF01CAL,0x8CFF01CAL}},{{0xB4A4D3D4L,0x8CFF01CAL,(-1L)},{1L,(-4L),0x629F2E99L},{0xB4A4D3D4L,0x3144FAB6L,0x629F2E99L}},{{0x056667FFL,0x5AE7D44AL,(-1L)},{(-2L),0x3144FAB6L,0x8CFF01CAL},{(-2L),(-4L),0x3144FAB6L}},{{0x056667FFL,0x8CFF01CAL,0x8CFF01CAL},{0xB4A4D3D4L,0x8CFF01CAL,(-1L)},{1L,(-4L),0x629F2E99L}},{{0xB4A4D3D4L,0x3144FAB6L,0x629F2E99L},{0x056667FFL,0x5AE7D44AL,(-1L)},{(-2L),0x3144FAB6L,0x8CFF01CAL}}};
                    int32_t l_1440 = 0x4193EE01L;
                    int i, j, k;
                    (*l_1435) = g_1433;
                    --l_1441;
                    return p_3;
                }
            }
            return l_1444[2];
        }
    }
    return p_3;
}



static int8_t * func_8(struct S0  p_9, uint16_t  p_10, int8_t  p_11, int8_t * p_12)
{ 
    int32_t *l_1232 = &g_34[1];
    int32_t *l_1233 = &g_163.f0;
    int32_t *l_1234[7][5][1] = {{{&g_118[0][1].f3},{(void*)0},{&g_118[0][1].f3},{&g_214.f2},{&g_810}},{{&g_214.f2},{&g_118[0][1].f3},{(void*)0},{&g_118[0][1].f3},{&g_214.f2}},{{&g_810},{&g_214.f2},{&g_118[0][1].f3},{(void*)0},{&g_118[0][1].f3}},{{&g_214.f2},{&g_810},{&g_214.f2},{&g_118[0][1].f3},{(void*)0}},{{&g_118[0][1].f3},{&g_214.f2},{&g_810},{&g_214.f2},{&g_118[0][1].f3}},{{(void*)0},{&g_118[0][1].f3},{&g_214.f2},{&g_810},{&g_214.f2}},{{&g_118[0][1].f3},{(void*)0},{&g_118[0][1].f3},{&g_214.f2},{&g_810}}};
    int8_t l_1235 = 0xDEL;
    uint64_t l_1236 = 0x8146975DBE20564DLL;
    int i, j, k;
    (**g_1163) = p_9.f5;
    l_1236++;
    return g_1239;
}



static struct S0  func_13(const int8_t  p_14, union U3  p_15, uint32_t  p_16, uint32_t  p_17, int64_t * p_18)
{ 
    int64_t *l_65 = &g_43;
    union U3 l_69[3] = {{0xCE528CFEL},{0xCE528CFEL},{0xCE528CFEL}};
    union U1 l_93 = {0xD4L};
    uint16_t *l_94 = &l_69[2].f2;
    const int32_t l_95 = 0xD23E4240L;
    struct S0 l_97 = {0x60E143445DC917A0LL,0xAAL,1UL,0xAD9C2790L,-1L,65535UL,0xBBDCB972L,0L};
    const int32_t ****l_938 = &g_935;
    union U1 ****l_951[5];
    union U1 *****l_950 = &l_951[3];
    uint64_t ***l_969[6][4][3] = {{{&g_339,&g_339,(void*)0},{&g_339,&g_339,(void*)0},{&g_339,(void*)0,&g_339},{&g_339,&g_339,&g_339}},{{&g_339,(void*)0,(void*)0},{&g_339,&g_339,&g_339},{&g_339,&g_339,&g_339},{&g_339,&g_339,(void*)0}},{{&g_339,&g_339,(void*)0},{&g_339,&g_339,(void*)0},{&g_339,(void*)0,&g_339},{&g_339,&g_339,&g_339}},{{&g_339,(void*)0,(void*)0},{&g_339,&g_339,&g_339},{&g_339,&g_339,&g_339},{&g_339,&g_339,(void*)0}},{{&g_339,&g_339,(void*)0},{&g_339,&g_339,(void*)0},{&g_339,(void*)0,&g_339},{&g_339,&g_339,&g_339}},{{&g_339,(void*)0,(void*)0},{&g_339,&g_339,&g_339},{&g_339,&g_339,&g_339},{&g_339,&g_339,(void*)0}}};
    union U2 **l_1049[5][5] = {{&g_254,&g_254,&g_254,&g_254,&g_254},{(void*)0,(void*)0,(void*)0,(void*)0,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254},{(void*)0,(void*)0,(void*)0,(void*)0,&g_254},{&g_254,&g_254,&g_254,&g_254,&g_254}};
    int32_t l_1065[3][3] = {{(-1L),(-10L),(-10L)},{(-1L),(-10L),(-10L)},{(-1L),(-10L),(-10L)}};
    uint32_t l_1067[4] = {1UL,1UL,1UL,1UL};
    int64_t ***l_1090 = (void*)0;
    int64_t **l_1092[3];
    int64_t ***l_1091 = &l_1092[0];
    union U1 *** const *l_1105 = &g_884;
    uint64_t l_1150 = 0xB1336F4C82C813BFLL;
    int16_t l_1167 = 0x35CBL;
    int64_t l_1184 = 0x4C1413093C47201BLL;
    uint16_t ***l_1206 = (void*)0;
    uint16_t **l_1207 = &l_94;
    int8_t *l_1210 = &l_69[2].f4;
    int16_t *l_1211 = &g_332.f2;
    uint32_t l_1212 = 0x45B9EAB2L;
    int32_t l_1215 = 0xFD982483L;
    uint32_t l_1231 = 0x44135706L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_951[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1092[i] = &l_65;
    if ((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((safe_add_func_int64_t_s_s((*g_42), (*p_18))) == (safe_mod_func_uint64_t_u_u(func_54(func_60(l_65, func_66(l_69[2], &g_43), (l_93 , l_94), l_95), p_15.f4, l_97, g_98[0], l_93), (*p_18)))) , l_69[2].f2), l_97.f5)), l_97.f0)) == 0x99B2F9B181F79BB8LL), 0x7914L)))
    { 
        int16_t l_917 = 0x08DFL;
        int16_t *l_918 = &l_917;
        union U3 l_975 = {6L};
        int32_t l_984 = (-4L);
        int32_t l_995 = 0x57FE8E7FL;
        union U2 *l_1011 = &g_214;
        int16_t l_1060 = 1L;
        int64_t **l_1088 = &l_65;
        int64_t ***l_1087 = &l_1088;
        struct S0 l_1095 = {1UL,4UL,0x68L,3L,1L,0xC350L,0x346366DAL,0x81FD0B9FFBC778B7LL};
        union U1 l_1117 = {-1L};
        int8_t l_1119[1];
        uint8_t *l_1121 = &l_97.f1;
        int32_t l_1171 = (-10L);
        int i;
        for (i = 0; i < 1; i++)
            l_1119[i] = 0x55L;
        if (((((((safe_add_func_int32_t_s_s((p_16 & (p_15.f0 = (safe_div_func_int16_t_s_s(((*l_918) = ((safe_div_func_int32_t_s_s((6L | l_97.f4), (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(l_69[2].f2, 7)) <= (((((((safe_div_func_uint8_t_u_u(((*g_730) = p_15.f3), (safe_add_func_int16_t_s_s(l_917, (g_163 , 0UL))))) != l_917) , (*g_42)) == (*g_42)) >= p_15.f0) > 0x57E83559L) == g_34[1])), p_15.f0)), 0)))) , g_214.f1)), p_16)))), p_16)) ^ l_69[2].f0) >= p_14) < p_14) | p_14) || 65526UL))
        { 
            int32_t ***l_930 = &g_929[3][0][3];
            union U1 ****l_949 = &g_882;
            union U1 *****l_948 = &l_949;
            int32_t l_962[5] = {0xE31216EDL,0xE31216EDL,0xE31216EDL,0xE31216EDL,0xE31216EDL};
            struct S0 l_1044 = {0x3BB3441E81262CD4LL,0xB5L,8UL,-4L,2L,1UL,0xD5651B34L,0x5A4E822089DB6019LL};
            int32_t *l_1070 = &g_99;
            int32_t l_1080 = (-1L);
            int64_t ****l_1089[6][5] = {{&l_1087,(void*)0,(void*)0,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087,&l_1087,&l_1087}};
            union U3 l_1093 = {-1L};
            uint32_t *l_1094 = &g_135[0][1];
            int i, j;
            for (g_43 = 3; (g_43 >= 0); g_43 -= 1)
            { 
                int32_t ****l_931 = (void*)0;
                int32_t ****l_932 = &l_930;
                int32_t *****l_939 = &l_931;
                int32_t *l_940 = &g_34[1];
                int32_t *l_941 = (void*)0;
                int32_t *l_942[3];
                union U3 l_958 = {-8L};
                int64_t *l_959 = &g_122[0][0];
                uint64_t l_960 = 18446744073709551615UL;
                union U1 l_1025 = {1L};
                int i;
                for (i = 0; i < 3; i++)
                    l_942[i] = &g_163.f0;
            }
            if (((l_995 = (*g_730)) | (((***g_838)++) == (5L > (l_1044 , (safe_lshift_func_uint8_t_u_u((*g_730), 3)))))))
            { 
                p_15.f0 = l_917;
            }
            else
            { 
                int64_t l_1055 = (-1L);
                int32_t l_1058 = 0x9BB8E7ECL;
                int32_t l_1059 = 1L;
                int32_t l_1061 = 0x47F8D853L;
                int32_t l_1062 = 0xBD1F74C0L;
                int32_t l_1063 = 0L;
                int32_t l_1064 = 0x93C62571L;
                int32_t l_1066 = 0L;
                if (((-9L) && (p_15.f0 ^= (safe_sub_func_int32_t_s_s((****l_938), p_16)))))
                { 
                    int32_t *l_1050 = &l_97.f3;
                    (*l_1050) = ((void*)0 != l_1049[1][2]);
                    return g_118[0][1];
                }
                else
                { 
                    int32_t *l_1051 = (void*)0;
                    int32_t *l_1052 = &g_1031.f0;
                    int32_t *l_1053 = &l_69[2].f0;
                    int32_t *l_1054 = &g_34[1];
                    int32_t *l_1056 = (void*)0;
                    int32_t *l_1057[5] = {&g_34[1],&g_34[1],&g_34[1],&g_34[1],&g_34[1]};
                    int i;
                    l_1067[1]--;
                    return g_118[0][1];
                }
            }
            (*l_1070) ^= 7L;
            if ((safe_mul_func_uint8_t_u_u(((!((*p_18) , ((*g_730) = ((safe_div_func_uint32_t_u_u(((((*l_1094) = (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_1080, (((safe_unary_minus_func_int32_t_s((!(safe_add_func_int64_t_s_s((p_16 != ((safe_lshift_func_uint8_t_u_s(((l_1090 = l_1087) == l_1091), 6)) >= (l_1093 , ((g_118[0][1] , p_15.f4) || p_16)))), 0x55A58625CD36C97DLL))))) || p_16) >= 251UL))), l_975.f4))) != p_15.f0) , l_975.f4), g_250[0])) > (****l_938))))) >= (-1L)), 0xEFL)))
            { 
                return l_1095;
            }
            else
            { 
                union U1 ** const *l_1103 = (void*)0;
                union U1 ** const **l_1102 = &l_1103;
                union U1 ** const ***l_1104 = &l_1102;
                union U1 *** const **l_1106 = (void*)0;
                union U1 *** const **l_1107 = &l_1105;
                const int32_t l_1108[2] = {(-1L),(-1L)};
                int8_t *l_1120[1][7] = {{(void*)0,&l_1119[0],(void*)0,(void*)0,&l_1119[0],(void*)0,(void*)0}};
                int32_t *l_1123 = &l_1093.f0;
                int i, j;
                (*l_1070) = (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((((&g_592 != (void*)0) <= p_15.f0) == ((((safe_lshift_func_int8_t_s_u((((*l_1104) = l_1102) != ((*l_1107) = l_1105)), (*g_730))) > (****l_938)) > (*g_592)) & 65535UL)) & p_16), l_975.f0)), l_1108[1]));
                if ((7L < ((((((g_163.f3 ^ (p_15.f4 = ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(253UL, ((((l_1117 , ((safe_unary_minus_func_int8_t_s((g_332.f0 |= (0x65L && ((g_526 &= l_1119[0]) , 0x13L))))) != p_15.f0)) <= l_975.f2) , (*g_42)) < (**g_339)))), g_250[0])) > (-3L)))) || (*g_42)) ^ 0xD2B16FC7L) , l_1121) == l_1120[0][6]) != 0x40L)))
                { 
                    uint32_t l_1122 = 0xB2475B26L;
                    l_1122 = (****g_934);
                }
                else
                { 
                    l_1123 = &l_984;
                    (*l_1123) &= (****l_938);
                }
                l_1080 &= (****g_934);
                l_975.f0 = ((((safe_mul_func_int8_t_s_s((p_14 != (!((safe_add_func_int32_t_s_s(((*l_1070) >= ((safe_mul_func_uint16_t_u_u((!(safe_lshift_func_uint8_t_u_s((+(safe_rshift_func_uint16_t_u_u((((*l_1123) = (****l_938)) ^ (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((p_15 , g_1143) == (void*)0), ((safe_add_func_uint64_t_u_u(((*g_340) &= ((safe_rshift_func_uint16_t_u_u(((*g_592) = ((safe_div_func_uint32_t_u_u(4294967290UL, p_16)) && p_16)), p_15.f4)) == (***g_768))), (*g_770))) == l_1150))), (-1L)))), 6))), p_14))), g_118[0][1].f6)) ^ (****l_938))), 0x806FE68DL)) & 0x2C7F60EDL))), p_14)) == 3UL) , &g_163) != &g_163);
            }
        }
        else
        { 
            int32_t ***l_1166 = &g_929[0][2][5];
            int32_t l_1170 = 1L;
            uint16_t l_1190 = 0UL;
            if ((safe_mul_func_int8_t_s_s((0UL > (+(((safe_mul_func_int8_t_s_s(p_15.f0, (l_975.f0 = p_15.f0))) , l_1095.f0) ^ (safe_div_func_uint8_t_u_u(((((p_15.f2 , 0x41B1L) >= (l_97.f3 &= (****l_938))) | 0x33L) > 18446744073709551608UL), 2UL))))), (*g_730))))
            { 
                int32_t * const ***l_1164 = (void*)0;
                int32_t * const ***l_1165 = &g_1162[3][3];
                int32_t l_1169[6];
                uint32_t l_1172 = 5UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_1169[i] = 0xD0E40C0BL;
                if ((((safe_unary_minus_func_int16_t_s(((0x54L | (~(((g_118[0][1] , (((safe_rshift_func_int16_t_s_s(((((*l_1165) = g_1162[3][3]) == l_1166) <= g_214.f0), 9)) | (g_961 <= ((****l_938) <= (***g_768)))) | 0x65F33AAEBA97C51ALL)) > 9L) >= (*g_592)))) <= l_1167))) && (****l_938)) > p_15.f0))
                { 
                    l_1095.f3 |= 0x570ACEDFL;
                    (*g_936) = &l_995;
                    (**g_1163) &= 0xB368C633L;
                }
                else
                { 
                    int32_t *l_1168[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1168[i] = (void*)0;
                    --l_1172;
                    return g_118[0][1];
                }
                l_995 &= ((l_1184 |= ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((*g_730), ((**g_1163) != (safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(p_15.f4, ((~p_15.f2) , (*g_730)))) || p_15.f3), ((*g_42) | (*g_42))))))), 7UL)) , (**g_339))) & (*g_42));
            }
            else
            { 
                uint8_t l_1185 = 0x1AL;
                int8_t *l_1186[6][4] = {{&g_28,(void*)0,&l_1119[0],&l_1119[0]},{&g_214.f0,&g_214.f0,&g_28,(void*)0},{(void*)0,&g_28,&g_28,&g_28},{&g_214.f0,&l_975.f4,&l_1119[0],&g_28},{&g_28,&l_975.f4,&l_975.f4,&g_28},{&l_975.f4,&g_28,&g_214.f0,(void*)0}};
                int32_t l_1195 = 0xBF207DADL;
                int i, j;
                if ((l_1185 >= (((g_332.f0 = p_16) ^ ((((~l_1190) || (((*g_730) = p_17) < ((safe_sub_func_uint16_t_u_u((*g_592), l_1185)) , (l_1195 |= ((safe_lshift_func_uint16_t_u_u((****l_938), p_15.f3)) , p_15.f3))))) == 0L) == l_917)) != (*g_42))))
                { 
                    return g_118[0][0];
                }
                else
                { 
                    int32_t *l_1196 = &g_34[3];
                    l_69[2].f0 ^= (p_15.f0 ^= (**g_936));
                    (***g_934) = l_1196;
                }
                l_1170 = 0x56AABBE5L;
                (**g_1163) = (&g_163 != &g_1031);
            }
        }
        (**g_1163) = p_16;
    }
    else
    { 
        (***g_934) = (***l_938);
    }
    (**g_1163) |= ((safe_mod_func_int8_t_s_s((((~(safe_add_func_int16_t_s_s(((*l_1211) = (safe_add_func_int64_t_s_s(((l_97 , ((safe_add_func_int64_t_s_s((&g_592 != (l_1207 = &g_592)), (*g_340))) & g_943)) < ((*l_1210) = (&g_526 != (g_1208 = &l_1067[1])))), p_16))), l_1212))) > 18446744073709551610UL) & 0x900A50C38598F013LL), p_14)) || g_19);
    for (g_214.f2 = 0; (g_214.f2 <= 22); ++g_214.f2)
    { 
        uint32_t l_1216 = 4294967286UL;
        uint32_t *l_1226[2][6] = {{&g_135[0][1],&g_135[0][1],&g_135[0][1],&g_135[0][1],&g_135[0][1],&g_135[0][1]},{&g_135[0][1],&g_135[0][1],&g_135[0][1],&g_135[0][1],&g_135[0][1],&g_135[0][1]}};
        const int64_t *l_1230 = &l_97.f7;
        const int64_t **l_1229 = &l_1230;
        int i, j;
        l_97.f3 = (l_1215 != ((l_1216 && (*g_42)) <= (safe_mod_func_uint32_t_u_u((+(((*g_730) |= ((safe_div_func_uint64_t_u_u(((((**g_1163) = ((safe_sub_func_int8_t_s_s(((*l_1210) |= l_1216), (safe_add_func_uint32_t_u_u((p_16 = l_1167), (safe_mul_func_uint8_t_u_u((((**l_1091) = p_18) == ((*l_1229) = (void*)0)), 0xC2L)))))) != (*p_18))) > 0x321B55CBL) || g_122[0][6]), 0x1B52080DDFD92D29LL)) == l_1216)) >= 0xCAL)), l_1231))));
    }
    return l_97;
}



static const uint8_t  func_20(int64_t  p_21, struct S0  p_22, int8_t * p_23, int32_t  p_24, int8_t * p_25)
{ 
    int32_t *l_33 = &g_34[1];
    int32_t *l_35 = &g_34[0];
    int32_t *l_36 = &g_34[1];
    int32_t *l_37[4][5] = {{&g_34[1],&g_34[1],&g_34[1],&g_34[1],&g_34[1]},{&g_34[3],&g_34[1],&g_34[3],&g_34[3],&g_34[1]},{&g_34[1],&g_34[3],&g_34[3],&g_34[1],&g_34[3]},{&g_34[1],&g_34[1],&g_34[1],&g_34[1],&g_34[3]}};
    uint8_t l_38 = 0xD9L;
    int i, j;
    ++l_38;
    return g_34[1];
}



static uint64_t  func_54(int8_t * p_55, uint32_t  p_56, struct S0  p_57, int32_t * p_58, union U1  p_59)
{ 
    int64_t l_100 = 0x0013D6AA3471AF26LL;
    int16_t l_103 = (-3L);
    int64_t *l_121 = &g_122[0][1];
    uint16_t l_123 = 0x4A0AL;
    int32_t l_124 = 0x099FFC3CL;
    int32_t *l_125 = &g_34[1];
    uint64_t l_141 = 1UL;
    union U2 l_176 = {-4L};
    union U3 l_205 = {1L};
    int64_t l_212 = 0xF2B6CD6B3CA71B0ELL;
    uint32_t l_276 = 0xDC683E3DL;
    int16_t l_314 = (-2L);
    const int32_t *l_356 = &g_99;
    int32_t l_493 = 0x040CD7BEL;
    int32_t l_494[3][7] = {{0x72216062L,0x72216062L,4L,4L,0x72216062L,0x72216062L,4L},{(-2L),(-1L),(-2L),(-1L),(-2L),(-1L),(-2L)},{0x72216062L,4L,4L,0x72216062L,0x72216062L,4L,4L}};
    uint16_t l_534[2][3] = {{0x1A83L,9UL,0x1A83L},{0x1A83L,9UL,0x1A83L}};
    int16_t *l_535 = (void*)0;
    int16_t *l_536[2];
    uint32_t *l_539 = (void*)0;
    uint32_t *l_540 = &g_135[0][1];
    uint64_t l_541 = 0xE585245A9724FD67LL;
    uint64_t **l_680[4];
    uint32_t l_690 = 9UL;
    const uint32_t l_723[3] = {0x4332B645L,0x4332B645L,0x4332B645L};
    uint32_t l_736 = 0x19C9D87CL;
    union U1 *l_868 = &g_332;
    union U1 **l_867 = &l_868;
    int32_t *l_870 = &l_205.f0;
    int32_t *l_871 = &l_493;
    int32_t *l_872 = (void*)0;
    int32_t *l_873 = &g_34[1];
    int32_t *l_874[4][2][6] = {{{&l_494[1][3],&g_429,(void*)0,&g_34[1],&g_163.f0,&g_163.f0},{&g_810,&l_205.f0,&l_494[1][3],&l_494[1][3],&l_205.f0,&g_810}},{{&g_163.f0,&g_34[2],(void*)0,(void*)0,&g_34[1],&l_205.f0},{&g_34[2],(void*)0,&g_34[1],&l_124,&l_205.f0,&g_34[1]}},{{&g_34[2],&g_99,&l_124,(void*)0,&l_124,&g_99},{&g_163.f0,&g_34[1],&g_34[1],&l_494[1][3],&g_99,(void*)0}},{{&g_810,&l_494[1][5],(void*)0,&g_34[1],&g_163.f0,&l_124},{&l_494[1][3],&l_494[1][5],&g_429,&g_99,&g_99,&g_429}}};
    uint64_t l_875 = 0x9B08170E66729101LL;
    union U1 ****l_880 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_536[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_680[i] = &g_340;
    (*l_125) &= ((*p_58) = ((l_100 & (safe_add_func_uint16_t_u_u(((l_103 | (safe_mul_func_int8_t_s_s((p_57.f4 && (l_124 = ((safe_sub_func_int8_t_s_s(l_100, ((*p_55) = 0xDEL))) ^ (((safe_sub_func_uint16_t_u_u((((((((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((((*l_121) = (g_118[0][1] , (((safe_div_func_uint64_t_u_u((g_118[0][1].f6 ^ l_103), l_100)) >= 0x086DD7F6879DC8EDLL) & g_118[0][1].f1))) ^ l_103), 1UL)), g_99)), 8)) | p_57.f1) <= l_103) < l_103), g_118[0][1].f2)) , 0x2C45L) > g_118[0][1].f0) == l_123) <= 0x08L) != p_57.f2) >= 0UL), 65535UL)) , 0x60L) & l_123)))), 0xB7L))) , g_122[0][2]), g_118[0][1].f5))) < g_118[0][1].f5));
    return (***g_838);
}



static int8_t * func_60(int64_t * p_61, int64_t * p_62, uint16_t * p_63, const int16_t  p_64)
{ 
    int8_t *l_96 = &g_28;
    return l_96;
}



static int64_t * func_66(union U3  p_67, int64_t * p_68)
{ 
    int32_t l_70 = 0xB513AA7AL;
    int32_t l_84 = 0xA94CD535L;
    int32_t l_85 = 1L;
    int32_t l_86 = 0xB4A8206DL;
    int32_t l_87[1][4];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_87[i][j] = (-8L);
    }
    if (l_70)
    { 
        int32_t *l_71 = (void*)0;
        int32_t *l_72[2];
        int i;
        for (i = 0; i < 2; i++)
            l_72[i] = &l_70;
        p_67.f0 &= ((0x8247L && g_43) == g_34[1]);
    }
    else
    { 
        int32_t *l_75 = &l_70;
        int32_t *l_76 = &g_34[1];
        int32_t *l_77 = (void*)0;
        int32_t *l_78 = &l_70;
        int32_t l_79[4];
        int32_t *l_80 = &l_70;
        int32_t *l_81 = &l_79[2];
        int32_t *l_82[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_83 = 0x2A496EB7L;
        uint32_t l_88 = 0x4CF1313BL;
        int32_t **l_91 = (void*)0;
        int32_t **l_92 = (void*)0;
        int i, j;
        for (i = 0; i < 4; i++)
            l_79[i] = 0xBD67DEC9L;
        g_34[1] |= (safe_lshift_func_int16_t_s_s((-1L), p_67.f2));
        (*l_75) |= g_28;
        l_88++;
        l_80 = &l_70;
    }
    return p_68;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_118[i][j].f0, "g_118[i][j].f0", print_hash_value);
            transparent_crc(g_118[i][j].f1, "g_118[i][j].f1", print_hash_value);
            transparent_crc(g_118[i][j].f2, "g_118[i][j].f2", print_hash_value);
            transparent_crc(g_118[i][j].f3, "g_118[i][j].f3", print_hash_value);
            transparent_crc(g_118[i][j].f4, "g_118[i][j].f4", print_hash_value);
            transparent_crc(g_118[i][j].f5, "g_118[i][j].f5", print_hash_value);
            transparent_crc(g_118[i][j].f6, "g_118[i][j].f6", print_hash_value);
            transparent_crc(g_118[i][j].f7, "g_118[i][j].f7", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_122[i][j], "g_122[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_135[i][j], "g_135[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_163.f0, "g_163.f0", print_hash_value);
    transparent_crc(g_163.f2, "g_163.f2", print_hash_value);
    transparent_crc(g_163.f3, "g_163.f3", print_hash_value);
    transparent_crc(g_163.f4, "g_163.f4", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_250[i], "g_250[i]", print_hash_value);

    }
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_900[i], "g_900[i]", print_hash_value);

    }
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_1031.f0, "g_1031.f0", print_hash_value);
    transparent_crc(g_1031.f2, "g_1031.f2", print_hash_value);
    transparent_crc(g_1031.f3, "g_1031.f3", print_hash_value);
    transparent_crc(g_1031.f4, "g_1031.f4", print_hash_value);
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1284, "g_1284", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1340.f0, "g_1340.f0", print_hash_value);
    transparent_crc(g_1446, "g_1446", print_hash_value);
    transparent_crc(g_1554, "g_1554", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
