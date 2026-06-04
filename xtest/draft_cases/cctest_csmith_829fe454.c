// SPDX-License-Identifier: MIT
// cctest_csmith_829fe454.c --- cctest case csmith_829fe454 (csmith seed 2191516756)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x38f3086a */
/* @exp_ticks 0x98a */

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

// Options:   -s 2191516756 -o /home/agent1/fast_data/tmp/csmith_gen_1brx6to8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
};

union U3 {
   uint64_t  f0;
};


static uint32_t g_19 = 0UL;
static union U3 g_24 = {0x03BD652568108531LL};
static struct S0 g_40 = {0xE352L};
static uint8_t g_41[4][4] = {{0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL}};
static int8_t g_54 = 0xA2L;
static struct S1 g_64 = {0xD864B91BL};
static uint8_t g_69[1][1][4] = {{{0UL,0UL,0UL,0UL}}};
static uint8_t g_128 = 246UL;
static int8_t g_132 = 0x55L;
static int64_t g_133 = 0L;
static uint32_t g_134 = 5UL;
static int32_t g_165 = 0x52D84E8DL;
static uint64_t g_177 = 18446744073709551606UL;
static struct S0 g_188 = {65535UL};
static uint64_t g_189 = 0x9176D05891831124LL;
static int32_t g_208 = 1L;
static uint32_t g_210 = 0x6573A9DBL;
static int8_t g_250 = (-1L);
static int8_t g_251 = 1L;
static uint64_t g_253 = 0UL;
static int64_t g_256 = 0L;
static int16_t g_257 = 0L;
static int8_t g_258 = (-5L);
static uint32_t g_259 = 4294967295UL;
static uint16_t g_276 = 1UL;
static uint64_t g_277 = 0x658B699BD09F821FLL;
static int16_t g_278 = 1L;
static uint32_t g_287[4] = {1UL,1UL,1UL,1UL};
static int16_t g_288 = 0xB5F1L;
static uint16_t g_289 = 0xE266L;
static uint8_t g_310 = 0xE5L;
static uint64_t g_311 = 0x6E48052E4B5579BDLL;
static uint32_t g_325 = 4UL;
static uint8_t g_326 = 0UL;



static uint8_t  func_1(void);
static uint8_t  func_10(struct S0  p_11, int64_t  p_12, const uint8_t  p_13);
static uint16_t  func_20(int32_t  p_21, union U3  p_22, uint16_t  p_23);
static int8_t  func_27(int16_t  p_28, const struct S1  p_29, uint32_t  p_30, int8_t  p_31, const int32_t  p_32);




