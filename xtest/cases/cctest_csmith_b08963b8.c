// SPDX-License-Identifier: MIT
// cctest_csmith_b08963b8.c --- cctest case csmith_b08963b8 (csmith seed 2961793976)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x97322255 */
/* @exp_ticks 0xa2cd */

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

// Options:   -s 2961793976 -o /tmp/csmith_gen_m4tm9vy6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   uint32_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
   struct S0  f1;
   int8_t * f2;
   int64_t  f3;
   uint64_t  f4;
};

union U2 {
   int32_t  f0;
   int16_t  f1;
};


static int8_t g_8 = 0x09L;
static int8_t *g_7 = &g_8;
static union U1 g_12 = {0x3FL};
static int32_t g_14[4][7][6] = {{{(-10L),0x99CDF9C7L,0xFB66FEBFL,0x08FBDEDBL,0x813C27F3L,(-1L)},{(-1L),1L,0x49A5C1B0L,0x49A5C1B0L,1L,(-1L)},{0xC53A21B7L,(-1L),0L,0x75DAA08BL,0x83800955L,1L},{0xBB4F5AC3L,0xBE856DFCL,0x840C2C6FL,1L,0x08FBDEDBL,0xDA84B505L},{0xBB4F5AC3L,0xC2E3A4C6L,1L,0x75DAA08BL,(-10L),0x6A530863L},{0xC53A21B7L,0x83800955L,3L,0x49A5C1B0L,(-1L),0xBE856DFCL},{(-1L),0xDA84B505L,0xC2E3A4C6L,0x08FBDEDBL,0x2510A741L,0xC53A21B7L}},{{(-10L),(-1L),0xDA84B505L,0x9FA9EF81L,(-1L),3L},{0L,(-3L),0x96BB6454L,0xC2E3A4C6L,0x99CDF9C7L,1L},{0xBB4F5AC3L,0x08FBDEDBL,0x6A530863L,(-10L),0x813C27F3L,0x840C2C6FL},{(-10L),0x08FBDEDBL,0x9FA9EF81L,0x2510A741L,0x99CDF9C7L,0L},{0xDE450BB1L,(-3L),(-10L),0xFB66FEBFL,(-1L),0x49A5C1B0L},{0x6A530863L,3L,(-10L),0xDA84B505L,(-1L),0xFB66FEBFL},{0x08FBDEDBL,(-1L),(-1L),0xDBF4DF7BL,0xDBF4DF7BL,(-1L)}},{{(-1L),(-1L),0xC53A21B7L,0x813C27F3L,0x96BB6454L,(-1L)},{0xDA84B505L,1L,0xBB4F5AC3L,1L,0x9FA9EF81L,0xC53A21B7L},{0x75DAA08BL,0xDA84B505L,0xBB4F5AC3L,0x6A530863L,(-1L),(-1L)},{1L,0x6A530863L,0xC53A21B7L,0x99CDF9C7L,0xBE856DFCL,(-1L)},{0x99CDF9C7L,0xBE856DFCL,(-1L),0x5F402BE2L,0x840C2C6FL,0xFB66FEBFL},{(-3L),0xC53A21B7L,(-10L),0x49A5C1B0L,(-10L),0x49A5C1B0L},{(-10L),(-1L),(-10L),1L,1L,0L}},{{1L,0x1D1A932DL,0x9FA9EF81L,(-10L),0L,0x840C2C6FL},{1L,0x813C27F3L,0x6A530863L,(-10L),0x75DAA08BL,1L},{1L,(-10L),0x96BB6454L,1L,0x6A530863L,3L},{(-10L),0xFB66FEBFL,(-1L),0x49A5C1B0L,0x7A2E255BL,0xC2E3A4C6L},{(-3L),1L,1L,0x5F402BE2L,0xDA84B505L,0xDA84B505L},{0x99CDF9C7L,0x83800955L,0x83800955L,0x99CDF9C7L,0x5F402BE2L,(-10L)},{1L,0x2510A741L,0xBE856DFCL,0x6A530863L,(-1L),(-1L)}}};
static int32_t g_16 = (-9L);
static int32_t g_17 = 0x7B8A5F03L;
static int32_t g_24 = 5L;
static int32_t g_39 = 0xBA4BDACAL;
static int64_t g_50 = 0xF0C8B8AFECA80087LL;
static int32_t g_53[5] = {0xAF746A6EL,0xAF746A6EL,0xAF746A6EL,0xAF746A6EL,0xAF746A6EL};
static int32_t g_54[7][2][5] = {{{3L,(-1L),0x01120EACL,0x43C7198FL,0xA0115B50L},{0xA0115B50L,1L,(-7L),0xC9FF6DE5L,0L}},{{2L,0x43C7198FL,0x43C7198FL,2L,1L},{0L,0x43C7198FL,0L,6L,2L}},{{0xC9FF6DE5L,1L,0L,(-2L),0xBB7EAB32L},{0L,(-1L),0x9C35E3C9L,6L,6L}},{{(-1L),0xC9FF6DE5L,(-1L),2L,0x632420D6L},{(-1L),0x19E2F9DBL,(-2L),0xC9FF6DE5L,0x01120EACL}},{{0L,0x9C35E3C9L,1L,0x43C7198FL,0xA71B0FACL},{0xC9FF6DE5L,6L,(-2L),0x01120EACL,(-2L)}},{{0L,0L,(-1L),0x19E2F9DBL,(-2L)},{2L,0x632420D6L,0x9C35E3C9L,0xBB7EAB32L,0xA71B0FACL}},{{0xA0115B50L,0xBB7EAB32L,0L,3L,0L},{0x01120EACL,0xBB7EAB32L,2L,2L,0xBB7EAB32L}}};
static uint16_t g_80[5] = {2UL,2UL,2UL,2UL,2UL};
static int32_t g_82 = 2L;
static struct S0 g_83 = {1UL,0xAE71BBE2L,0xAF1C4852B1B1FA0ALL,0x086DEEB8L,-4L};
static int16_t *g_98 = (void*)0;
static uint8_t g_102 = 0x55L;
static union U2 g_109 = {0x918AE130L};
static int16_t g_164 = 0x4ED3L;
static int8_t g_201 = 0xF0L;
static struct S0 g_249 = {0x18067116L,0x58D0A81AL,0x18C5570C8BC80382LL,6UL,0x1A5AF9E53DDB62CFLL};
static struct S0 *g_248 = &g_249;
static uint32_t g_257 = 5UL;
static uint8_t g_265[7][1] = {{9UL},{249UL},{9UL},{249UL},{9UL},{249UL},{9UL}};
static uint16_t g_300[4][4][5] = {{{0x9999L,0x5E2BL,9UL,0x5E2BL,0x9999L},{0x159EL,0UL,0xEEA6L,0x5E2BL,1UL},{1UL,0x159EL,0UL,1UL,0xE05EL},{9UL,0xEEA6L,1UL,0UL,1UL}},{{1UL,1UL,0x81B2L,0UL,0x9999L},{1UL,0x9760L,0x9999L,65535UL,0xB897L},{9UL,0xCEFAL,0xE05EL,0xA474L,0x5E2BL},{1UL,0x9760L,0x9760L,1UL,0xB00DL}},{{0x159EL,1UL,0x9760L,0x9999L,65535UL},{0x9999L,0xEEA6L,0xE05EL,9UL,0x9760L},{0xCEFAL,0x159EL,0x9999L,0x9999L,0x159EL},{0xB897L,0UL,0x81B2L,1UL,0x159EL}},{{0xEEA6L,0x5E2BL,1UL,0xA474L,0x9760L},{0UL,0xA474L,0UL,65535UL,65535UL},{0xEEA6L,0x81B2L,0xEEA6L,0UL,0xB00DL},{0xB897L,0x81B2L,9UL,0UL,0x5E2BL}}};
static union U1 g_305 = {0x06L};
static int32_t *g_391 = (void*)0;
static uint32_t g_411 = 4294967290UL;
static uint64_t g_434 = 18446744073709551608UL;
static uint8_t *g_461 = &g_12.f0;
static uint8_t **g_460[5][6] = {{&g_461,(void*)0,&g_461,&g_461,&g_461,&g_461},{&g_461,&g_461,&g_461,&g_461,&g_461,(void*)0},{&g_461,&g_461,&g_461,(void*)0,&g_461,&g_461},{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461},{&g_461,&g_461,&g_461,&g_461,&g_461,&g_461}};
static struct S0 **g_490[2] = {&g_248,&g_248};
static struct S0 **g_491 = &g_248;
static struct S0 **g_550 = &g_248;
static union U1 g_607 = {1UL};
static union U1 g_761 = {255UL};
static int32_t g_804 = (-1L);
static uint32_t *g_817 = &g_411;
static uint32_t **g_816[1][4][4] = {{{(void*)0,(void*)0,&g_817,(void*)0},{(void*)0,&g_817,&g_817,(void*)0},{&g_817,(void*)0,&g_817,&g_817},{(void*)0,(void*)0,&g_817,(void*)0}}};
static uint64_t g_873 = 18446744073709551606UL;
static union U1 g_954 = {247UL};
static uint16_t *g_975 = &g_300[3][0][1];
static uint16_t **g_974 = &g_975;
static union U1 *g_978 = &g_607;
static union U1 **g_977[3][4] = {{&g_978,&g_978,&g_978,&g_978},{&g_978,&g_978,&g_978,&g_978},{&g_978,&g_978,&g_978,&g_978}};
static uint32_t g_991 = 8UL;
static uint64_t g_1006 = 0x616AC59FE3FA8AB0LL;
static uint16_t *g_1049[6][7] = {{&g_300[1][0][4],&g_300[2][2][4],&g_80[4],&g_300[3][0][1],&g_80[3],&g_300[3][0][1],&g_80[4]},{&g_300[3][0][1],&g_80[4],&g_300[2][2][4],&g_300[3][0][1],&g_80[4],(void*)0,&g_80[4]},{&g_80[4],&g_300[2][2][0],&g_300[3][0][1],&g_300[3][0][1],&g_300[2][2][0],&g_80[4],&g_300[3][0][1]},{&g_300[2][2][4],&g_80[4],&g_300[3][0][1],&g_80[3],&g_300[3][0][1],&g_80[4],&g_300[2][2][0]},{&g_80[4],&g_80[4],&g_300[2][2][4],&g_80[4],&g_300[3][0][1],&g_80[4],&g_300[3][0][1]},{(void*)0,&g_300[2][2][4],&g_300[2][2][4],(void*)0,&g_300[3][0][1],&g_300[3][0][1],&g_300[3][0][1]}};
static union U2 *g_1086 = &g_109;
static struct S0 * const *g_1110 = &g_248;
static struct S0 * const **g_1109 = &g_1110;
static struct S0 * const ***g_1108 = &g_1109;
static uint32_t g_1123 = 1UL;
static const int16_t g_1155 = 1L;
static int16_t **g_1177 = &g_98;
static int16_t ***g_1176 = &g_1177;
static int8_t **g_1227 = &g_7;
static uint64_t *g_1254[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t **g_1253 = &g_1254[0];
static uint64_t *g_1264 = &g_761.f4;
static int64_t g_1279 = 1L;
static int32_t * const **g_1316 = (void*)0;
static int32_t *g_1320[4][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
static uint16_t ***g_1365[6] = {&g_974,&g_974,&g_974,&g_974,&g_974,&g_974};
static uint16_t ****g_1364 = &g_1365[2];



static int32_t  func_1(void);
static const int32_t  func_2(int8_t * p_3, uint8_t  p_4, union U1  p_5, int8_t * p_6);
static union U1  func_9(uint32_t  p_10);
static int32_t * func_18(int8_t * p_19, int32_t  p_20, uint32_t  p_21, const int8_t * p_22);
static int8_t * func_25(int8_t * const  p_26, uint64_t  p_27);
static int8_t * func_31(union U1  p_32, int32_t  p_33);
static int8_t * func_34(const int32_t * p_35, int32_t * p_36);
static struct S0  func_45(int8_t * p_46, int64_t * p_47);




static int32_t  func_1(void)
{ 
    int32_t l_11 = 0x49F6D4A0L;
    int32_t *l_15 = &l_11;
    uint32_t l_837[1];
    uint8_t ***l_851 = (void*)0;
    int32_t l_903 = 0x33166FBBL;
    int32_t l_904 = 0x9E4A1381L;
    int32_t l_942 = 0xB5C4F4BCL;
    int32_t l_943 = 5L;
    int32_t l_944 = 0x3088ED28L;
    int32_t l_945 = 0x5FA1E1DCL;
    int32_t l_949[2][1];
    int32_t l_963 = 5L;
    uint16_t l_1026 = 1UL;
    uint64_t l_1062 = 0x4FE61C67B173EE18LL;
    int32_t l_1080 = 0xBBFFD1B4L;
    int8_t **l_1090 = &g_7;
    int8_t *** const l_1089[4][7] = {{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090},{&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090,&l_1090}};
    const uint16_t l_1094 = 1UL;
    uint32_t l_1103[3];
    int64_t l_1126 = (-3L);
    int16_t **l_1156[5][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    struct S0 l_1171 = {0xC161210EL,18446744073709551615UL,0x74C8437F743CD942LL,0x72105AAAL,0L};
    int16_t l_1243 = 0x1AE5L;
    union U1 **l_1270 = &g_978;
    uint8_t *l_1283 = &g_607.f0;
    uint16_t l_1332 = 1UL;
    uint16_t l_1345 = 65535UL;
    int64_t *l_1349 = &g_1279;
    uint32_t l_1355 = 0xCFF2CF0DL;
    int32_t l_1380 = 1L;
    uint16_t l_1387 = 0xDE0FL;
    uint32_t l_1392 = 0x41EF1148L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_837[i] = 0x225CAA7CL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_949[i][j] = 0xF1521855L;
    }
    for (i = 0; i < 3; i++)
        l_1103[i] = 0xD1B8A26AL;
    g_14[1][0][0] = func_2(g_7, g_8, func_9(l_11), &g_8);
    (*l_15) = l_11;
    for (g_8 = 3; (g_8 >= 0); g_8 -= 1)
    { 
        union U1 l_724 = {255UL};
        const int8_t *l_823 = (void*)0;
        union U2 *l_840 = &g_109;
        int32_t l_923 = 0x70FC5B3BL;
        int8_t l_946 = 1L;
        int32_t l_947[3];
        uint32_t ** const *l_960 = (void*)0;
        uint32_t ** const **l_959 = &l_960;
        int i;
        for (i = 0; i < 3; i++)
            l_947[i] = 0x22DC4252L;
        for (l_11 = 0; (l_11 <= 3); l_11 += 1)
        { 
            int8_t * const l_28 = &g_8;
            int32_t l_723[1][2];
            const int32_t *l_834[7][5][6] = {{{&g_109.f0,&g_804,&g_109.f0,&g_109.f0,&g_804,&g_804},{&g_804,&g_109.f0,&g_804,(void*)0,&g_804,&g_109.f0},{&g_804,&g_804,(void*)0,&g_109.f0,&g_804,&g_804},{&g_109.f0,&g_804,&g_804,(void*)0,&g_109.f0,&g_804},{&g_109.f0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_109.f0,&g_109.f0,(void*)0,&g_109.f0,(void*)0,(void*)0},{&g_804,&g_804,&g_109.f0,(void*)0,&g_804,(void*)0},{&g_804,&g_804,&g_109.f0,&g_109.f0,&g_109.f0,(void*)0},{&g_109.f0,&g_109.f0,(void*)0,&g_804,&g_804,&g_804},{&g_804,&g_804,&g_804,&g_109.f0,(void*)0,&g_804}},{{&g_109.f0,&g_804,&g_804,&g_804,&g_804,&g_804},{&g_804,&g_109.f0,&g_804,&g_109.f0,&g_109.f0,&g_109.f0},{&g_804,&g_804,(void*)0,&g_804,&g_109.f0,(void*)0},{&g_804,&g_109.f0,&g_109.f0,&g_109.f0,&g_804,&g_804},{&g_804,&g_109.f0,&g_109.f0,&g_804,&g_109.f0,&g_109.f0}},{{&g_109.f0,&g_109.f0,(void*)0,&g_109.f0,(void*)0,&g_109.f0},{&g_804,&g_109.f0,&g_109.f0,&g_804,&g_109.f0,&g_804},{(void*)0,&g_109.f0,&g_109.f0,&g_109.f0,&g_109.f0,(void*)0},{&g_804,&g_109.f0,(void*)0,&g_109.f0,&g_109.f0,&g_109.f0},{&g_804,&g_109.f0,&g_804,&g_109.f0,&g_109.f0,&g_804}},{{&g_109.f0,&g_109.f0,&g_804,&g_109.f0,(void*)0,&g_804},{&g_109.f0,&g_109.f0,&g_804,&g_109.f0,&g_109.f0,&g_804},{&g_109.f0,&g_109.f0,(void*)0,&g_109.f0,&g_804,&g_804},{&g_804,&g_109.f0,&g_804,&g_109.f0,&g_109.f0,(void*)0},{&g_804,&g_804,&g_804,&g_109.f0,&g_109.f0,&g_804}},{{(void*)0,&g_109.f0,(void*)0,&g_804,&g_804,&g_804},{&g_804,&g_804,&g_804,&g_109.f0,(void*)0,&g_804},{&g_109.f0,&g_804,&g_804,&g_804,&g_804,&g_804},{&g_804,&g_109.f0,&g_804,&g_109.f0,&g_109.f0,&g_109.f0},{&g_804,&g_804,(void*)0,&g_804,&g_109.f0,(void*)0}},{{&g_804,&g_109.f0,&g_109.f0,&g_109.f0,&g_804,&g_804},{&g_804,&g_109.f0,&g_109.f0,&g_804,&g_109.f0,&g_109.f0},{&g_109.f0,&g_109.f0,(void*)0,&g_109.f0,(void*)0,&g_109.f0},{&g_804,&g_109.f0,&g_109.f0,&g_804,&g_109.f0,&g_804},{(void*)0,&g_109.f0,&g_109.f0,&g_109.f0,&g_109.f0,(void*)0}}};
            uint32_t l_839[5];
            uint8_t ***l_849 = &g_460[0][0];
            uint8_t ****l_850 = &l_849;
            int16_t l_899[3];
            struct S0 l_916 = {0x7C5A0682L,0x7DA65F25L,-5L,18446744073709551610UL,0xC85A9F88E612EC73LL};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_723[i][j] = 0xE0E0C024L;
            }
            for (i = 0; i < 5; i++)
                l_839[i] = 18446744073709551615UL;
            for (i = 0; i < 3; i++)
                l_899[i] = 0x7A95L;
        }
        g_391 = &l_11;
        for (g_50 = 0; (g_50 >= 1); ++g_50)
        { 
            uint8_t l_1002 = 0x5EL;
            uint64_t *l_1003 = &g_954.f4;
            int32_t l_1019 = 0x100C56B2L;
            int32_t l_1020 = (-1L);
            int32_t l_1021 = 6L;
            int16_t l_1023[3][6][3] = {{{(-1L),(-1L),0xBC6DL},{1L,0x086FL,1L},{(-1L),0xBC6DL,0xBC6DL},{(-10L),0x086FL,(-10L)},{(-1L),(-1L),0xBC6DL},{1L,0x086FL,1L}},{{(-1L),0xBC6DL,0xBC6DL},{(-10L),0x086FL,(-10L)},{(-1L),(-1L),0xBC6DL},{1L,0x086FL,1L},{(-1L),0xBC6DL,0xBC6DL},{(-10L),0x086FL,(-10L)}},{{(-1L),(-1L),0xBC6DL},{1L,0x086FL,1L},{(-1L),0xBC6DL,0xBC6DL},{(-10L),0x086FL,(-10L)},{(-1L),(-1L),0xBC6DL},{1L,0x086FL,1L}}};
            int32_t l_1024 = 0x02C5D8F1L;
            int32_t l_1025 = 0x91A421C1L;
            int8_t l_1030 = 0x18L;
            uint16_t ***l_1034 = &g_974;
            union U1 l_1043 = {0x69L};
            int8_t l_1081 = 0xA1L;
            int i, j, k;
            if ((((*l_1003) = (l_946 < (((safe_sub_func_int8_t_s_s((*l_15), (safe_div_func_uint32_t_u_u((l_947[0] < (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_991, (safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0xE1E0L, (*g_975))), l_1002)) ^ 0x84BDL), 0x3F9EL)) , g_257), 0x3C06AA720A50E670LL)), (*g_7))))) || g_300[3][0][1]), 8L)), l_1002))), 0x610E41EAL)))) && g_761.f0) , (*l_15)))) || l_946))
            { 
                int16_t *l_1007 = &g_109.f1;
                (*g_391) = (safe_add_func_uint16_t_u_u(((*l_15) & g_265[2][0]), ((*l_1007) = g_1006)));
                for (l_904 = (-13); (l_904 > 15); l_904 = safe_add_func_int8_t_s_s(l_904, 4))
                { 
                    if ((*g_391))
                        break;
                    (*g_391) = (*g_391);
                    return g_249.f3;
                }
            }
            else
            { 
                int32_t *l_1010 = &l_944;
                int32_t *l_1011 = &l_943;
                int32_t *l_1012 = &g_53[1];
                int32_t *l_1013 = &l_944;
                int32_t *l_1014 = &g_53[1];
                int32_t *l_1015 = &g_53[1];
                int32_t *l_1016 = (void*)0;
                int32_t l_1017 = 0L;
                int32_t *l_1018[7];
                int64_t l_1022 = 0x76B32D788C3E3D7ALL;
                int i;
                for (i = 0; i < 7; i++)
                    l_1018[i] = &l_949[1][0];
                l_1026--;
                if ((*g_391))
                { 
                    int32_t **l_1029 = &l_1013;
                    (*l_1029) = &g_14[2][0][0];
                    if (l_1030)
                        continue;
                }
                else
                { 
                    (*l_1014) |= l_947[0];
                    (*l_1011) = 0x64A56E85L;
                }
                for (g_83.f2 = (-24); (g_83.f2 != 1); g_83.f2 = safe_add_func_int8_t_s_s(g_83.f2, 5))
                { 
                    uint32_t l_1033 = 9UL;
                    uint16_t ****l_1035 = &l_1034;
                    l_1033 ^= 0xFDA07253L;
                    (*l_1035) = l_1034;
                }
                for (g_83.f3 = 0; (g_83.f3 == 28); ++g_83.f3)
                { 
                    uint8_t l_1044 = 0xF0L;
                    (*l_1013) = ((*l_1011) = (safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s((*g_7))) ^ ((*g_248) , 65535UL)) > (((((((l_947[0] , (*g_550)) == (*g_550)) > ((*g_975) = (*g_975))) == 0L) | 0xF9A932CDL) , l_1043) , 1UL)), 4)) != l_947[0]), l_1044)));
                    return g_83.f0;
                }
            }
            for (l_1019 = 0; (l_1019 != 10); ++l_1019)
            { 
                int8_t l_1061[4][3][5] = {{{0xE4L,0xCEL,0x75L,0xCEL,0xE4L},{1L,0xCEL,0x2DL,0x69L,0xB9L},{0xB9L,0x2DL,2L,0xE4L,8L}},{{0xCEL,(-1L),0x0FL,0xCEL,0xB9L},{0xA4L,0xE4L,0x9BL,0x9BL,0xE4L},{0xB9L,1L,0x9BL,0x19L,2L}},{{(-1L),0xB9L,0x0FL,0L,0x19L},{0x69L,0xCEL,2L,0xA4L,0xE4L},{(-1L),0xA4L,0x2DL,0xE4L,0x2DL}},{{0xB9L,0xB9L,0x75L,0xE4L,0x64L},{0xA4L,(-1L),1L,0xA4L,0xB9L},{0xCEL,0x69L,0x9BL,0L,0x69L}}};
                struct S0 **l_1071 = &g_248;
                int32_t * const l_1082 = &l_947[0];
                int i, j, k;
                for (g_873 = 0; (g_873 == 39); g_873++)
                { 
                    uint16_t *l_1050 = &l_1026;
                    union U1 l_1056 = {7UL};
                    int32_t *l_1063 = &g_53[1];
                    int32_t **l_1064 = &g_391;
                }
                for (g_83.f4 = 0; (g_83.f4 != 7); g_83.f4++)
                { 
                    struct S0 ***l_1072 = &g_491;
                    int16_t *l_1075 = &l_1023[1][1][0];
                    struct S0 ****l_1076 = &l_1072;
                    struct S0 ****l_1077 = (void*)0;
                    struct S0 ***l_1079 = &l_1071;
                    struct S0 ****l_1078 = &l_1079;
                    int32_t **l_1083 = (void*)0;
                    int32_t **l_1084 = (void*)0;
                    int32_t **l_1085 = &g_391;
                    (*l_15) = (+((((((+(l_1061[3][1][3] | ((safe_add_func_int16_t_s_s(((&g_248 != ((*l_1072) = l_1071)) || (((safe_add_func_uint16_t_u_u((0x5C33L && ((*l_1075) = (*l_15))), ((((((*l_1076) = &g_490[0]) != ((*l_1078) = (g_109 , &g_550))) || l_946) & (*l_15)) < (*l_15)))) == 0xD5D422F95D4B89ECLL) >= g_434)), (*l_15))) >= g_83.f4))) & 0UL) && 0x56L) ^ 1UL) >= (-1L)) == l_1080));
                    if (l_1081)
                        continue;
                    (*l_1085) = l_1082;
                    (*l_15) |= ((**l_1085) ^= (-5L));
                }
                g_1086 = l_840;
            }
        }
    }
    for (g_39 = 0; (g_39 >= 0); --g_39)
    { 
        int16_t l_1091 = (-3L);
        int32_t l_1140 = 0xE38791ECL;
        uint32_t l_1148 = 0x35976250L;
        int32_t **l_1167 = &l_15;
        union U2 l_1170 = {-6L};
        uint16_t l_1179 = 0x663CL;
        int32_t l_1216 = 5L;
        uint16_t ***l_1226 = &g_974;
        uint16_t ****l_1225 = &l_1226;
        int32_t l_1242 = 0x31371FF1L;
        int32_t l_1244 = 0L;
        int32_t l_1246 = (-1L);
        uint16_t l_1248 = 0UL;
        uint8_t * const l_1261 = (void*)0;
        uint8_t * const *l_1260 = &l_1261;
        uint64_t *l_1262 = &l_1062;
        uint8_t l_1331 = 0UL;
        int32_t l_1344 = 0L;
        if ((*l_15))
            break;
    }
    return g_300[3][2][2];
}



