// SPDX-License-Identifier: MIT
// cctest_csmith_bda514fc.c --- cctest case csmith_bda514fc (csmith seed 3181712636)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7ba9ce2c */
/* @exp_ticks 0x3b82 */

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

// Options:   -s 3181712636 -o /tmp/csmith_gen_o9lntn89/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   int32_t  f1;
   int8_t  f2;
};
#pragma pack(pop)

union U2 {
   uint16_t  f0;
};

union U3 {
   const int32_t  f0;
};


static uint8_t g_2 = 250UL;
static uint64_t g_30 = 0xB95674643A64E785LL;
static int16_t g_31 = (-5L);
static struct S1 g_33 = {18446744073709551613UL,-7L,8L};
static uint32_t g_72 = 0x46FCCBB2L;
static int64_t g_73 = 0x9CD53D6C1C926A5ALL;
static int32_t g_74[1][4][1] = {{{5L},{5L},{5L},{5L}}};
static struct S0 g_131 = {8UL};
static int8_t g_164 = 5L;



static uint32_t  func_1(void);
static union U2  func_6(int16_t  p_7, int64_t  p_8, int32_t  p_9, int8_t  p_10, uint8_t  p_11);
static uint64_t  func_17(uint64_t  p_18, int32_t  p_19, struct S0  p_20, int16_t  p_21);
static uint64_t  func_22(int32_t  p_23, uint32_t  p_24, uint32_t  p_25, int32_t  p_26);




