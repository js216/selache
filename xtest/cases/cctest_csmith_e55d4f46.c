// SPDX-License-Identifier: MIT
// cctest_csmith_e55d4f46.c --- cctest case csmith_e55d4f46 (csmith seed 3848097606)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8182915c */
/* @exp_ticks 0x8bd */

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

// Options:   -s 3848097606 -o /home/agent1/fast_data/tmp/csmith_gen_y6q852z1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
};


static uint32_t g_2[2][2] = {{18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,18446744073709551610UL}};
static int8_t g_3 = 1L;
static uint32_t g_22[2][1] = {{0xDE6EAB3AL},{0xDE6EAB3AL}};
static int8_t g_23[2][2] = {{(-1L),(-1L)},{(-1L),(-1L)}};
static uint8_t g_24 = 0x00L;
static uint32_t g_34 = 4294967289UL;
static uint64_t g_62 = 0UL;
static int32_t g_79[2][4][3] = {{{0xEF7D18C3L,0xEF7D18C3L,(-6L)},{0xEF7D18C3L,0xEF7D18C3L,(-6L)},{0xEF7D18C3L,0xEF7D18C3L,(-6L)},{0xEF7D18C3L,0xEF7D18C3L,(-6L)}},{{0xEF7D18C3L,0xEF7D18C3L,(-6L)},{0xEF7D18C3L,0xEF7D18C3L,(-6L)},{0xEF7D18C3L,0xEF7D18C3L,(-6L)},{0xEF7D18C3L,0xEF7D18C3L,(-6L)}}};
static int64_t g_110 = 3L;
static int32_t g_119 = 0L;
static struct S0 g_151 = {4L,0x517FA6E5F86D9A30LL,1UL,0x63EE4706L};
static uint32_t g_165 = 0x4AA32D82L;
static uint8_t g_166 = 0xCCL;
static const union U1 g_224[1] = {{-2L}};
static uint16_t g_240 = 5UL;



static uint8_t  func_1(void);
static int16_t  func_5(int32_t  p_6, int32_t  p_7);
static int16_t  func_12(uint32_t  p_13, const uint64_t  p_14);
static struct S0  func_15(int32_t  p_16);