static uint8_t  func_1(void)
{ 
    struct S0 l_14 = {65535UL};
    int32_t l_252 = (-8L);
    struct S1 l_274[4][5] = {{{5UL},{5UL},{5UL},{5UL},{5UL}},{{0xFCC24070L},{0xFCC24070L},{0xFCC24070L},{0xFCC24070L},{0xFCC24070L}},{{5UL},{5UL},{5UL},{5UL},{5UL}},{{0xFCC24070L},{0xFCC24070L},{0xFCC24070L},{0xFCC24070L},{0xFCC24070L}}};
    struct S1 l_275[5][1] = {{{18446744073709551608UL}},{{0x5E54CF3BL}},{{18446744073709551608UL}},{{0x5E54CF3BL}},{{18446744073709551608UL}}};
    uint32_t l_324[3];
    int16_t l_328 = 0x00BEL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_324[i] = 0xBEE72D1EL;
    if ((l_252 ^= (g_251 = ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(func_10(l_14, (g_133 = (safe_rshift_func_uint8_t_u_u(((l_14.f0 , (safe_div_func_uint16_t_u_u((g_19 , func_20(l_14.f0, g_24, g_19)), g_133))) , g_54), 3))), g_64.f0), 5)), g_250)), 9)), g_250)) , 1L))))
    { 
        return g_132;
    }
    else
    { 
lbl_309:
        g_253++;
        g_259++;
        for (g_257 = 5; (g_257 == 23); g_257 = safe_add_func_uint8_t_u_u(g_257, 2))
        { 
            for (g_40.f0 = 0; (g_40.f0 <= 0); g_40.f0 += 1)
            { 
                uint16_t l_264[1];
                int32_t l_265 = 0x37179735L;
                int i;
                for (i = 0; i < 1; i++)
                    l_264[i] = 0x841CL;
                l_264[0] ^= g_250;
                l_265 |= ((-1L) ^ g_69[0][0][1]);
            }
            if (g_19)
                continue;
        }
    }
    l_275[4][0] = (l_274[3][3] = ((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(0UL, 7)) < (safe_mul_func_uint16_t_u_u((g_69[0][0][2] < l_14.f0), (safe_mul_func_int16_t_s_s(l_252, g_24.f0))))), 0xFD5ADA9CL)) , g_64));
    for (g_165 = 0; (g_165 >= 0); g_165 -= 1)
    { 
        struct S1 l_286[4] = {{0UL},{0UL},{0UL},{0UL}};
        int32_t l_295 = 0x2A8F979CL;
        int i;
        for (g_177 = 0; (g_177 <= 0); g_177 += 1)
        { 
            uint16_t l_281 = 1UL;
            g_276 ^= 0xC6B5D01FL;
            g_278 = (g_277 = g_41[1][1]);
            for (g_128 = 0; (g_128 <= 3); g_128 += 1)
            { 
                int i, j, k;
                l_281 = (safe_add_func_uint16_t_u_u(g_69[g_177][g_165][g_128], 0xE7A8L));
            }
            for (l_14.f0 = 0; (l_14.f0 <= 0); l_14.f0 += 1)
            { 
                int32_t l_284 = 0x58CC197FL;
                struct S1 l_285 = {0x9B642A04L};
                int i, j, k;
                l_284 ^= ((safe_lshift_func_uint8_t_u_s(0x1DL, 1)) , (g_69[g_165][g_177][l_14.f0] | g_69[g_177][l_14.f0][(l_14.f0 + 3)]));
                l_286[1] = l_285;
            }
        }
        for (g_132 = 0; (g_132 >= 0); g_132 -= 1)
        { 
            int32_t l_308 = (-6L);
            if (g_257)
            { 
                g_287[1] ^= g_277;
                --g_289;
            }
            else
            { 
                int16_t l_294 = 0xA900L;
                l_295 = ((safe_sub_func_uint32_t_u_u(0x97142AD1L, (g_251 >= g_289))) >= (7L < l_294));
            }
            if (((((safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((((g_289 == (safe_rshift_func_uint16_t_u_u(l_286[1].f0, 2))) && g_54) & (l_308 = ((l_295 = (g_165 || l_252)) < g_128))), 8L)) <= g_210), g_257)) < g_133) > 0L), 15)) & g_250), g_208)), g_19)) , 0x3B04L) == 5UL) >= l_274[3][3].f0))
            { 
                if (g_177)
                    goto lbl_309;
                g_310 = g_288;
            }
            else
            { 
                uint32_t l_314[4] = {0xF99018F3L,0xF99018F3L,0xF99018F3L,0xF99018F3L};
                int i;
                --g_311;
                if (g_165)
                    continue;
                ++l_314[3];
            }
            for (g_289 = 0; (g_289 <= 0); g_289 += 1)
            { 
                union U3 l_317 = {0xB5351F7D0607FCC5LL};
                int8_t l_327[2][4] = {{0x52L,1L,0x52L,0x52L},{1L,1L,0x7AL,1L}};
                int i, j, k;
                l_252 = ((l_317 , (safe_sub_func_uint8_t_u_u((g_69[g_289][g_289][(g_132 + 3)] = g_189), (((l_327[1][2] = (((safe_lshift_func_int8_t_s_s((((g_325 &= (((safe_mul_func_uint16_t_u_u(l_295, (g_64 , l_324[2]))) | l_317.f0) , g_208)) < 4UL) || g_19), l_317.f0)) <= g_289) || g_326)) > g_208) , 0x10L)))) , g_189);
            }
        }
    }
    return l_328;
}



