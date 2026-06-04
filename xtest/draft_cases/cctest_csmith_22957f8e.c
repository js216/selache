// SPDX-License-Identifier: MIT
// cctest_csmith_22957f8e.c --- cctest case csmith_22957f8e (csmith seed 580222862)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9abc443f */
/* @exp_ticks 0x1dd5 */

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

// Options:   -s 580222862 -o /home/agent1/fast_data/tmp/csmith_gen_0v705m73/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   uint64_t  f1;
   int64_t  f2;
   const int8_t  f3;
};
#pragma pack(pop)

struct S2 {
   int16_t  f0;
   int32_t  f1;
   int64_t  f2;
   int32_t  f3;
   const uint32_t  f4;
   uint32_t  f5;
};

union U4 {
   struct S1  f0;
   int8_t  f1;
};


static int32_t g_2[5][4][4] = {{{0x256EE973L,0x49F4FFCFL,(-1L),0x8146CDEAL},{0x9EF4A042L,0L,0x3E93D0B5L,4L},{0x8F90A3CFL,(-1L),0x34F545EEL,0xD9B4E94FL},{0x34F545EEL,0xD9B4E94FL,0xD9B4E94FL,0x34F545EEL}},{{1L,(-7L),4L,0x3E93D0B5L},{0x256EE973L,1L,0x8146CDEAL,(-1L)},{(-1L),0L,0xF37C04CCL,(-1L)},{(-1L),1L,0x34F545EEL,0x3E93D0B5L}},{{(-1L),(-7L),0x256EE973L,0x34F545EEL},{0L,0xD9B4E94FL,(-1L),0xD9B4E94FL},{0x256EE973L,(-1L),0xA8FE2430L,4L},{0L,0L,0x8F90A3CFL,0L}},{{0xA8FE2430L,(-1L),(-1L),(-1L)},{0xA8FE2430L,(-1L),0x8F90A3CFL,(-1L)},{0xD9B4E94FL,(-1L),1L,0x1720348FL},{0x1720348FL,0L,0xB9E9D60AL,0xB9E9D60AL}},{{0x256EE973L,0x256EE973L,0x1720348FL,1L},{0x8146CDEAL,0L,(-1L),0x8F90A3CFL},{(-1L),0x1720348FL,(-1L),(-1L)},{0x3E93D0B5L,0x1720348FL,0L,0x8F90A3CFL}}};
static union U4 g_23 = {{-1L,0x2DB22C08F497C316LL,-1L,0xCFL}};
static struct S0 g_25 = {3L,0x83830386L};
static int32_t g_46[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static int8_t g_49[4][5][1] = {{{0x73L},{(-1L)},{(-1L)},{0x73L},{9L}},{{0L},{9L},{0x73L},{(-1L)},{(-1L)}},{{0x73L},{9L},{0L},{9L},{0x73L}},{{(-1L)},{(-1L)},{0x73L},{9L},{0L}}};
static int64_t g_50 = (-6L);
static int16_t g_52[5] = {0xE4F3L,0xE4F3L,0xE4F3L,0xE4F3L,0xE4F3L};
static uint64_t g_54 = 0xE03EB41E2253E45BLL;
static uint32_t g_61 = 0x820F6120L;
static uint64_t g_65[5] = {0x9F09F7ADB2349D53LL,0x9F09F7ADB2349D53LL,0x9F09F7ADB2349D53LL,0x9F09F7ADB2349D53LL,0x9F09F7ADB2349D53LL};
static struct S1 g_97[1] = {{0L,0xFC21787F8654D647LL,-1L,0x28L}};
static struct S2 g_111[4][3][1] = {{{{0x2F6EL,5L,-1L,0x275E0746L,0UL,6UL}},{{0x8A43L,6L,0xCD8866DC531F22FFLL,1L,0UL,0xDE1D7CC4L}},{{0x2F6EL,5L,-1L,0x275E0746L,0UL,6UL}}},{{{2L,-7L,-5L,0x1EFC347CL,1UL,7UL}},{{0x3A51L,1L,-5L,0x3884B002L,0x7A080E1DL,0UL}},{{2L,-7L,-5L,0x1EFC347CL,1UL,7UL}}},{{{0x2F6EL,5L,-1L,0x275E0746L,0UL,6UL}},{{0x8A43L,6L,0xCD8866DC531F22FFLL,1L,0UL,0xDE1D7CC4L}},{{0x2F6EL,5L,-1L,0x275E0746L,0UL,6UL}}},{{{2L,-7L,-5L,0x1EFC347CL,1UL,7UL}},{{0x3A51L,1L,-5L,0x3884B002L,0x7A080E1DL,0UL}},{{2L,-7L,-5L,0x1EFC347CL,1UL,7UL}}}};
static uint32_t g_113 = 1UL;



static const uint32_t  func_1(void);
static int16_t  func_9(uint8_t  p_10, int16_t  p_11);
static uint8_t  func_12(uint32_t  p_13, uint32_t  p_14, int8_t  p_15, int8_t  p_16);
static int32_t  func_17(struct S0  p_18, uint32_t  p_19, int64_t  p_20, union U4  p_21);




static const uint32_t  func_1(void)
{ 
    uint64_t l_6 = 0xA2324015FB26C4F3LL;
    int32_t l_101 = 0xDA0945A8L;
    int32_t l_105 = 0L;
    int32_t l_106 = 0xBC2AABE8L;
    struct S0 l_115 = {0xD21332A2L,8UL};
    for (g_2[0][2][3] = (-18); (g_2[0][2][3] >= 7); g_2[0][2][3] = safe_add_func_int8_t_s_s(g_2[0][2][3], 8))
    { 
        int16_t l_5 = 0L;
        int32_t l_104 = 0x4C8FCCF9L;
    }
    l_105 = l_106;
    l_115 = g_25;
    return l_115.f0;
}



static int16_t  func_9(uint8_t  p_10, int16_t  p_11)
{ 
    uint64_t l_90 = 0x624D59534E3A6584LL;
    int32_t l_93 = 0x494579C6L;
    int32_t l_94 = 0x76184417L;
    struct S0 l_95[5][1] = {{{0L,0x557AD609L}},{{0L,0x557AD609L}},{{0L,0x557AD609L}},{{0L,0x557AD609L}},{{0L,0x557AD609L}}};
    struct S0 l_96 = {-2L,18446744073709551612UL};
    int32_t l_100 = (-10L);
    int i, j;
    for (g_23.f0.f0 = 0; (g_23.f0.f0 <= 28); g_23.f0.f0 = safe_add_func_uint32_t_u_u(g_23.f0.f0, 9))
    { 
        l_94 = (safe_add_func_int8_t_s_s((l_93 = (safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((p_11 = (safe_mul_func_int8_t_s_s((3L && (safe_lshift_func_int8_t_s_s(1L, l_90))), (safe_rshift_func_int16_t_s_s(g_23.f1, 6))))) , 0xD13DL), p_10)) > l_90), g_2[1][2][0]))), l_90));
        l_95[3][0] = l_95[4][0];
    }
    l_96 = (l_95[0][0] = (g_25 = l_95[0][0]));
    g_25.f0 |= ((l_94 |= (((l_95[4][0] = l_95[4][0]) , (g_97[0] , p_10)) & (safe_mul_func_uint16_t_u_u(l_96.f1, g_65[3])))) != l_100);
    return l_95[4][0].f1;
}