static uint32_t  func_1(void)
{ 
    uint64_t l_3 = 6UL;
    int32_t l_133 = (-9L);
    int32_t l_134[2][4] = {{(-1L),(-1L),0x3D763EE6L,(-1L)},{(-1L),0x0E40F493L,0x0E40F493L,(-1L)}};
    int32_t l_135[2][1][3] = {{{0x26D82A54L,0x26D82A54L,0x26D82A54L}},{{0L,0L,0L}}};
    uint64_t l_136[4][4][5] = {{{0x540FA7CF2F2AFFB9LL,0xBC55D5BA149CD5C7LL,0x8C88DF4805D29A36LL,18446744073709551615UL,0xB79008C5D1B8DA62LL},{0x8C88DF4805D29A36LL,6UL,0xE3A335C488BB19F0LL,18446744073709551615UL,18446744073709551615UL},{0xC4B374F05488EF96LL,0xB2FAD472F8A427D2LL,0x540FA7CF2F2AFFB9LL,18446744073709551607UL,0xB79008C5D1B8DA62LL},{0xC4B374F05488EF96LL,0x6B62C38B1D141200LL,1UL,0xAE1D9C254B315FCELL,18446744073709551615UL}},{{0x8C88DF4805D29A36LL,0xB2FAD472F8A427D2LL,1UL,0xBB6E3EA3A5B7F6ABLL,0xBB6E3EA3A5B7F6ABLL},{0x540FA7CF2F2AFFB9LL,6UL,0x540FA7CF2F2AFFB9LL,0xE3A335C488BB19F0LL,0x8C88DF4805D29A36LL},{0x1E324BC1480928FALL,7UL,0x8CC7AA637DEE9CF0LL,0x540FA7CF2F2AFFB9LL,1UL},{4UL,7UL,0x3AA068DC4A0E6F0FLL,1UL,18446744073709551615UL}},{{0x3AA068DC4A0E6F0FLL,0x5685DB3B990F7100LL,0x8CC7AA637DEE9CF0LL,1UL,0xC4B374F05488EF96LL},{0x00FD19F2AA79D859LL,18446744073709551615UL,4UL,0x540FA7CF2F2AFFB9LL,18446744073709551615UL},{0x00FD19F2AA79D859LL,0UL,18446744073709551614UL,0xE3A335C488BB19F0LL,1UL},{0x3AA068DC4A0E6F0FLL,18446744073709551615UL,18446744073709551614UL,0x8C88DF4805D29A36LL,0x8C88DF4805D29A36LL}},{{4UL,0x5685DB3B990F7100LL,4UL,0xE3A335C488BB19F0LL,0x8C88DF4805D29A36LL},{0x1E324BC1480928FALL,7UL,0x8CC7AA637DEE9CF0LL,0x540FA7CF2F2AFFB9LL,1UL},{4UL,7UL,0x3AA068DC4A0E6F0FLL,1UL,18446744073709551615UL},{0x3AA068DC4A0E6F0FLL,0x5685DB3B990F7100LL,0x8CC7AA637DEE9CF0LL,1UL,0xC4B374F05488EF96LL}}};
    union U2 l_152 = {65535UL};
    union U3 l_155 = {0x9AD4D960L};
    int i, j, k;
    l_3 ^= g_2;
    g_74[0][1][0] = ((safe_lshift_func_uint8_t_u_s(g_2, (func_6(((safe_mod_func_int8_t_s_s((0x68DEL > g_2), 252UL)) > 1L), l_3, g_2, l_3, l_3) , 0L))) < g_131.f0);
    for (l_3 = 0; (l_3 <= 0); l_3 += 1)
    { 
        uint8_t l_149 = 4UL;
        for (g_31 = 0; (g_31 >= 0); g_31 -= 1)
        { 
            for (g_2 = 0; (g_2 <= 0); g_2 += 1)
            { 
                int i, j, k;
                return g_74[g_31][(g_2 + 3)][l_3];
            }
            for (g_72 = 0; g_72 < 1; g_72 += 1)
            {
                for (g_33.f0 = 0; g_33.f0 < 4; g_33.f0 += 1)
                {
                    for (g_30 = 0; g_30 < 1; g_30 += 1)
                    {
                        g_74[g_72][g_33.f0][g_30] = 0x7D3352EEL;
                    }
                }
            }
            for (g_131.f0 = 0; (g_131.f0 <= 0); g_131.f0 += 1)
            { 
                return g_31;
            }
        }
        if (l_3)
            break;
        for (g_33.f1 = 0; (g_33.f1 <= 0); g_33.f1 += 1)
        { 
            uint32_t l_139[4];
            const uint64_t l_156 = 18446744073709551615UL;
            int32_t l_157 = 0x674B0168L;
            int i;
            for (i = 0; i < 4; i++)
                l_139[i] = 0x1711A83DL;
            l_136[3][2][3]--;
            l_149 &= (l_139[1] != (safe_add_func_int64_t_s_s(g_30, (safe_unary_minus_func_uint64_t_u((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((((safe_mul_func_uint8_t_u_u(l_134[0][1], 6L)) && 0x3C7CBC0AL) & g_33.f0) <= 0x9236ECDBL), 2)), 0x046BL)))))));
            for (g_33.f0 = 0; (g_33.f0 <= 0); g_33.f0 += 1)
            { 
                int i, j, k;
                l_157 |= ((((g_73 = ((safe_lshift_func_uint8_t_u_u((l_152 , ((--g_2) <= 0xF8L)), g_74[g_33.f1][g_33.f1][g_33.f1])) | (l_155 , l_149))) != l_156) == 0x1FF4DA18CC6211D8LL) || l_3);
            }
        }
        for (g_131.f0 = 0; (g_131.f0 <= 0); g_131.f0 += 1)
        { 
            int32_t l_165[4][1];
            union U2 l_166 = {0x9C97L};
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_165[i][j] = 0x42D4C9FCL;
            }
            if (((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((g_164 ^= (l_133 , ((safe_sub_func_int16_t_s_s(g_74[0][0][0], 65526UL)) , g_30))), g_31)) == l_165[2][0]), g_73)) >= 0x23DC5B1DL) , l_166) , (-7L)))
            { 
                g_33 = g_33;
            }
            else
            { 
                if (l_166.f0)
                    break;
                g_74[0][2][0] ^= l_136[1][1][2];
                l_165[2][0] |= (g_74[0][2][0] = g_2);
            }
            for (g_33.f2 = 0; (g_33.f2 <= 0); g_33.f2 += 1)
            { 
                int i, j, k;
                g_74[l_3][(l_3 + 2)][l_3] = (g_74[g_33.f2][l_3][g_131.f0] != 0x75L);
            }
        }
    }
    return l_133;
}