static uint8_t  func_1(void)
{ 
    int64_t l_4 = 0xAC196A162C9CC141LL;
    int32_t l_191 = 0x98E0AAA0L;
    int32_t l_213[1][4] = {{0x64947CCCL,0x64947CCCL,0x64947CCCL,0x64947CCCL}};
    struct S0 l_243 = {4L,0x901C74AD158495D6LL,8UL,0UL};
    int i, j;
    g_3 ^= g_2[1][0];
    l_4 |= g_3;
    if (((func_5(((safe_lshift_func_uint8_t_u_s(g_3, 5)) < g_2[1][0]), (safe_add_func_uint16_t_u_u(l_4, func_12(((g_3 > g_2[0][1]) , g_2[1][0]), g_2[0][1])))) , g_22[0][0]) , l_4))
    { 
        uint32_t l_170[2][5][4] = {{{0x50EA7015L,8UL,4294967295UL,0xAB036926L},{0x84958140L,3UL,0x84958140L,0xC0FDE11BL},{4294967295UL,0xC0FDE11BL,0x84958140L,0xAB036926L},{4294967295UL,0xC0FDE11BL,4294967292UL,0xC0FDE11BL},{0x84958140L,8UL,4294967292UL,3UL}},{{4294967295UL,0x98AB7A19L,0x84958140L,3UL},{4294967295UL,8UL,4294967295UL,0xC0FDE11BL},{4294967295UL,0xC0FDE11BL,0x84958140L,0xAB036926L},{4294967295UL,0xC0FDE11BL,4294967292UL,0xC0FDE11BL},{0x84958140L,8UL,4294967292UL,3UL}}};
        int8_t l_172 = 0x75L;
        int32_t l_179[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_179[i] = 7L;
        g_151 = func_15((safe_div_func_uint8_t_u_u(l_170[1][1][2], (+(l_172 >= ((l_4 | (safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((8L || g_22[0][0]), l_4)), g_22[0][0]))) >= 4294967289UL))))));
        g_119 = (safe_div_func_uint8_t_u_u((((--g_166) , g_22[0][0]) , (safe_mul_func_uint16_t_u_u(0x7391L, g_23[1][1]))), g_23[0][1]));
    }
    else
    { 
        uint32_t l_186 = 8UL;
        int32_t l_200 = 0x35DD1699L;
        uint8_t l_207[4] = {1UL,1UL,1UL,1UL};
        int32_t l_212[1][2][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_212[i][j][k] = 5L;
            }
        }
        if (((safe_rshift_func_uint8_t_u_s(((((l_186 <= 0x21L) ^ (safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((((l_4 ^ 0xDDBD3AB86DC195B6LL) >= 5L) > g_3), 0xB654L)) & 2UL), g_22[0][0]))) , l_4) | g_79[0][2][2]), 4)) , g_166))
        { 
            int32_t l_211 = 0xF168FF3DL;
            int32_t l_214[3];
            uint32_t l_215 = 18446744073709551608UL;
            struct S0 l_220 = {0L,1UL,0xFD831AC0L,4294967295UL};
            int16_t l_237 = 0x198BL;
            int i;
            for (i = 0; i < 3; i++)
                l_214[i] = 0L;
            l_191 = ((-1L) < l_186);
            if (g_165)
                goto lbl_210;
            if (((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((l_200 = l_191), ((safe_mul_func_uint16_t_u_u(((g_79[0][3][0] = (g_79[0][2][0] && g_151.f0)) , (safe_add_func_uint16_t_u_u(l_191, 0x979DL))), 0x4555L)) ^ 0L))), g_3)), g_22[0][0])), g_62)) , l_200))
            { 
lbl_210:
                l_207[2]++;
                l_215++;
                l_220 = func_15((safe_mul_func_uint16_t_u_u(g_79[0][2][0], l_207[2])));
            }
            else
            { 
                const int32_t l_238 = 0x2E3794E6L;
                struct S0 l_239 = {0x8F2E103AL,0xFB9E2A97B3EB1FB3LL,0xEA2D98C8L,4294967295UL};
                g_119 &= ((+(safe_div_func_int8_t_s_s(((g_224[0] , ((safe_rshift_func_uint16_t_u_s((0x818AD0E4L <= ((safe_div_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(g_151.f0, (((safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(g_2[1][1], l_212[0][0][0])) <= 0x3499E89216C94C7DLL), g_2[1][0])) > g_151.f0) , 0xD1AFC2CCCF639D24LL))) < l_237) == l_238), g_79[1][2][0])) , 0x3BL) , g_62), l_191)) >= 0x50625258L)), 4)) , g_79[1][1][0])) || 0xF67B546B69338E5FLL), g_23[0][0]))) <= g_62);
                l_239 = l_220;
                --g_240;
            }
        }
        else
        { 
            l_243 = g_151;
            l_243 = func_15(((safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((l_243.f3 , ((0x001F2724L || g_23[0][1]) , 0xBAD3L)) | 65530UL), g_79[0][0][2])) | 0x0F04L), g_23[0][0])) <= (-6L)));
        }
    }
    return g_22[0][0];
}



static int16_t  func_5(int32_t  p_6, int32_t  p_7)
{ 
    const int32_t l_164 = 0xB6AA6990L;
    int32_t l_167 = 0xB7BDAAF6L;
    l_167 &= (safe_mul_func_int16_t_s_s((g_166 = (g_165 ^= (safe_sub_func_int64_t_s_s(((safe_mod_func_int8_t_s_s(g_34, (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_164, l_164)) > (p_6 ^ 0xAD36L)), 8)))) ^ 0UL), 0x074C63FC518A76D6LL)))), 0xAA6BL));
    return l_164;
}