static uint8_t  func_12(uint32_t  p_13, uint32_t  p_14, int8_t  p_15, int8_t  p_16)
{ 
    struct S0 l_22[5][5] = {{{0x58A13C44L,18446744073709551615UL},{0xD5CCFDEFL,0x5DE082ADL},{0x0E74BB9CL,0xC02DFCE9L},{0xD5CCFDEFL,0x5DE082ADL},{0x58A13C44L,18446744073709551615UL}},{{0xB5B0D69BL,0x5C761B8CL},{0x22955D48L,0x6422F8DCL},{1L,0xB3883FAAL},{0xD89BB643L,0x8F438361L},{0x22955D48L,0x6422F8DCL}},{{0x58A13C44L,18446744073709551615UL},{1L,0xB3883FAAL},{1L,0xB3883FAAL},{0x58A13C44L,18446744073709551615UL},{0xD89BB643L,0x8F438361L}},{{0xD5CCFDEFL,0x5DE082ADL},{0x58A13C44L,18446744073709551615UL},{0x0E74BB9CL,0xC02DFCE9L},{0x22955D48L,0x6422F8DCL},{0x22955D48L,0x6422F8DCL}},{{0xB5B0D69BL,0x5C761B8CL},{0x58A13C44L,18446744073709551615UL},{0xB5B0D69BL,0x5C761B8CL},{0xD89BB643L,0x8F438361L},{0x58A13C44L,18446744073709551615UL}}};
    int32_t l_44 = 2L;
    int32_t l_47 = 0x94A7464CL;
    int32_t l_48 = (-1L);
    int32_t l_51 = 0xD1B63E3BL;
    int32_t l_53 = (-1L);
    int i, j;
    if (func_17(l_22[2][2], p_15, (g_2[3][3][3] , (((p_16 = (g_2[0][2][3] & 0xC8C9L)) ^ 0x4BL) & g_2[3][0][3])), g_23))
    { 
        const uint8_t l_32 = 0xD9L;
        int32_t l_41 = (-1L);
        int32_t l_42 = 0x96E9900FL;
        int32_t l_43 = 0x4AC155EAL;
        int32_t l_45[5][1][4];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_45[i][j][k] = 0x6E3F992CL;
            }
        }
        l_44 &= (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((l_22[2][2].f0 >= (safe_sub_func_uint64_t_u_u((((((l_32 , (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((g_54++), l_48)), ((safe_mul_func_uint8_t_u_u(((p_13 < 0xD6318E2BB11FE8BELL) >= g_52[1]), 0UL)) == 0xDD559FE4D3D82F88LL))), g_23.f0.f0)), 6))) == p_14) == 0x6EDAE8E356D6BBB2LL) > (-9L)) < l_51), 18446744073709551615UL))) | p_13) && g_23.f1), 6)) , g_50), g_46[4]));
    }
    else
    { 
        int16_t l_60[1][4][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_60[i][j][k] = 0x9B51L;
            }
        }
        l_60[0][0][0] |= (+p_14);
    }
    g_61++;
    for (g_61 = 0; (g_61 <= 4); g_61 += 1)
    { 
        struct S1 l_68 = {8L,0UL,0x03D0BAECBAC11434LL,0xBAL};
        for (p_13 = 0; (p_13 <= 4); p_13 += 1)
        { 
            int32_t l_71 = 0x494CAA1CL;
            const int64_t l_72 = 0x34EF3EF0B8C27A4ALL;
            int32_t l_73 = 0x67ADB25BL;
            int i;
            g_65[3] = (+g_46[p_13]);
            l_73 &= ((safe_rshift_func_uint8_t_u_u(((l_68 , g_52[p_13]) & (safe_mul_func_uint8_t_u_u(((((g_52[p_13] > ((l_71 &= p_14) > 1L)) == g_52[p_13]) ^ g_23.f1) , g_52[3]), l_44))), 4)) == l_72);
            for (g_23.f1 = 0; (g_23.f1 <= 0); g_23.f1 += 1)
            { 
                int32_t l_74 = 0x3C047C65L;
                int i, j, k;
                l_74 = g_49[(g_23.f1 + 1)][g_61][g_23.f1];
                l_48 |= (safe_lshift_func_int8_t_s_s(0x59L, 7));
            }
        }
        for (g_54 = 1; (g_54 <= 4); g_54 += 1)
        { 
            l_22[2][2] = l_22[2][2];
            for (l_68.f1 = 0; (l_68.f1 <= 4); l_68.f1 += 1)
            { 
                int i;
                if (g_46[l_68.f1])
                    break;
            }
        }
        for (p_15 = 1; (p_15 <= 4); p_15 += 1)
        { 
            struct S0 l_77[5][1][2] = {{{{0x27A07EE3L,0UL},{0x27A07EE3L,0UL}}},{{{0x27A07EE3L,0UL},{0x27A07EE3L,0UL}}},{{{0x27A07EE3L,0UL},{0x27A07EE3L,0UL}}},{{{0x27A07EE3L,0UL},{0x27A07EE3L,0UL}}},{{{0x27A07EE3L,0UL},{0x27A07EE3L,0UL}}}};
            int i, j, k;
            l_77[1][0][1] = g_25;
        }
    }
    return g_65[2];
}