static const int32_t  func_2(int8_t * p_3, uint8_t  p_4, union U1  p_5, int8_t * p_6)
{ 
    int32_t *l_13[6][5] = {{&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],(void*)0},{&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],(void*)0},{&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],(void*)0},{&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],(void*)0},{&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],(void*)0},{&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],&g_14[1][0][0],(void*)0}};
    int i, j;
    g_14[1][0][0] = 0x0D0714ADL;
    return g_8;
}



static union U1  func_9(uint32_t  p_10)
{ 
    return g_12;
}



static int32_t * func_18(int8_t * p_19, int32_t  p_20, uint32_t  p_21, const int8_t * p_22)
{ 
    int32_t *l_824 = &g_54[2][0][2];
    (*l_824) &= p_20;
    return l_824;
}



static int8_t * func_25(int8_t * const  p_26, uint64_t  p_27)
{ 
    union U2 l_728 = {-1L};
    uint64_t *l_745[2];
    int32_t l_746 = (-9L);
    int32_t l_747 = 0x89878275L;
    int32_t l_748 = 0x34C12990L;
    int32_t l_749 = 0x611C0491L;
    int32_t l_750[3][4];
    int8_t *l_754[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t l_755 = (-10L);
    int64_t l_764 = 0x16125E9F251CC7F5LL;
    uint16_t *l_773 = &g_80[4];
    uint16_t *l_774[1][5] = {{&g_300[1][0][2],&g_300[1][0][2],&g_300[1][0][2],&g_300[1][0][2],&g_300[1][0][2]}};
    int32_t *l_775 = &g_82;
    union U1 *l_779 = &g_12;
    union U1 **l_780 = &l_779;
    union U1 *l_782 = &g_761;
    union U1 **l_781 = &l_782;
    union U1 *l_784 = &g_12;
    union U1 **l_783 = &l_784;
    uint32_t l_803 = 0xA971248AL;
    struct S0 l_807 = {0x28B605A9L,0xB07CCE69L,0L,0xB70A5CB8L,0xE7282B68D308C50FLL};
    uint32_t *l_814[1][6];
    uint32_t **l_813 = &l_814[0][1];
    uint32_t ***l_815 = &l_813;
    int32_t *l_818[1];
    uint16_t l_819 = 65528UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_745[i] = &g_434;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_750[i][j] = 1L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_814[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_818[i] = &g_14[1][0][0];
    if ((l_728 , (!(safe_rshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((0x1A38C7DEL && g_53[3]), (p_27 > ((safe_lshift_func_int8_t_s_u((l_746 = ((p_27 | (((l_748 &= (l_747 ^= ((safe_div_func_int8_t_s_s(((safe_mul_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((!(l_749 = (0xB153BF4F1A97AF11LL == (g_434--)))) <= (~(l_750[1][0] == l_746))) | 0L), 0xBF86A526L)), 0UL)) <= l_728.f0), 0x91L)) , g_83.f2))) >= p_27) > l_746)) ^ 0x5C8DBA6420FDABD7LL)), 5)) & l_755)))) >= l_728.f0) >= l_728.f1), (*g_7))))))
    { 
        int32_t *l_756 = &g_14[3][6][4];
        int32_t **l_757 = &l_756;
        (*l_756) |= l_728.f1;
        (*l_757) = l_756;
    }
    else
    { 
        union U1 *l_760 = &g_761;
        int32_t *l_762[7];
        int32_t **l_763 = &g_391;
        uint16_t l_765 = 5UL;
        int i;
        for (i = 0; i < 7; i++)
            l_762[i] = &g_14[1][0][0];
        for (l_728.f1 = (-1); (l_728.f1 < 11); l_728.f1 = safe_add_func_int64_t_s_s(l_728.f1, 1))
        { 
            l_760 = (g_109 , &g_12);
        }
        (*l_763) = (l_762[6] = &g_53[1]);
        ++l_765;
    }
    (*l_775) |= (0x78L == ((!(safe_mul_func_int8_t_s_s((g_201 = (safe_rshift_func_uint16_t_u_u((l_748 = ((*l_773) = g_109.f1)), 15))), l_750[0][3]))) >= l_746));
    if ((((((*g_461) = (((*l_775) , (((*l_775) > ((safe_sub_func_int16_t_s_s(((*p_26) , (~(((*l_780) = l_779) == ((*l_783) = ((*l_781) = &g_305))))), (p_27 , ((safe_rshift_func_int16_t_s_u((p_27 < (*p_26)), g_50)) < p_27)))) , (-1L))) <= (*l_775))) < g_434)) >= (*p_26)) <= g_83.f2) != 0UL))
    { 
        const uint64_t l_797 = 18446744073709551615UL;
        for (l_755 = 0; (l_755 <= 1); l_755 += 1)
        { 
            int32_t *l_798 = (void*)0;
            int32_t *l_799 = &g_54[2][0][2];
            uint16_t l_800 = 0x5D0BL;
            int i;
            l_800 = (~(0UL ^ (safe_add_func_int64_t_s_s(p_27, (safe_add_func_int8_t_s_s(((*l_775) && (safe_add_func_uint64_t_u_u(((safe_unary_minus_func_int64_t_s(((safe_sub_func_int16_t_s_s(g_201, (((((*l_799) = (p_27 , ((*l_775) = (l_797 > g_53[1])))) , (*l_799)) <= g_12.f0) , 0xEC4AL))) != (-7L)))) <= g_8), g_300[0][3][1]))), l_797))))));
        }
    }
    else
    { 
        return &g_201;
    }
    (*l_775) &= ((((safe_rshift_func_uint16_t_u_s(l_803, 6)) , (((g_804 <= (safe_mul_func_uint16_t_u_u(((l_807 , (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((*g_461))) , p_27), p_27))) || (safe_sub_func_uint64_t_u_u((((*l_815) = l_813) != g_816[0][0][0]), g_53[4]))), p_27))) || p_27) ^ 0xFAL)) , l_774[0][3]) == (void*)0);
    ++l_819;
    return &g_8;
}