static int16_t  func_12(uint32_t  p_13, const uint64_t  p_14)
{ 
    int32_t l_21 = 0xDCEFBDE2L;
    struct S0 l_153 = {0xB78A188AL,0x396E7CF41E0E378ALL,0UL,1UL};
    l_153 = func_15(((g_24 = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_23[0][1] = (l_21 < ((g_2[0][1] != (g_22[0][0] ^= ((0x172DDB74A71A6E48LL < ((g_2[0][0] & 0L) >= p_14)) , p_13))) || l_21))), g_2[1][0])), 0x71L)) ^ 1UL)) & (-1L)));
    return p_13;
}



static struct S0  func_15(int32_t  p_16)
{ 
    struct S0 l_25[5] = {{-10L,0x71CF717C92570183LL,0xD748AEE5L,0x1904E20EL},{-10L,0x71CF717C92570183LL,0xD748AEE5L,0x1904E20EL},{-10L,0x71CF717C92570183LL,0xD748AEE5L,0x1904E20EL},{-10L,0x71CF717C92570183LL,0xD748AEE5L,0x1904E20EL},{-10L,0x71CF717C92570183LL,0xD748AEE5L,0x1904E20EL}};
    const uint64_t l_33 = 0UL;
    int32_t l_37 = 0L;
    int32_t l_49 = 8L;
    int32_t l_52[4];
    int32_t l_82 = (-1L);
    int8_t l_88 = 0x75L;
    int16_t l_89[2][4];
    int8_t l_90 = 0xB3L;
    int32_t l_91[2];
    int16_t l_139 = (-2L);
    uint32_t l_142 = 18446744073709551607UL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_52[i] = (-1L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_89[i][j] = 0x7FEFL;
    }
    for (i = 0; i < 2; i++)
        l_91[i] = (-1L);
    for (g_24 = 0; (g_24 <= 0); g_24 += 1)
    { 
        uint32_t l_36 = 0x986B299BL;
        for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
        { 
            return l_25[1];
        }
        for (p_16 = 0; (p_16 <= 1); p_16 += 1)
        { 
            int32_t l_35 = 7L;
            int i, j;
            l_35 = (g_34 = ((((((safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s((((safe_mul_func_int16_t_s_s(0x07DBL, (g_23[(g_24 + 1)][g_24] ^ p_16))) , ((safe_sub_func_uint16_t_u_u(g_23[0][1], g_22[0][0])) , g_22[0][0])) == l_33))) | p_16) == l_25[1].f2), l_25[1].f1)) , 1L) == g_23[(g_24 + 1)][g_24]) , 4UL) == g_2[1][0]) & g_22[0][0]));
            l_37 |= l_36;
        }
    }
    if (((~l_25[1].f1) > l_25[1].f2))
    { 
        uint64_t l_55 = 0x0FACFA70DAEE1FA0LL;
        int16_t l_58 = 0xBA47L;
        int32_t l_59 = 4L;
        int32_t l_60 = 0x15BA09F9L;
        union U1 l_73[1] = {{0L}};
        int32_t l_129 = 0xAEB11F9AL;
        int32_t l_131 = 0x780BD77FL;
        int32_t l_132[1][5] = {{0x56C1A719L,0x56C1A719L,0x56C1A719L,0x56C1A719L,0x56C1A719L}};
        int8_t l_141 = (-9L);
        int i, j;
        if ((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((l_37 &= p_16), (l_33 | ((p_16 ^ (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((0x2A55L == p_16), 0)) < g_22[0][0]) == g_23[1][1]), g_22[0][0]))) != 0x086CC6B0C40B387ELL)))), p_16)))
        { 
            const uint32_t l_57 = 0x7387092EL;
            int32_t l_61[2];
            int i;
            for (i = 0; i < 2; i++)
                l_61[i] = 0x5381D847L;
            p_16 = (safe_mod_func_uint8_t_u_u((g_24--), (((5L == l_52[3]) || (((safe_div_func_int16_t_s_s(l_55, (safe_unary_minus_func_uint8_t_u(l_57)))) <= p_16) | g_23[1][0])) || 0L)));
            g_62--;
            for (g_24 = 8; (g_24 > 32); g_24++)
            { 
                struct S0 l_67[4] = {{0xF5E13573L,0x360B9F0A6C5FA607LL,0x00194922L,0xD623911DL},{0xF5E13573L,0x360B9F0A6C5FA607LL,0x00194922L,0xD623911DL},{0xF5E13573L,0x360B9F0A6C5FA607LL,0x00194922L,0xD623911DL},{0xF5E13573L,0x360B9F0A6C5FA607LL,0x00194922L,0xD623911DL}};
                int i;
                return l_67[3];
            }
        }
        else
        { 
            uint8_t l_72 = 250UL;
            int32_t l_78 = 7L;
            int32_t l_80 = (-7L);
            int32_t l_83 = 0L;
            int32_t l_84[4][3] = {{0L,1L,1L},{(-1L),0x97E171BAL,0x97E171BAL},{0L,1L,1L},{(-1L),0x97E171BAL,0x97E171BAL}};
            uint32_t l_92 = 1UL;
            int32_t l_130 = 0x06B18C04L;
            int32_t l_133 = 0xBF76208AL;
            int i, j;
            if ((((safe_add_func_int16_t_s_s(0xC4ECL, ((safe_mul_func_uint16_t_u_u((l_72 != (l_73[0] , (((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((1UL > l_49), (-1L))), p_16)) > 0xDECCL) > l_60))), 0x18CAL)) , 4L))) && g_2[0][0]) , p_16))
            { 
                int8_t l_81 = 0x89L;
                uint16_t l_85 = 0xDCAAL;
                l_78 = (255UL | l_59);
                l_85++;
            }
            else
            { 
                g_79[0][1][2] ^= p_16;
            }
            l_92++;
            if (g_23[0][1])
            { 
                int8_t l_126 = (-1L);
                int32_t l_127 = 0xACB9E114L;
                int32_t l_128[2];
                uint16_t l_134[1][2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_128[i] = (-5L);
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_134[i][j] = 0x7073L;
                }
                g_79[0][1][2] = (safe_lshift_func_uint8_t_u_u((l_60 == (-7L)), ((g_110 ^= (safe_mod_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((l_82 ^= (0x4DL & (((((safe_rshift_func_uint8_t_u_s((!(safe_sub_func_int16_t_s_s((-8L), g_34))), 1)) & p_16) > (-1L)) != g_2[1][1]) ^ g_23[1][0]))), 1UL)) | 0xEA97L), l_72)) | 0xA3L), 4294967288UL)) & g_23[0][1]) > p_16), g_79[0][2][2]))) & 1L)));
                l_126 ^= ((((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(65526UL, (p_16 & (g_79[0][1][2] = (((g_119 = 1UL) < (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((0x66D2L == g_110) & l_59) == g_23[0][1]), 0UL)) >= 18446744073709551610UL), g_79[0][1][2])), 1UL))) & 0x2DL))))), 0xBEL)), g_22[1][0])), 65535UL)) , p_16) == l_90) <= l_88);
                ++l_134[0][1];
            }
            else
            { 
                int32_t l_137 = 0xCE436C4CL;
                int32_t l_138[2];
                int16_t l_140 = 0xC48BL;
                int i;
                for (i = 0; i < 2; i++)
                    l_138[i] = 0x98A221A7L;
                l_142--;
                g_79[1][3][1] |= (l_90 == 0xD9DDBCA4C7201BE5LL);
            }
        }
    }
    else
    { 
        uint32_t l_145 = 0xCEABE429L;
        int32_t l_146 = 0L;
        struct S0 l_152 = {0x11E01BE6L,0x33768AC4890B747BLL,0xB8031900L,0x5437D32DL};
        for (l_139 = 1; (l_139 >= 0); l_139 -= 1)
        { 
            int32_t l_147[3][1][1];
            uint32_t l_148 = 1UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_147[i][j][k] = 4L;
                }
            }
            l_145 = l_91[l_139];
            ++l_148;
        }
        l_152 = g_151;
        l_25[2] = l_25[2];
    }
    return l_25[1];
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
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_22[i][j], "g_22[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_23[i][j], "g_23[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_79[i][j][k], "g_79[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f1, "g_151.f1", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    transparent_crc(g_151.f3, "g_151.f3", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_224[i].f0, "g_224[i].f0", print_hash_value);

    }
    transparent_crc(g_240, "g_240", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