static int32_t  func_17(struct S0  p_18, uint32_t  p_19, int64_t  p_20, union U4  p_21)
{ 
    int16_t l_24 = 8L;
    l_24 ^= 0x5ACC8E11L;
    p_18 = g_25;
    return l_24;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_23.f0.f0, "g_23.f0.f0", print_hash_value);
    transparent_crc(g_23.f0.f1, "g_23.f0.f1", print_hash_value);
    transparent_crc(g_23.f0.f2, "g_23.f0.f2", print_hash_value);
    transparent_crc(g_23.f0.f3, "g_23.f0.f3", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_49[i][j][k], "g_49[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_97[i].f0, "g_97[i].f0", print_hash_value);
        transparent_crc(g_97[i].f1, "g_97[i].f1", print_hash_value);
        transparent_crc(g_97[i].f2, "g_97[i].f2", print_hash_value);
        transparent_crc(g_97[i].f3, "g_97[i].f3", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_111[i][j][k].f0, "g_111[i][j][k].f0", print_hash_value);
                transparent_crc(g_111[i][j][k].f1, "g_111[i][j][k].f1", print_hash_value);
                transparent_crc(g_111[i][j][k].f2, "g_111[i][j][k].f2", print_hash_value);
                transparent_crc(g_111[i][j][k].f3, "g_111[i][j][k].f3", print_hash_value);
                transparent_crc(g_111[i][j][k].f4, "g_111[i][j][k].f4", print_hash_value);
                transparent_crc(g_111[i][j][k].f5, "g_111[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_113, "g_113", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