static int8_t * func_31(union U1  p_32, int32_t  p_33)
{ 
    const int32_t *l_37[1];
    int32_t *l_38 = &g_24;
    union U1 l_312[5][1][6] = {{{{0x30L},{0x92L},{0x5AL},{0x5AL},{0x92L},{0x30L}}},{{{0xEEL},{0x30L},{0x5AL},{0x30L},{0xEEL},{0xEEL}}},{{{0x5FL},{0x30L},{0x30L},{0x5FL},{0x92L},{0x5FL}}},{{{0x5FL},{0x92L},{0x5FL},{0x30L},{0x30L},{0x5FL}}},{{{0xEEL},{0xEEL},{0x30L},{0x5AL},{0x30L},{0xEEL}}}};
    int32_t l_349 = 0xF302B244L;
    int32_t l_350 = 1L;
    int32_t l_351 = 1L;
    int32_t l_357 = 0L;
    int32_t l_358 = 0x9DA09434L;
    int32_t l_360 = 0x5A31E5B9L;
    int32_t l_361 = 0x933A01B0L;
    int32_t l_362 = 0xDAF827EDL;
    int8_t *l_369 = (void*)0;
    int32_t l_384 = (-1L);
    int32_t l_385[6][3] = {{(-5L),(-1L),9L},{0x9EA8A1E0L,0x9EA8A1E0L,9L},{(-1L),(-5L),0x1C30C54FL},{0xE850AB19L,0x9EA8A1E0L,0xE850AB19L},{0xE850AB19L,(-1L),0x9EA8A1E0L},{(-1L),0xE850AB19L,0xE850AB19L}};
    uint16_t l_386 = 0UL;
    struct S0 **l_392[2];
    uint32_t *l_410 = &g_411;
    uint16_t *l_496 = (void*)0;
    uint16_t l_552 = 4UL;
    uint32_t l_574 = 0x6B983966L;
    int32_t l_632 = 0L;
    uint32_t l_657 = 0x127C5353L;
    union U2 *l_672[3];
    uint64_t *l_718 = &g_434;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_37[i] = &g_14[1][0][0];
    for (i = 0; i < 2; i++)
        l_392[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_672[i] = (void*)0;
    for (p_33 = 3; (p_33 >= 0); p_33 -= 1)
    { 
        uint32_t l_304[6][5] = {{18446744073709551615UL,0x20F0471EL,0UL,18446744073709551615UL,0UL},{18446744073709551615UL,18446744073709551615UL,3UL,18446744073709551615UL,18446744073709551615UL},{0UL,18446744073709551615UL,0UL,0x20F0471EL,18446744073709551615UL},{18446744073709551615UL,1UL,3UL,1UL,3UL},{0UL,0x20F0471EL,18446744073709551615UL,0x20F0471EL,0UL},{3UL,1UL,3UL,3UL,1UL}};
        int32_t l_326 = 2L;
        int32_t l_341 = (-3L);
        int32_t l_348 = 0xAF7ED305L;
        int32_t l_352 = (-5L);
        int32_t l_353 = (-4L);
        int32_t l_354 = 0L;
        int32_t l_355 = (-6L);
        int32_t l_356 = 0xB813E873L;
        int32_t l_359 = 0x24C1C683L;
        int32_t l_363 = (-9L);
        int32_t l_364 = 0x0F29F923L;
        int32_t l_365 = (-6L);
        int32_t l_372[4][5];
        int32_t *l_389 = &l_361;
        uint32_t l_414 = 7UL;
        uint8_t l_415 = 0x0DL;
        uint8_t *l_420 = &g_12.f0;
        uint8_t **l_419 = &l_420;
        uint32_t l_435 = 0x7E33C890L;
        int32_t **l_444[2][1][6];
        uint16_t * const l_462[7] = {&g_300[3][0][1],&g_80[0],&g_80[0],&g_300[3][0][1],&g_80[0],&g_80[0],&g_300[3][0][1]};
        uint16_t l_463[1][7] = {{0x8DBDL,0x8DBDL,0x8DBDL,0x8DBDL,0x8DBDL,0x8DBDL,0x8DBDL}};
        int8_t *l_471 = &g_201;
        int8_t *l_472 = &g_201;
        uint32_t **l_474[4][1][2];
        uint64_t *l_584 = &g_434;
        int16_t l_591 = 0x7186L;
        union U1 *l_605 = (void*)0;
        uint64_t l_647 = 2UL;
        union U2 *l_662 = &g_109;
        int32_t l_676[6][7] = {{(-1L),0x5427CD5FL,0L,0L,0x5427CD5FL,(-1L),0L},{0x992549ACL,6L,0x2E66F75DL,0x2E66F75DL,6L,0x992549ACL,(-7L)},{(-1L),0x5427CD5FL,0L,0L,0x5427CD5FL,(-1L),0L},{0x992549ACL,6L,0x2E66F75DL,0x2E66F75DL,6L,0x992549ACL,(-7L)},{(-1L),0x5427CD5FL,0L,0L,0x5427CD5FL,(-1L),0L},{0x992549ACL,6L,0x2E66F75DL,0x2E66F75DL,6L,0x992549ACL,(-7L)}};
        uint16_t l_711[4] = {65527UL,65527UL,65527UL,65527UL};
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_372[i][j] = 0x6751C904L;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_444[i][j][k] = &l_38;
            }
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_474[i][j][k] = &l_410;
            }
        }
        for (g_24 = 0; (g_24 <= 3); g_24 += 1)
        { 
            uint32_t l_306[7][3][4] = {{{18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,1UL},{1UL,0xCEC7D193L,18446744073709551612UL,0xCEC7D193L},{18446744073709551615UL,9UL,1UL,18446744073709551612UL}},{{0xCEC7D193L,9UL,9UL,0xCEC7D193L},{9UL,0xCEC7D193L,18446744073709551615UL,1UL},{9UL,18446744073709551615UL,9UL,1UL}},{{0xCEC7D193L,1UL,1UL,1UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,1UL},{1UL,0xCEC7D193L,18446744073709551612UL,0xCEC7D193L}},{{18446744073709551615UL,9UL,1UL,18446744073709551612UL},{0xCEC7D193L,9UL,9UL,0xCEC7D193L},{9UL,0xCEC7D193L,18446744073709551615UL,1UL}},{{9UL,18446744073709551615UL,9UL,1UL},{0xCEC7D193L,1UL,1UL,1UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,1UL}},{{1UL,0xCEC7D193L,18446744073709551612UL,0xCEC7D193L},{18446744073709551615UL,9UL,1UL,18446744073709551612UL},{0xCEC7D193L,9UL,9UL,0xCEC7D193L}},{{9UL,0xCEC7D193L,18446744073709551615UL,1UL},{9UL,18446744073709551615UL,9UL,1UL},{0xCEC7D193L,1UL,1UL,1UL}}};
            int32_t l_320 = 0x3B63C9BBL;
            int32_t l_331[5][5][3] = {{{(-6L),0x0AC77B25L,0xEF9162A7L},{0xBD019D29L,0xA29CB063L,1L},{0L,1L,1L},{0L,1L,0L},{0x1E60A541L,0x9ED0CE8BL,(-1L)}},{{0x9ED0CE8BL,1L,0x0AC77B25L},{0x9ED0CE8BL,0xBD019D29L,0L},{0x1E60A541L,0x1E60A541L,(-6L)},{0L,0xFAE959DBL,0L},{0L,0x32D582BEL,0x404EA0C6L}},{{0xBD019D29L,0x404EA0C6L,0L},{0x1E60A541L,0x0AC77B25L,0L},{0x9EFDA9F7L,0xE5EC5E38L,0xEF9162A7L},{0xEF9162A7L,(-7L),0x1E60A541L},{0xE30AFCA1L,0xEF9162A7L,1L}},{{0x9ED0CE8BL,(-1L),1L},{0xBD019D29L,(-1L),0xBDB39038L},{0x1E32876BL,0xEF9162A7L,0x1E32876BL},{0xB167C544L,(-7L),(-1L)},{(-6L),0xE5EC5E38L,0L}},{{0x57B021DCL,0x0AC77B25L,0x9ED0CE8BL},{(-1L),0L,0L},{0x57B021DCL,0L,0xE30AFCA1L},{(-6L),0xBD019D29L,0xE5EC5E38L},{0xB167C544L,1L,0x32D582BEL}}};
            uint32_t l_366 = 0x90DA0429L;
            int64_t l_381 = (-1L);
            int i, j, k;
            if ((((func_2(func_34(l_37[0], l_38), l_304[3][3], g_305, &g_8) || g_14[3][2][5]) ^ l_304[2][2]) != l_306[5][0][3]))
            { 
                uint8_t l_307 = 0x7CL;
                int32_t l_318 = 0L;
                uint32_t *l_319[1][3];
                int32_t *l_321 = (void*)0;
                int32_t *l_322 = &g_82;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_319[i][j] = (void*)0;
                }
                if (l_307)
                    break;
                (*l_322) = (g_80[2] > (((l_320 = (safe_lshift_func_int8_t_s_s(l_306[5][0][3], ((((((g_300[3][0][1] < (safe_rshift_func_uint16_t_u_s((l_312[2][0][4] , ((!(l_304[3][3] && ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(p_33, 3)) < (((l_318 = g_249.f2) > l_306[5][0][3]) > 0x46L)), 6)) & 9UL))) && l_307)), p_33))) ^ p_32.f0) != g_16) < p_32.f0) | (-4L)) > g_24)))) & g_16) , l_304[3][3]));
            }
            else
            { 
                int32_t *l_323 = &g_53[1];
                int32_t *l_324 = &g_53[4];
                int32_t *l_325 = &g_54[5][0][1];
                int32_t *l_327 = &g_53[1];
                int32_t *l_328 = (void*)0;
                int32_t *l_329 = &g_14[1][0][0];
                int32_t *l_330 = (void*)0;
                int32_t *l_332 = &g_53[1];
                int32_t *l_333 = (void*)0;
                int32_t *l_334 = &g_53[3];
                int32_t *l_335 = (void*)0;
                int32_t *l_336 = &g_14[1][0][0];
                int32_t *l_337 = &l_331[1][4][0];
                int32_t *l_338 = (void*)0;
                int32_t *l_339 = &g_53[3];
                int32_t *l_340 = &g_14[3][0][4];
                int32_t *l_342 = &g_53[4];
                int32_t *l_343 = &g_53[0];
                int32_t *l_344 = &g_82;
                int32_t *l_345 = (void*)0;
                int32_t *l_346 = &g_54[2][0][2];
                int32_t *l_347[1][6][1] = {{{&g_53[0]},{&l_326},{&g_53[0]},{&l_326},{&g_53[0]},{&l_326}}};
                int32_t l_375 = 0x9C3CC93BL;
                int32_t **l_390[3][3][7] = {{{(void*)0,&l_336,&l_336,(void*)0,&l_338,&l_332,&l_338},{&l_338,&l_332,&l_338,(void*)0,&l_336,&l_336,(void*)0},{&l_334,&l_346,&l_334,&l_332,&l_336,&l_389,&l_338}},{{&l_346,&l_337,&l_334,&l_338,(void*)0,&l_338,&l_334},{&l_336,&l_336,&l_338,&l_330,&l_347[0][0][0],&l_389,&l_346},{&l_330,&l_336,&l_336,&l_389,&l_389,&l_336,&l_336}},{{&l_336,&l_337,&l_336,&l_334,&l_347[0][0][0],&l_332,&l_330},{&l_336,&l_346,(void*)0,&l_336,(void*)0,&l_346,&l_336},{&l_330,&l_332,&l_347[0][0][0],&l_334,&l_336,&l_337,&l_336}}};
                struct S0 **l_394[6][5] = {{&g_248,&g_248,&g_248,&g_248,&g_248},{(void*)0,&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248,(void*)0},{&g_248,(void*)0,(void*)0,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248,&g_248},{&g_248,(void*)0,&g_248,&g_248,&g_248}};
                struct S0 ***l_393 = &l_394[5][4];
                int i, j, k;
                l_366--;
                if (l_365)
                { 
                    return l_369;
                }
                else
                { 
                    uint16_t l_370 = 0x7D1DL;
                    int32_t l_371 = 0x9A5ECCFEL;
                    int32_t l_373 = 0x537B93FCL;
                    int32_t l_374 = 0L;
                    int32_t l_376 = (-1L);
                    int32_t l_377 = 0xAAF7C673L;
                    int32_t l_378 = 0x1F4E67AEL;
                    int32_t l_379 = 1L;
                    int32_t l_380 = (-4L);
                    int32_t l_382 = 0xB0D8CFC2L;
                    int32_t l_383[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_383[i] = (-9L);
                    l_371 &= l_370;
                    (*l_342) = 0x2A066CB6L;
                    --l_386;
                    if (g_24)
                        continue;
                    (*l_343) |= ((&g_109 == (void*)0) >= (g_265[0][0] & g_265[2][0]));
                }
                g_391 = (l_38 = l_389);
                (*g_391) &= (l_392[1] == ((g_14[2][4][2] == 1UL) , ((*l_393) = &g_248)));
            }
            for (g_83.f2 = 3; (g_83.f2 >= 0); g_83.f2 -= 1)
            { 
                uint32_t *l_409[2][7][2] = {{{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366}},{{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366},{&l_366,&l_366}}};
                uint32_t **l_408[3][1];
                int32_t l_416 = 3L;
                int16_t *l_427 = &g_164;
                uint64_t *l_428 = &l_312[2][0][4].f4;
                uint64_t *l_429 = &g_12.f4;
                uint64_t *l_430 = &g_12.f4;
                uint64_t *l_431 = &l_312[2][0][4].f4;
                uint64_t *l_432 = &l_312[2][0][4].f4;
                uint64_t *l_433[7][5] = {{&g_434,(void*)0,&g_434,(void*)0,&g_434},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_434,(void*)0,&g_434,(void*)0,&g_434},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_434,(void*)0,&g_434,(void*)0,&g_434},{&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4,&g_12.f4},{&g_434,(void*)0,&g_434,(void*)0,&g_434}};
                uint8_t *l_441 = &g_265[3][0];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_408[i][j] = &l_409[0][0][0];
                }
                if ((g_14[g_83.f2][(g_83.f2 + 1)][(p_33 + 1)] , (((safe_mul_func_uint16_t_u_u((!((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((((l_369 == (void*)0) > ((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((l_410 = &l_366) == ((safe_mul_func_uint16_t_u_u((*l_389), l_414)) , l_38)), g_14[g_83.f2][(g_83.f2 + 1)][(p_33 + 1)])), 4)) , l_415) <= p_33) <= 0xA8F72BD28948430ALL)) && p_33) | 0xEDL), 6)), 4)) == l_331[1][4][0]), l_416)) || g_249.f3) > (*g_7)) == l_320)), 1UL)) != (*l_389)) >= p_32.f0)))
                { 
                    int i, j, k;
                    g_14[g_24][(g_83.f2 + 2)][g_24] ^= g_80[4];
                    (*l_389) = p_33;
                    g_14[g_24][(g_83.f2 + 2)][g_24] = g_14[1][0][0];
                }
                else
                { 
                    uint8_t ***l_421 = &l_419;
                    (*l_389) = (safe_rshift_func_int8_t_s_s(0x8BL, 0));
                    (*l_389) = (0L < g_53[3]);
                    (*l_421) = l_419;
                }
                l_331[4][1][1] ^= (((*l_389) = (~(g_82 & (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s((((*l_427) ^= g_14[1][0][0]) < ((((--l_435) <= (l_306[5][2][3] < (safe_mul_func_int8_t_s_s((~((void*)0 != l_441)), ((safe_rshift_func_int8_t_s_s(((void*)0 == l_430), 0)) || g_83.f0))))) != 0x5EA3L) & l_306[5][0][3])), g_53[1])) || 0L), 5))))) > g_83.f2);
            }
        }
        g_391 = &l_355;
        if ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_33, ((*l_38) ^ (p_33 != (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s((((*g_391) , ((((((+((g_305 , &l_420) != g_460[3][0])) , &g_300[3][0][1]) != l_462[6]) ^ (*g_391)) || g_83.f4) != p_33)) , p_33), 0x4AL)) > l_463[0][1]) ^ 0x651704482571FFC8LL), 11)), p_32.f0)), p_33)))))) || (*l_389)), p_32.f0)))
        { 
            int16_t *l_466 = &g_164;
            int64_t *l_467[1][4] = {{&g_305.f1.f2,&g_305.f1.f2,&g_305.f1.f2,&g_305.f1.f2}};
            int i, j;
            if ((((safe_add_func_int64_t_s_s((p_32.f1.f4 = (0xB321L < ((*l_466) = ((void*)0 != l_392[1])))), ((+(p_33 >= (safe_add_func_int64_t_s_s(((p_33 ^ (p_33 , (-1L))) >= 0UL), 0L)))) , 0x8401FAB952A29BBFLL))) || (*l_38)) , p_32.f0))
            { 
                return l_471;
            }
            else
            { 
                return l_472;
            }
        }
        else
        { 
            uint32_t **l_473 = &l_410;
            uint16_t *l_494[3][6][4] = {{{&g_300[3][0][1],&l_386,&g_300[3][0][1],&g_80[4]},{&g_300[3][0][1],&g_80[4],&g_80[4],&g_300[3][0][1]},{&l_463[0][6],&g_80[4],(void*)0,&g_80[4]},{&g_80[4],&l_386,(void*)0,(void*)0},{&l_463[0][6],&l_463[0][6],&g_80[4],(void*)0},{&g_300[3][0][1],&l_386,&g_300[3][0][1],&g_80[4]}},{{&g_300[3][0][1],&g_80[4],&g_80[4],&g_300[3][0][1]},{&l_463[0][6],&g_80[4],(void*)0,&g_80[4]},{&g_80[4],&l_386,(void*)0,(void*)0},{&l_463[0][6],&l_463[0][6],&g_80[4],(void*)0},{&g_300[3][0][1],&l_386,&g_300[3][0][1],&g_80[4]},{&g_300[3][0][1],&g_80[4],&g_80[4],&g_300[3][0][1]}},{{&l_463[0][6],&g_80[4],(void*)0,&g_80[4]},{&g_80[4],&l_386,(void*)0,(void*)0},{&l_463[0][6],&l_463[0][6],&g_80[4],(void*)0},{&g_300[3][0][1],&l_386,&g_300[3][0][1],&g_80[4]},{&g_300[3][0][1],&g_80[4],&g_80[4],&g_300[3][0][1]},{&l_463[0][6],&g_80[4],(void*)0,&g_80[4]}}};
            uint16_t *l_497 = &l_386;
            int32_t l_504 = (-2L);
            union U2 l_521 = {-10L};
            struct S0 l_533 = {4294967289UL,0x725AF0BAL,0xB5620F98BB2A4C44LL,18446744073709551615UL,0x6DDA1FE42344F435LL};
            int32_t l_534 = 0L;
            uint8_t ***l_571[2][5] = {{&g_460[3][0],&g_460[3][0],&g_460[3][0],&g_460[3][0],&g_460[3][0]},{(void*)0,&g_460[3][0],(void*)0,&g_460[3][0],(void*)0}};
            int32_t l_572 = 0L;
            union U1 *l_606 = &g_607;
            int32_t *l_609 = &g_82;
            int8_t *l_671 = &g_8;
            int32_t l_678 = (-3L);
            const uint32_t l_709 = 0x74F36D4DL;
            int i, j, k;
            (*g_391) = (l_473 == (func_9((*l_38)) , l_474[1][0][0]));
            for (l_361 = 0; (l_361 <= 3); l_361 += 1)
            { 
                uint16_t l_479 = 4UL;
                struct S0 **l_484 = &g_248;
                struct S0 ***l_485 = (void*)0;
                struct S0 ***l_486 = (void*)0;
                struct S0 ***l_487 = (void*)0;
                struct S0 ***l_488 = (void*)0;
                struct S0 ***l_489[7][6][1] = {{{(void*)0},{(void*)0},{&l_484},{&l_392[1]},{&l_392[1]},{&l_392[1]}},{{&l_392[1]},{&l_484},{(void*)0},{(void*)0},{&l_392[1]},{(void*)0}},{{(void*)0},{&l_484},{&l_392[1]},{&l_392[1]},{&l_392[1]},{&l_392[1]}},{{&l_484},{(void*)0},{(void*)0},{&l_392[1]},{(void*)0},{(void*)0}},{{&l_484},{&l_392[1]},{&l_392[1]},{&l_392[1]},{&l_392[1]},{&l_484}},{{(void*)0},{(void*)0},{&l_392[1]},{(void*)0},{(void*)0},{&l_484}},{{&l_392[1]},{&l_392[1]},{&l_392[1]},{&l_392[1]},{&l_484},{(void*)0}}};
                int32_t l_522[5][2] = {{0x31E9EA60L,0x31E9EA60L},{0x31E9EA60L,0x31E9EA60L},{0x31E9EA60L,0x31E9EA60L},{0x31E9EA60L,0x31E9EA60L},{0x31E9EA60L,0x31E9EA60L}};
                int64_t *l_523 = (void*)0;
                int64_t *l_524 = &g_83.f4;
                uint8_t *l_528 = &g_265[3][0];
                int16_t *l_535[1];
                int64_t *l_536 = (void*)0;
                int8_t l_604 = 1L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_535[i] = &l_521.f1;
            }
            for (g_50 = 3; (g_50 >= 0); g_50 -= 1)
            { 
                uint32_t l_633 = 0xD85F01CFL;
                int32_t l_674 = 0xFD9420DFL;
                int32_t l_679 = 0x79A1E0CBL;
                int32_t l_680[7][4][5] = {{{0x7A1FE74BL,(-1L),0xF7309C80L,(-3L),0x24B3AC58L},{0L,(-1L),0xE29610B8L,0x5CEF419EL,5L},{(-1L),5L,0x338E5D28L,0x7A1FE74BL,0x5D1E200CL},{1L,0L,0L,1L,(-1L)}},{{(-1L),(-5L),0x252B05F5L,0L,9L},{0x9C6CCA4EL,0x61ED7219L,0L,(-4L),0x5752217CL},{0L,(-1L),0L,0L,0xF7309C80L},{0x7A1FE74BL,(-1L),(-9L),1L,(-5L)}},{{0x40F91E03L,0L,0xDA3E7257L,(-4L),1L},{0xDA3E7257L,0xC198A9E2L,0x2E34BE1CL,(-4L),(-3L)},{0L,(-5L),7L,0L,0x5D1E200CL},{0L,0x252B05F5L,0xB84BA530L,0x5752217CL,(-4L)}},{{0xDA3E7257L,7L,0xF7309C80L,(-1L),(-1L)},{0x40F91E03L,0xDA3E7257L,0x40F91E03L,0xB84BA530L,0x2E34BE1CL},{(-4L),0L,(-1L),(-8L),0x0CAADE1DL},{9L,1L,0xDA3E7257L,0x252B05F5L,0xC198A9E2L}},{{1L,0x5D1E200CL,(-1L),0x0CAADE1DL,(-3L)},{0x61ED7219L,9L,0x40F91E03L,0L,0xDA3E7257L},{1L,0x252B05F5L,0xF7309C80L,(-1L),(-4L)},{0xCBB52CE0L,0x7A1FE74BL,0xB84BA530L,(-1L),8L}},{{0x7A1FE74BL,1L,7L,(-4L),8L},{(-4L),0L,0x2E34BE1CL,0L,(-4L)},{(-5L),0L,0xDA3E7257L,(-4L),0xDA3E7257L},{(-1L),(-1L),0xBDB82640L,0L,(-3L)}},{{(-8L),0x40F91E03L,(-5L),0L,0xC198A9E2L},{0L,0x252B05F5L,0x338E5D28L,0xF7309C80L,0x0CAADE1DL},{(-1L),0x40F91E03L,(-1L),(-1L),0x2E34BE1CL},{7L,(-1L),0x5CEF419EL,(-9L),(-1L)}}};
                struct S0 l_707 = {4294967295UL,0x574D2395L,0x28928CC0FC5A7227LL,0xB659AD61L,0x18BD5004E2CE2F25LL};
                int i, j, k;
                for (l_533.f4 = 3; (l_533.f4 >= 0); l_533.f4 -= 1)
                { 
                    int i, j, k;
                    l_38 = &g_14[l_533.f4][p_33][(g_50 + 2)];
                    (*l_389) &= (g_14[p_33][(p_33 + 3)][(g_50 + 1)] = (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((void*)0 == &l_591), (g_14[g_50][g_50][(l_533.f4 + 2)] , ((g_391 != (void*)0) || ((((*l_584) = g_14[g_50][(p_33 + 1)][(g_50 + 2)]) , ((*l_609) = ((safe_add_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(((((safe_rshift_func_int16_t_s_u((7L == 0xF250B9BE7E88E1DALL), 2)) < 0x510AD20CL) , 0x612AL) == g_300[l_533.f4][l_533.f4][(p_33 + 1)]), g_300[p_33][p_33][(p_33 + 1)])), 0L)) & 8UL), 0xD375L)) < g_300[g_50][p_33][(l_533.f4 + 1)]))) & g_300[l_533.f4][g_50][(p_33 + 1)]))))), 6)));
                }
            }
            for (g_50 = 1; (g_50 >= 0); g_50 -= 1)
            { 
                uint32_t l_716 = 4294967295UL;
                (*l_609) = 1L;
                for (g_83.f1 = 0; (g_83.f1 <= 1); g_83.f1 += 1)
                { 
                    uint64_t *l_719 = &g_305.f4;
                    uint64_t **l_720 = &l_584;
                    int i, j, k;
                    (*g_391) |= (((g_460[(g_50 + 2)][(p_33 + 2)] == g_460[p_33][(p_33 + 1)]) | g_54[(p_33 + 1)][g_83.f1][(g_83.f1 + 1)]) == l_711[2]);
                    (*l_609) = (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x3AL, l_716)), 15));
                    (*l_389) = (+(((*l_720) = (l_719 = l_718)) != &g_434));
                }
            }
        }
        for (g_102 = 8; (g_102 == 33); g_102++)
        { 
            return &g_8;
        }
    }
    return &g_201;
}