static uint8_t  func_10(struct S0  p_11, int64_t  p_12, const uint8_t  p_13)
{ 
    int32_t l_172 = 0x9D74962EL;
    int32_t l_173 = 1L;
    int32_t l_230 = 1L;
    int32_t l_247 = 1L;
    const struct S1 l_248 = {1UL};
    struct S1 l_249 = {0UL};
    for (g_165 = 0; g_165 < 4; g_165 += 1)
    {
        for (p_12 = 0; p_12 < 4; p_12 += 1)
        {
            g_41[g_165][p_12] = 3UL;
        }
    }
    if ((g_69[0][0][2] < 0x5FL))
    { 
        uint16_t l_187[5][2] = {{0x06CAL,0x26F6L},{0x06CAL,0x26F6L},{0x06CAL,0x26F6L},{0x06CAL,0x26F6L},{0x06CAL,0x26F6L}};
        int i, j;
        for (g_40.f0 = 0; (g_40.f0 > 50); g_40.f0 = safe_add_func_uint8_t_u_u(g_40.f0, 6))
        { 
            struct S1 l_182[4] = {{9UL},{9UL},{9UL},{9UL}};
            int i;
            for (g_54 = (-12); (g_54 > (-14)); g_54 = safe_sub_func_int64_t_s_s(g_54, 9))
            { 
                uint32_t l_174 = 0x477D5BCDL;
                l_174--;
                g_177 = (p_13 <= p_11.f0);
            }
            if ((safe_mul_func_int8_t_s_s(((((((0xBB7537BB743FEE94LL || (safe_div_func_uint8_t_u_u((((l_182[2] , (g_177 ^ (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(0x8449L, 0)) < g_41[2][3]), l_172)))) <= 0UL) & l_182[2].f0), l_187[1][1]))) > p_13) || l_182[2].f0) != g_128) <= p_12) == p_12), 1L)))
            { 
                int64_t l_198[5];
                int8_t l_209 = 0x52L;
                int i;
                for (i = 0; i < 5; i++)
                    l_198[i] = 0xBBAE03F5253A8372LL;
                g_188 = g_40;
                g_189++;
                l_173 &= (safe_add_func_int16_t_s_s((g_210 = ((g_165 = (safe_mul_func_uint8_t_u_u((((9UL == 4UL) & (safe_rshift_func_uint8_t_u_s((l_198[2] , (~(g_208 = (safe_add_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((++g_128), 2)), 3)) == g_64.f0) <= l_187[0][0]), p_13))))), l_209))) != p_11.f0), p_11.f0))) , g_41[0][0])), l_182[2].f0));
            }
            else
            { 
                return g_210;
            }
        }
        if ((safe_sub_func_int8_t_s_s((l_230 |= (((((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((((l_187[1][1] < (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x60L, (+(((safe_rshift_func_uint8_t_u_u((((l_173 ^= (((l_187[1][1] < (safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(0x97L, g_132)) >= p_12), p_13))) && g_133) , l_172)) < g_132) || g_69[0][0][2]), 4)) ^ l_172) > 1L)))), p_11.f0))) && l_187[1][1]) && 0x56403DF3L) || 0x0440BCE341315DE7LL), 0x3535E136L)), p_12)), g_69[0][0][2])) < l_172) , g_188.f0) | 0x15L) | l_172)), p_11.f0)))
        { 
            return g_64.f0;
        }
        else
        { 
            for (g_40.f0 = 0; g_40.f0 < 1; g_40.f0 += 1)
            {
                for (g_64.f0 = 0; g_64.f0 < 1; g_64.f0 += 1)
                {
                    for (l_173 = 0; l_173 < 4; l_173 += 1)
                    {
                        g_69[g_40.f0][g_64.f0][l_173] = 0x74L;
                    }
                }
            }
        }
        for (p_11.f0 = 0; p_11.f0 < 1; p_11.f0 += 1)
        {
            for (l_173 = 0; l_173 < 1; l_173 += 1)
            {
                for (l_172 = 0; l_172 < 4; l_172 += 1)
                {
                    g_69[p_11.f0][l_173][l_172] = 247UL;
                }
            }
        }
    }
    else
    { 
        uint32_t l_234 = 0xDED3E824L;
        l_234 = (safe_rshift_func_uint16_t_u_s(((!(g_69[0][0][2] == p_12)) && 4294967295UL), ((0xE0F9L != 0xCB93L) > p_12)));
        l_247 ^= (safe_sub_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((++g_189), g_64.f0)) < (((safe_div_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(l_172, l_234)) && (safe_rshift_func_int8_t_s_u(p_12, l_234))), p_13)) > g_41[0][1]) != g_64.f0)), g_188.f0));
    }
    l_249 = l_248;
    return l_249.f0;
}