static union U2  func_6(int16_t  p_7, int64_t  p_8, int32_t  p_9, int8_t  p_10, uint8_t  p_11)
{ 
    int8_t l_14[2][3] = {{0x9AL,(-1L),(-1L)},{0x9AL,(-1L),(-1L)}};
    struct S0 l_77[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
    int32_t l_85[5] = {0xC4542491L,0xC4542491L,0xC4542491L,0xC4542491L,0xC4542491L};
    int8_t l_86 = 0x88L;
    uint64_t l_87 = 0x9A7EFCC65C41F2E9LL;
    int32_t l_108 = 7L;
    union U2 l_132 = {65535UL};
    int i, j;
    for (p_9 = 1; (p_9 >= 0); p_9 -= 1)
    { 
        int32_t l_78 = 0x9BB2131AL;
        int32_t l_84[4];
        union U3 l_90[2] = {{1L},{1L}};
        int8_t l_107 = 0x02L;
        uint16_t l_110[5];
        int i;
        for (i = 0; i < 4; i++)
            l_84[i] = (-8L);
        for (i = 0; i < 5; i++)
            l_110[i] = 0x274BL;
        for (p_8 = 0; (p_8 <= 1); p_8 += 1)
        { 
            int64_t l_75 = 0x2E0064457BBF0BEDLL;
            int32_t l_83 = 0x7AD3C07AL;
            for (p_7 = 1; (p_7 >= 0); p_7 -= 1)
            { 
                int8_t l_32[1][3];
                int32_t l_76 = 0x49B7D65DL;
                uint32_t l_82 = 0x5D93D5F6L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_32[i][j] = (-1L);
                }
                l_83 |= ((((safe_add_func_uint64_t_u_u(func_17((l_76 = (l_75 = func_22((g_31 &= (((((((g_30 &= (l_14[p_8][p_8] , ((((((((l_14[1][1] & 0x8DL) > ((safe_rshift_func_uint16_t_u_s((!l_14[p_8][p_8]), g_2)) ^ l_14[0][1])) < g_2) >= 3UL) ^ g_2) | 0x45L) == g_2) && g_2))) != l_14[p_8][p_8]) < g_2) , l_14[p_8][p_8]) || 0x6AC3L) , g_30) > g_2)), l_32[0][2], g_2, p_9))), p_11, l_77[3], l_78), 0xB2937F8686667EE9LL)) , l_77[3].f0) || p_7) & l_82);
                g_74[0][1][0] = (g_33.f1 = p_7);
            }
        }
        l_87++;
        if (l_78)
            continue;
        for (g_73 = 0; (g_73 <= 1); g_73 += 1)
        { 
            uint32_t l_100 = 4294967295UL;
            int32_t l_102 = 6L;
            int32_t l_103 = 3L;
            int32_t l_105 = 0xD8E19E2EL;
            int32_t l_106 = (-1L);
            int32_t l_109 = 8L;
            int i, j;
            l_85[3] = ((l_14[g_73][(p_9 + 1)] , ((l_90[0] , (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((l_14[g_73][g_73] = (((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_2, (+g_31))), p_10)) , 0x39L) >= g_31)), 5)) <= 0xB34BBF6D4BD0D1FCLL), 4))) , 0x4CL)) <= l_100);
            if ((0xFC1DD83CB06C3112LL ^ g_74[0][3][0]))
            { 
                const int64_t l_101 = 0x9A48E5C97493B576LL;
                int32_t l_104[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_104[i] = 1L;
                l_85[4] = (l_101 >= 5UL);
                ++l_110[0];
            }
            else
            { 
                const struct S1 l_117 = {0x358E79FDL,0xAD63BEFAL,0x1EL};
                l_109 = ((safe_lshift_func_int8_t_s_u((g_33.f2 = (safe_mul_func_int16_t_s_s(p_7, 0xEA33L))), 2)) || (l_117 , l_84[3]));
            }
            if (l_108)
                continue;
        }
    }
    l_85[3] ^= (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((((safe_sub_func_int64_t_s_s((+g_72), (p_10 > ((0x0DL < (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((g_131 , g_2) || g_73), 65529UL)), p_9))) , l_14[1][0])))) ^ p_8) , 0xB4L) | g_74[0][0][0]), g_74[0][3][0])) != g_33.f0), 0xDD28A493L)), 1));
    return l_132;
}