static int8_t * func_34(const int32_t * p_35, int32_t * p_36)
{ 
    uint64_t l_298[6] = {0x5F4BA04C1C445802LL,0x5F4BA04C1C445802LL,0x9BEE199B786E6614LL,0x5F4BA04C1C445802LL,0x5F4BA04C1C445802LL,0x9BEE199B786E6614LL};
    int32_t l_302 = 9L;
    int8_t *l_303[1][6][4] = {{{&g_8,&g_8,(void*)0,(void*)0},{&g_8,&g_8,(void*)0,(void*)0},{&g_8,&g_8,(void*)0,(void*)0},{&g_8,&g_8,(void*)0,(void*)0},{&g_8,&g_8,(void*)0,(void*)0},{&g_8,&g_8,(void*)0,(void*)0}}};
    int i, j, k;
    for (g_39 = 0; (g_39 >= (-17)); g_39 = safe_sub_func_int8_t_s_s(g_39, 5))
    { 
        int32_t l_44 = 0xDF5A2915L;
        int8_t *l_48 = (void*)0;
        int64_t *l_49 = &g_50;
        uint16_t *l_299 = &g_300[3][0][1];
        int64_t *l_301 = &g_249.f4;
        if (g_14[1][0][0])
            break;
        l_44 = (g_12.f0 < (((*g_7) , g_12.f0) <= 0xDFF4L));
        l_302 = ((func_45(l_48, l_49) , p_36) != ((g_249.f2 |= ((*l_301) = ((l_44 ^ l_298[4]) < ((*l_299) = ((void*)0 != &g_8))))) , (void*)0));
    }
    return l_303[0][5][0];
}