static uint16_t  func_20(int32_t  p_21, union U3  p_22, uint16_t  p_23)
{ 
    const struct S1 l_33 = {0x039EE491L};
    int32_t l_38 = 7L;
    uint16_t l_58 = 0UL;
    struct S1 l_65[1][1][2] = {{{{4UL},{4UL}}}};
    int8_t l_118 = 0L;
    uint32_t l_144 = 4294967295UL;
    struct S0 l_166[5][3] = {{{0xF1EAL},{0x7AFBL},{0xBF15L}},{{0xF1EAL},{0xF1EAL},{0x7AFBL}},{{65533UL},{0x7AFBL},{0x7AFBL}},{{0x7AFBL},{0x3024L},{0xBF15L}},{{65533UL},{0x3024L},{65533UL}}};
    int i, j, k;
    if (g_24.f0)
    { 
        struct S0 l_39[3][2][5] = {{{{0x50FAL},{5UL},{0x9643L},{0x9643L},{5UL}},{{0x4549L},{0xFA72L},{0x58FCL},{0x4DFDL},{0x4DFDL}}},{{{65535UL},{65535UL},{65535UL},{0x9643L},{0x8CA8L}},{{9UL},{5UL},{0x4DFDL},{5UL},{9UL}}},{{{65535UL},{0x50FAL},{65535UL},{5UL},{65535UL}},{{0x4549L},{0x4549L},{0x4DFDL},{9UL},{8UL}}}};
        int i, j, k;
        for (g_24.f0 = (-6); (g_24.f0 >= 7); g_24.f0 = safe_add_func_uint32_t_u_u(g_24.f0, 4))
        { 
            uint64_t l_34 = 0x97E7C14AB653B1DALL;
            l_38 &= (func_27(g_19, l_33, l_34, (((safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s(3L, 0x5BB08661L)))) > (-9L)) > l_34), l_34) , p_23);
            g_40 = l_39[0][0][0];
            return g_24.f0;
        }
    }
    else
    { 
        struct S0 l_57[5][2] = {{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}},{{1UL},{1UL}}};
        struct S1 l_61 = {18446744073709551606UL};
        int32_t l_73 = 1L;
        union U2 l_121 = {1L};
        int32_t l_164[5];
        struct S0 l_167 = {0xD490L};
        int i, j;
        for (i = 0; i < 5; i++)
            l_164[i] = (-4L);
        for (g_19 = 0; (g_19 <= 3); g_19 += 1)
        { 
            struct S1 l_51 = {18446744073709551615UL};
            struct S1 l_62 = {18446744073709551610UL};
            int32_t l_63 = 9L;
            g_54 = ((g_24.f0 = ((safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((-7L), 12)), (safe_lshift_func_int8_t_s_u((l_51 , ((p_22.f0 < ((safe_div_func_int16_t_s_s(l_33.f0, 0x2EA6L)) <= (-9L))) ^ g_40.f0)), 6)))) < p_21), 65529UL)))) || (-8L))) , g_41[0][0]);
            if (((g_24 , (safe_div_func_uint8_t_u_u(((l_57[3][1] , (g_54 <= l_58)) , l_57[3][1].f0), g_54))) > 1L))
            { 
                l_63 = (safe_lshift_func_uint16_t_u_s((l_51.f0 != ((l_62 = l_61) , p_21)), g_19));
                l_65[0][0][1] = g_64;
            }
            else
            { 
                int8_t l_78 = 0x61L;
                int32_t l_79 = 0x96E2414CL;
                if (p_23)
                    break;
                l_79 |= (safe_mul_func_uint16_t_u_u((((+(g_40.f0 > ((g_69[0][0][2] = g_40.f0) ^ (g_41[3][1] , (((((l_38 = (p_22.f0 = (~(safe_mod_func_uint8_t_u_u(((((g_41[2][2]++) > (safe_add_func_int16_t_s_s(((0xB821BFDB9CE08656LL || l_57[3][1].f0) , p_21), 0x5634L))) ^ p_21) | 0x38281B7FFC8BAB22LL), 255UL))))) == l_78) < 0xFE450DE0L) == g_19) < 9L))))) | 0x35D5AA0404C6930ALL) , l_61.f0), g_54));
                l_63 = (((((safe_mul_func_uint16_t_u_u(g_69[0][0][2], (safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(p_21, (((p_22.f0 = ((l_73 = (safe_mul_func_uint8_t_u_u(l_58, (((p_21 || g_19) , g_19) == (-8L))))) != l_78)) & 0xEDFD6319DC0990E4LL) & l_62.f0))), g_69[0][0][2])), g_54)))) , 0x8467E5F3L) , 7UL) != p_23) ^ p_21);
            }
            for (p_23 = 0; (p_23 <= 3); p_23 += 1)
            { 
                int32_t l_96 = 6L;
                int i, j;
                l_38 |= ((p_22 , (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((((l_96 = g_41[g_19][g_19]) < (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((g_24.f0 && (l_33.f0 & p_23)), l_73)), l_57[3][1].f0)), 0xD016L))) | p_22.f0) != g_24.f0), (-9L))) , l_58), g_40.f0)) && g_41[g_19][g_19]), 3))) ^ 0xADB549FEL);
                l_63 |= (safe_mod_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u((l_73 = (0xAEL || (((p_22.f0 != (safe_sub_func_uint8_t_u_u((!(safe_sub_func_uint16_t_u_u((l_96 = (safe_lshift_func_uint16_t_u_s(g_69[0][0][0], (safe_lshift_func_int16_t_s_u(g_24.f0, p_23))))), 0xDA3FL))), p_23))) == 0x394C470FL) == g_41[2][2]))), g_24.f0)) >= g_41[g_19][g_19]) && g_64.f0) != l_118), l_62.f0)) < (-1L)), l_58));
                if (p_22.f0)
                    break;
            }
        }
        l_61 = l_65[0][0][0];
        if (g_69[0][0][0])
        { 
            const uint16_t l_127 = 8UL;
            int32_t l_131 = (-6L);
            if (((safe_mod_func_uint8_t_u_u((l_121 , (g_24 , 0x8DL)), (+(safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((l_38 |= ((p_23 || 9L) == l_127)), l_121.f0)) && 9UL), (-9L)))))) > p_22.f0))
            { 
                g_128--;
                g_134++;
            }
            else
            { 
                return p_23;
            }
            for (l_121.f0 = 1; (l_121.f0 >= 0); l_121.f0 -= 1)
            { 
                int32_t l_145[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_145[i] = (-1L);
                p_21 = (((((!(safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(l_144, l_145[1])) && g_133), l_131)), p_23))) || g_128) < 65535UL) >= 3L) < g_128);
            }
        }
        else
        { 
            uint32_t l_146 = 4294967287UL;
            uint16_t l_153 = 65526UL;
            p_21 = ((((l_146 ^ (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((((((safe_mul_func_uint16_t_u_u((--l_153), (l_118 > (safe_unary_minus_func_uint64_t_u((((safe_div_func_int64_t_s_s((0xD48F7C917CCA8444LL != 0x5510416570B7C7C0LL), l_33.f0)) && l_121.f0) , p_23)))))) , g_128) || g_40.f0) >= p_22.f0) < 0x15A1L) > p_22.f0), 0x4CC697D3L)), 6))) || 0xBB71L) <= p_21) , p_21);
            l_73 = (safe_mod_func_uint32_t_u_u((l_73 ^ g_133), (l_38 = (safe_rshift_func_int8_t_s_u((g_132 = (g_165 = (safe_unary_minus_func_int64_t_s((65531UL ^ (l_61.f0 != l_164[0])))))), 4)))));
            l_167 = l_166[4][0];
        }
    }
    return l_65[0][0][1].f0;
}



static int8_t  func_27(int16_t  p_28, const struct S1  p_29, uint32_t  p_30, int8_t  p_31, const int32_t  p_32)
{ 
    return p_28;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_69[i][j][k], "g_69[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);

    }
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