static uint64_t  func_17(uint64_t  p_18, int32_t  p_19, struct S0  p_20, int16_t  p_21)
{ 
    const int32_t l_81[3][5][1] = {{{(-4L)},{2L},{(-4L)},{2L},{(-4L)}},{{2L},{(-4L)},{2L},{(-4L)},{2L}},{{(-4L)},{2L},{(-4L)},{2L},{(-4L)}}};
    int i, j, k;
    for (g_33.f0 = 22; (g_33.f0 >= 37); g_33.f0++)
    { 
        if (l_81[2][0][0])
            break;
    }
    return l_81[2][0][0];
}



static uint64_t  func_22(int32_t  p_23, uint32_t  p_24, uint32_t  p_25, int32_t  p_26)
{ 
    struct S1 l_34 = {18446744073709551608UL,0x62EAE264L,7L};
    int32_t l_39[1][5][4] = {{{(-1L),0xB6F8A3E0L,0xA3A1BBDBL,0xB6F8A3E0L},{0xB6F8A3E0L,(-5L),0xA3A1BBDBL,0xA3A1BBDBL},{(-1L),(-1L),0xB6F8A3E0L,0xA3A1BBDBL},{8L,(-5L),8L,0xB6F8A3E0L},{8L,0xB6F8A3E0L,0xB6F8A3E0L,8L}}};
    int i, j, k;
    l_34 = (g_33 = g_33);
    for (p_24 = (-17); (p_24 > 46); p_24 = safe_add_func_int32_t_s_s(p_24, 9))
    { 
        uint8_t l_49 = 0x61L;
        int32_t l_52 = (-3L);
        g_33.f1 &= p_26;
        for (g_31 = (-29); (g_31 > 17); g_31++)
        { 
            int8_t l_50[4][4] = {{0L,0x71L,0x99L,0x71L},{0x71L,0x4BL,0x99L,0x99L},{0L,0L,0x71L,0x99L},{0x08L,0x4BL,0x08L,0x71L}};
            int32_t l_51 = 0x5C95EEC0L;
            int32_t l_53 = 0x332E7A53L;
            int i, j;
            for (l_34.f1 = 0; (l_34.f1 >= 0); l_34.f1 -= 1)
            { 
                int32_t l_44 = 0x7181CA8FL;
                int i, j, k;
                l_53 = (l_52 = (l_51 = ((safe_mod_func_int8_t_s_s(l_39[l_34.f1][(l_34.f1 + 3)][l_34.f1], (safe_add_func_uint32_t_u_u(((g_33.f2 <= (l_44 = p_24)) , ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((0x254FL != g_30) <= g_33.f2), l_34.f0)), g_33.f0)) | l_49)), p_23)))) <= l_50[1][3])));
                if (p_25)
                    continue;
            }
        }
        g_74[0][1][0] |= (l_34.f1 = (safe_div_func_uint16_t_u_u((0x3CDC1821526695BDLL != (safe_sub_func_uint64_t_u_u((l_52 ^= (g_30++)), ((((safe_rshift_func_int8_t_s_u(((l_49 & (((g_72 = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(0xC025L, 2L)), p_26)), l_49)), g_33.f2)), p_23)) > p_23) != l_49)) ^ 0L) > g_33.f1)) , g_73), l_34.f1)) & p_25) <= (-2L)) <= 0x2037C870L)))), g_73)));
    }
    return p_25;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_74[i][j][k], "g_74[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