static struct S0  func_45(int8_t * p_46, int64_t * p_47)
{ 
    uint32_t l_61 = 1UL;
    int32_t l_71 = 0x43D8BAA4L;
    int32_t l_74 = 6L;
    union U2 l_75 = {-6L};
    struct S0 l_103 = {0x75BA722EL,0x29FA7991L,0xB1FF0AA6A4DFBEF9LL,1UL,2L};
    int32_t l_149 = 0xC043B8F3L;
    int32_t l_150 = 6L;
    uint32_t l_151 = 0xF4D477D6L;
    uint16_t *l_163 = &g_80[0];
    int32_t l_243 = 0xC12D3B93L;
    int8_t l_283 = (-3L);
    uint8_t *l_289 = (void*)0;
    int32_t *l_297 = &g_14[1][0][0];
lbl_143:
    for (g_50 = 2; (g_50 != 19); ++g_50)
    { 
        int16_t l_66 = 1L;
        const union U1 l_78 = {0xDDL};
        int32_t *l_84 = &g_14[1][0][0];
        for (g_53[1] = 0; (g_53[1] <= 3); g_53[1] += 1)
        { 
            int32_t *l_72 = &g_14[3][6][4];
            int16_t *l_99 = (void*)0;
            uint32_t *l_110 = (void*)0;
            uint32_t *l_111 = &l_61;
            uint16_t *l_116[1][7][4] = {{{&g_80[4],&g_80[0],&g_80[4],&g_80[0]},{(void*)0,&g_80[4],&g_80[0],&g_80[0]},{&g_80[0],&g_80[0],&g_80[4],&g_80[4]},{&g_80[4],(void*)0,&g_80[4],(void*)0},{&g_80[0],&g_80[4],&g_80[0],&g_80[4]},{(void*)0,&g_80[4],&g_80[4],(void*)0},{&g_80[4],(void*)0,&g_80[0],&g_80[4]}}};
            int8_t *l_117 = &g_8;
            int32_t *l_118 = &g_54[0][1][4];
            int i, j, k;
            for (g_54[2][0][2] = 0; (g_54[2][0][2] <= 3); g_54[2][0][2] += 1)
            { 
                int i, j, k;
                if (((((g_14[g_54[2][0][2]][(g_53[1] + 2)][(g_54[2][0][2] + 2)] , ((0x9BBDC21833D8312ELL != (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((+((-8L) && ((g_17 != (safe_unary_minus_func_uint8_t_u((l_61 | (g_12.f0 != (safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(1L, 0x16E9852BL)), g_39))))))) & (*p_47)))), 1UL)), 65530UL))) <= l_66)) || l_61) , &g_50) == (void*)0))
                { 
                    int16_t *l_73[5][4][3] = {{{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66},{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66}},{{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66},{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66}},{{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66},{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66}},{{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66},{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66}},{{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66},{(void*)0,(void*)0,(void*)0},{&l_66,&l_66,&l_66}}};
                    uint16_t *l_79 = &g_80[4];
                    int32_t *l_81 = &g_82;
                    int i, j, k;
                    (*l_81) |= (((l_74 &= (safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((l_71 = 0x72L), 1L)) >= g_14[g_54[2][0][2]][(g_53[1] + 2)][(g_54[2][0][2] + 2)]), ((void*)0 == l_72)))) ^ ((*l_79) = (l_75 , (safe_rshift_func_int16_t_s_s((l_78 , g_54[2][0][2]), 2))))) < (*l_72));
                }
                else
                { 
                    const union U1 l_85 = {0x7FL};
                    int16_t l_100 = (-4L);
                    uint8_t *l_101 = &g_102;
                    (*l_72) ^= (-7L);
                    l_84 = (g_83 , &g_14[1][0][0]);
                    (*l_72) = 1L;
                    (*l_72) = ((l_85 , ((safe_mul_func_int16_t_s_s(0x85D1L, (l_74 &= (g_83.f3 >= (g_12.f0 >= g_53[1]))))) && (safe_sub_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u(((*l_101) = (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((((l_85.f0 ^ (((safe_sub_func_int64_t_s_s((g_12.f1.f4 = ((g_98 != l_99) == l_85.f0)), g_83.f0)) == (*l_72)) > l_100)) , g_16) ^ (*g_7)), (*g_7))) != g_14[g_54[2][0][2]][(g_53[1] + 2)][(g_54[2][0][2] + 2)]), l_74))), g_83.f2)) < 0x0607L) != g_83.f3) , l_100), g_53[1])))) >= g_54[5][0][1]);
                }
                return l_103;
            }
            g_82 |= (*l_72);
            (*l_118) ^= ((((((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_71, (safe_unary_minus_func_int16_t_s((g_109 , (((1UL < ((&g_50 != &g_50) != (++(*l_111)))) || 7L) ^ ((((safe_mul_func_int16_t_s_s((((g_80[4] &= (*l_84)) > 0x8A79L) > g_8), 0x635DL)) >= l_103.f1) , p_46) == l_117))))))), 0xA549L)) , 0x03L) || (*l_84)) , 0x7AFDL) ^ (*l_72)) || g_83.f0);
        }
        l_71 = (safe_div_func_uint16_t_u_u(g_53[1], (((safe_add_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s((*l_84), 0L)) , l_84) != (g_83.f3 , &l_71)), ((void*)0 != &l_71))) <= (*l_84)) | (*l_84))));
        (*l_84) = 0xF1CBD15FL;
        for (l_103.f3 = 0; (l_103.f3 <= 4); l_103.f3 += 1)
        { 
            uint32_t l_137 = 18446744073709551615UL;
            int32_t l_138 = 0L;
            for (g_109.f0 = 4; (g_109.f0 >= 0); g_109.f0 -= 1)
            { 
                uint32_t *l_133 = &l_61;
                uint8_t *l_134 = &g_102;
                int32_t *l_139 = (void*)0;
                int32_t *l_140 = &g_82;
                int i;
                (*l_140) = ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(0x06E003A779F58EA2LL, (safe_rshift_func_int8_t_s_s((((((*l_133) = 6UL) , p_46) != &g_102) && (l_137 = (((*l_134) |= 2UL) , ((((*l_84) = g_80[l_103.f3]) != (safe_mul_func_uint16_t_u_u(g_54[2][0][2], g_54[3][1][1]))) != 0x9261L)))), 5)))), l_138)), g_83.f0)) < (-1L));
                l_138 = ((*l_84) = l_75.f1);
            }
        }
    }
    for (l_103.f3 = 0; (l_103.f3 > 3); l_103.f3 = safe_add_func_uint8_t_u_u(l_103.f3, 8))
    { 
        int32_t *l_144 = &g_14[3][2][0];
        int32_t *l_145 = &g_53[1];
        int32_t *l_146 = (void*)0;
        int32_t *l_147 = &g_53[1];
        int32_t *l_148[7][5][1] = {{{&g_53[1]},{&g_16},{&g_53[1]},{&g_54[2][0][2]},{&g_39}},{{&g_16},{(void*)0},{&g_17},{&g_14[1][0][0]},{&g_17}},{{(void*)0},{&g_16},{&g_39},{&g_54[2][0][2]},{&g_53[1]}},{{&g_16},{&g_53[1]},{&g_54[2][0][2]},{&g_39},{&g_16}},{{(void*)0},{&g_17},{&g_14[1][0][0]},{&g_17},{(void*)0}},{{&g_16},{&g_39},{&g_54[2][0][2]},{&g_53[1]},{&g_16}},{{&g_53[1]},{&g_54[2][0][2]},{&g_39},{&g_16},{(void*)0}}};
        union U2 l_158 = {0x19B35F8EL};
        struct S0 l_185 = {0x56ED219EL,0xC19E0181L,-8L,18446744073709551613UL,1L};
        uint32_t l_216[7][5][7] = {{{0x3EE34DF5L,1UL,0xB368D36DL,4294967295UL,0x4D8FE965L,4294967295UL,0x7202116EL},{0x2DBC6560L,0x9793804DL,0xA53A13BAL,4294967294UL,0UL,0xFDDA6023L,0xFDDA6023L},{0xDCF4C4EFL,0xB368D36DL,0UL,0xB368D36DL,0xDCF4C4EFL,0xC0DFE4C1L,1UL},{1UL,3UL,0UL,0xA252AE98L,0x8A21EC6CL,0x092810F8L,1UL},{0x34976463L,0UL,4294967290UL,0UL,0x0497F3A2L,0x3D7C05EBL,0xCD8EF886L}},{{1UL,0xA252AE98L,0x1EBB8F75L,0xFDDA6023L,0UL,3UL,1UL},{0xDCF4C4EFL,0x80A167A7L,4294967289UL,4294967294UL,0UL,4UL,3UL},{0x2DBC6560L,0xAC00EF30L,1UL,0x2343345AL,0xA252AE98L,0xD6678A5AL,4294967286UL},{0x3EE34DF5L,0xE1195C0EL,0UL,0UL,0x43EA2915L,4294967290UL,4294967294UL},{0xD6678A5AL,0UL,1UL,0x78D31A1BL,1UL,0x78D31A1BL,1UL}},{{0UL,0UL,8UL,0xED3431C9L,4UL,1UL,0UL},{0UL,0UL,4294967289UL,0x2DBC6560L,1UL,4294967295UL,4294967289UL},{4UL,0xDCF4C4EFL,0x5ADBA935L,0x24D1BB4DL,4UL,0x5D801473L,0UL},{1UL,0xC717972EL,0x78D31A1BL,0xF038DEA1L,1UL,0xA252AE98L,4294967293UL},{2UL,0xED3431C9L,0x80A167A7L,4294967290UL,0x43EA2915L,3UL,0UL}},{{4294967295UL,0xFDDA6023L,0xD819F3F1L,0xABC08B88L,0xA252AE98L,0x2F48657FL,1UL},{0x43EA2915L,0x4F0EBA9AL,4294967295UL,0x0497F3A2L,0UL,0UL,0xAC65B612L},{0x8B874153L,0UL,4294967289UL,4294967289UL,0UL,0x8B874153L,0x82DF5F39L},{0x465C1140L,4294967295UL,0x4F0EBA9AL,0x24D1BB4DL,4294967295UL,4UL,0xF4E1E5C5L},{0x2F48657FL,0xA252AE98L,0xABC08B88L,0xD819F3F1L,0xFDDA6023L,4294967295UL,0x7B942CA0L}},{{0xC0DFE4C1L,0xADE47298L,4294967295UL,1UL,4294967290UL,4294967290UL,0x0136C29EL},{0xDCF8AAB9L,0UL,0UL,4294967293UL,0x82DF5F39L,0xC717972EL,1UL},{4294967294UL,0UL,4UL,3UL,0xC0DFE4C1L,8UL,4294967290UL},{1UL,0xDCF8AAB9L,4294967289UL,0xF038DEA1L,4294967290UL,1UL,4294967286UL},{0UL,0x4F0EBA9AL,3UL,4294967295UL,0xE1195C0EL,0xE1195C0EL,4294967295UL}},{{1UL,1UL,1UL,1UL,0x2F48657FL,0xF038DEA1L,0x6665DE6AL},{0x4D8FE965L,4294967290UL,0x465C1140L,0xB368D36DL,1UL,0x5D801473L,4UL},{0UL,4294967293UL,4294967293UL,0x8A21EC6CL,4294967286UL,0xF038DEA1L,0x1EBB8F75L},{4UL,3UL,4294967295UL,0xF4E1E5C5L,0x465C1140L,0xE1195C0EL,0x9B351D39L},{1UL,0xABC08B88L,4294967290UL,0x2DBC6560L,0UL,1UL,0UL}},{{4294967295UL,0UL,0x3D7C05EBL,0xE1195C0EL,0xAC65B612L,8UL,0UL},{0xFDDA6023L,0xF4D6A387L,0x1EBB8F75L,0xABC08B88L,0x6665DE6AL,0xC717972EL,0xA252AE98L},{1UL,4294967290UL,4UL,0xDCF4C4EFL,4UL,4294967290UL,1UL},{0xF4D6A387L,1UL,1UL,0xFDDA6023L,0xF038DEA1L,4294967295UL,0x2DBC6560L},{0UL,0xCD8EF886L,1UL,0xADE47298L,4294967295UL,4UL,2UL}}};
        uint16_t *l_278[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        if (g_102)
            goto lbl_143;
        --l_151;
        (*l_147) = ((safe_lshift_func_int16_t_s_s(((((((l_75 , (safe_add_func_int64_t_s_s(((l_158 , ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((l_163 != &g_80[4]), (*l_145))) >= g_109.f0), ((func_9(g_164) , l_103.f1) && l_151))) == (*l_145))) && (-1L)), l_74))) | l_150) ^ g_54[1][0][0]) && 2L) == 0x54L) != g_80[4]), (*l_147))) >= (*l_147));
        for (l_149 = (-25); (l_149 >= 22); ++l_149)
        { 
            uint32_t l_175 = 4294967289UL;
            uint8_t *l_195[3][3][6] = {{{(void*)0,&g_102,&g_102,&g_102,&g_102,(void*)0},{&g_12.f0,(void*)0,&g_102,(void*)0,&g_12.f0,&g_12.f0},{&g_12.f0,(void*)0,(void*)0,&g_12.f0,&g_102,&g_12.f0}},{{&g_12.f0,&g_102,&g_12.f0,(void*)0,(void*)0,&g_12.f0},{&g_12.f0,&g_12.f0,(void*)0,&g_102,(void*)0,&g_12.f0},{(void*)0,&g_102,&g_102,&g_102,&g_102,(void*)0}},{{&g_12.f0,(void*)0,&g_102,(void*)0,&g_12.f0,&g_12.f0},{&g_12.f0,(void*)0,(void*)0,&g_12.f0,&g_102,&g_12.f0},{&g_12.f0,&g_102,&g_12.f0,(void*)0,(void*)0,&g_12.f0}}};
            uint16_t l_204 = 0x6D5DL;
            int32_t l_215 = 0L;
            union U1 l_274 = {0UL};
            int16_t *l_279 = &g_164;
            struct S0 **l_282 = &g_248;
            union U2 *l_284 = (void*)0;
            union U2 **l_285 = &l_284;
            int i, j, k;
            for (l_158.f1 = (-10); (l_158.f1 <= 16); l_158.f1 = safe_add_func_uint8_t_u_u(l_158.f1, 4))
            { 
                uint8_t *l_194 = &g_102;
                int32_t l_197 = 8L;
                const int8_t *l_224[6][3] = {{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_201,&g_8},{&g_8,&g_201,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}};
                int32_t l_244 = 0xB79881ECL;
                int i, j;
                if (g_109.f0)
                { 
                    int8_t *l_198 = (void*)0;
                    int8_t *l_199 = (void*)0;
                    int8_t *l_200 = &g_201;
                    int32_t *l_202 = &g_109.f0;
                    int32_t l_203[6] = {0x2605A821L,0x2605A821L,0x2605A821L,0x2605A821L,0x2605A821L,0x2605A821L};
                    int i;
                    (*l_144) = ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(l_175, g_53[2])) && (((*l_202) = (safe_sub_func_int8_t_s_s((((((*l_200) = (safe_mul_func_uint16_t_u_u((+(safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((l_185 , ((*l_194) &= ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((l_194 == (l_103.f4 , l_195[2][0][0])), (~l_197))) ^ g_109.f1), l_197)) == l_197), g_80[4])) & 18446744073709551615UL), (-1L))) , g_80[4]))), g_109.f1)), l_74))), 0x4CDCL))) , 0x0DCBL) || 0xA515L) , (-4L)), 0x9FL))) , 9UL)), 6)), 0xA69FL)) | g_16);
                    if (l_151)
                        break;
                    l_204--;
                    (*l_144) &= ((p_46 == &g_8) >= (g_102 ^= (safe_mod_func_uint32_t_u_u(((((safe_sub_func_int8_t_s_s(((l_204 , (~0x38ED05F3L)) , (safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s((l_197 , 0x55FA1EA5L), (0x29273612L == l_103.f1)))))), g_109.f1)) ^ g_80[0]) < (*l_147)) || l_204), l_203[5]))));
                    l_216[3][4][5]++;
                }
                else
                { 
                    if ((*l_145))
                        break;
                    l_71 |= ((((1UL <= (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(g_109.f1, ((!((void*)0 != l_224[5][0])) & g_14[0][6][3]))), l_74))) <= (safe_mod_func_int32_t_s_s(g_53[1], 0x671C78C1L))) < l_215) <= 0x43L);
                    if (l_185.f0)
                        goto lbl_143;
                    l_244 &= ((*l_144) = (~(((&g_102 == (void*)0) != 0x2A1E79B9721220F7LL) , ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((--(*l_194)) ^ ((*g_7) <= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((*g_7) >= (~g_16)) > (safe_div_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(((*l_147) ^= g_12.f0), g_24)) > l_197) || (*p_47)), l_243))), 13)), 11)))), l_204)), 0x43D9L)) ^ 0xB098L))));
                }
                for (l_151 = 0; (l_151 < 39); l_151 = safe_add_func_int8_t_s_s(l_151, 5))
                { 
                    struct S0 **l_247 = (void*)0;
                    int32_t l_250[6] = {0x922DFDF0L,0x922DFDF0L,0x922DFDF0L,0x922DFDF0L,0x922DFDF0L,0x922DFDF0L};
                    int32_t l_264[2][4] = {{0x288D38B6L,0x288D38B6L,0x288D38B6L,0x288D38B6L},{0x288D38B6L,0x288D38B6L,0x288D38B6L,0x288D38B6L}};
                    int i, j;
                    g_248 = &g_83;
                    l_197 = (l_250[2] >= (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((((((safe_mod_func_uint8_t_u_u((g_257 & (*g_7)), ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((~((((0UL || ((*l_163) = (g_8 == (((~g_80[1]) && ((*p_47) = g_39)) != g_249.f1)))) >= g_83.f3) , l_75) , 0L)), 7)), g_201)) , 0x62L))) == l_197) != l_264[0][0]) != 65535UL) , l_250[2]) , l_149) != l_215), g_257)), l_250[4])));
                }
                --g_265[3][0];
                (*l_145) &= (l_197 = (-1L));
                (*l_147) = (safe_rshift_func_int16_t_s_u((((((65535UL & (safe_add_func_int16_t_s_s((l_175 , l_197), l_103.f3))) & (((safe_div_func_uint8_t_u_u((l_274 , ((-1L) && ((((+((safe_rshift_func_int8_t_s_u((g_80[1] <= g_201), g_249.f3)) == g_14[1][2][5])) && 0x1AD39461BC6A5EF5LL) , &g_80[4]) == l_278[0]))), (*l_145))) < 0x12271815L) && l_103.f3)) , l_279) != (void*)0) >= (*g_7)), l_215));
            }
            (*l_285) = ((safe_add_func_uint32_t_u_u((((*l_282) = &l_185) == &l_185), l_283)) , l_284);
        }
        if (l_71)
            continue;
    }
    for (g_83.f4 = 0; (g_83.f4 >= (-29)); g_83.f4--)
    { 
        uint32_t l_288 = 0x8CA9857AL;
        int32_t *l_290 = (void*)0;
        int32_t *l_291 = &g_53[1];
        int32_t *l_292 = (void*)0;
        int32_t *l_293[6][1] = {{&g_17},{&g_54[2][0][1]},{&g_17},{&g_54[2][0][1]},{&g_17},{&g_54[2][0][1]}};
        uint32_t l_294[2][7] = {{0xA417AA07L,0xBD0946EBL,1UL,4294967293UL,4294967293UL,1UL,0xBD0946EBL},{0xA417AA07L,0xBD0946EBL,1UL,4294967293UL,4294967293UL,1UL,0xBD0946EBL}};
        int i, j;
        (*l_291) = ((l_288 , p_46) != l_289);
        l_294[0][4]--;
    }
    (*l_297) = l_103.f1;
    return l_103;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_54[i][j][k], "g_54[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_249.f0, "g_249.f0", print_hash_value);
    transparent_crc(g_249.f1, "g_249.f1", print_hash_value);
    transparent_crc(g_249.f2, "g_249.f2", print_hash_value);
    transparent_crc(g_249.f3, "g_249.f3", print_hash_value);
    transparent_crc(g_249.f4, "g_249.f4", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_265[i][j], "g_265[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_300[i][j][k], "g_300[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_305.f0, "g_305.f0", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_607.f0, "g_607.f0", print_hash_value);
    transparent_crc(g_761.f0, "g_761.f0", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_954.f0, "g_954.f0", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1279, "g_1279", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
