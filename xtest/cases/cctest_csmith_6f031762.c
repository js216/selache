// SPDX-License-Identifier: MIT
// cctest_csmith_6f031762.c --- cctest case csmith_6f031762 (csmith seed 1862473570)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb0075c6c */
/* @exp_ticks 0x70f9 */

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

// Options:   -s 1862473570 -o /tmp/csmith_gen_wqaozfzr/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   const int64_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   int16_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

union U2 {
   uint16_t  f0;
   int32_t  f1;
   int8_t * f2;
};

union U3 {
   const uint16_t  f0;
   const int32_t  f1;
};


static int32_t g_3[1] = {0x1D962EE6L};
static int32_t g_6 = (-4L);
static int32_t g_10 = (-4L);
static struct S1 g_56 = {0xBC1FB248A18BD6C3LL,0xA0ACL,4294967290UL,1UL,0xED7CL,0L};
static int8_t g_60 = 0xD1L;
static int64_t g_63 = (-4L);
static int16_t g_96[6][3][5] = {{{(-1L),2L,1L,1L,2L},{0L,0x250BL,2L,7L,(-5L)},{0x1E3CL,(-3L),2L,0xAA92L,(-1L)}},{{0x8313L,0L,0L,0x8313L,1L},{0x1E3CL,1L,(-2L),0xFF64L,0xAA92L},{0L,1L,0x8202L,2L,0x8202L}},{{(-1L),(-1L),0xAA92L,0xFF64L,(-2L)},{0xDC5BL,0x9E46L,1L,0x8313L,0L},{2L,0xAA92L,(-1L),0xAA92L,2L}},{{0x9E46L,0x250BL,0x8202L,(-5L),1L},{9L,0xAA92L,0x0E20L,2L,2L},{(-5L),0x0DAAL,(-5L),0x250BL,1L}},{{2L,2L,0xAA92L,(-3L),1L},{1L,0x8313L,0L,0L,0x8313L},{0x0E20L,(-2L),0xAA92L,1L,(-1L)}},{{0x0DAAL,(-5L),(-5L),1L,0xDC5BL},{(-1L),0x0E20L,0x0E20L,(-1L),0x1E3CL},{0x0DAAL,0L,0x8202L,0x9E46L,1L}}};
static union U3 g_109 = {0UL};
static union U3 *g_108 = &g_109;
static const int64_t *g_131 = &g_56.f0;
static const int64_t **g_130 = &g_131;
static struct S0 g_144 = {0x4E430C84L,0x64224211670AD508LL};
static int32_t *g_169[3][4] = {{&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0]}};
static int32_t **g_168[5] = {&g_169[2][2],&g_169[2][2],&g_169[2][2],&g_169[2][2],&g_169[2][2]};
static uint64_t g_204 = 0x2FA0D4CE72C01D06LL;
static union U3 g_235 = {65535UL};
static uint32_t g_312[5] = {0x145B7881L,0x145B7881L,0x145B7881L,0x145B7881L,0x145B7881L};
static uint8_t g_330 = 0x36L;
static uint8_t *g_329[7][3][4] = {{{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}},{{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}},{{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}},{{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}},{{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}},{{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}},{{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330},{&g_330,&g_330,&g_330,&g_330}}};
static const int32_t g_356 = 0xCED1F609L;
static uint16_t *g_379 = &g_56.f1;
static struct S1 *g_388 = (void*)0;
static struct S1 **g_387 = &g_388;
static struct S1 g_392[7] = {{0L,0x8845L,0x26E135FCL,1UL,-5L,2L},{0L,0x8845L,0x26E135FCL,1UL,-5L,2L},{0L,0x8845L,0x26E135FCL,1UL,-5L,2L},{0L,0x8845L,0x26E135FCL,1UL,-5L,2L},{0L,0x8845L,0x26E135FCL,1UL,-5L,2L},{0L,0x8845L,0x26E135FCL,1UL,-5L,2L},{0L,0x8845L,0x26E135FCL,1UL,-5L,2L}};
static struct S1 g_393 = {-7L,0UL,0x3607505CL,1UL,-7L,-1L};
static union U2 g_418 = {1UL};
static uint32_t g_438 = 3UL;
static uint32_t * const g_437[2] = {&g_438,&g_438};
static uint32_t * const *g_436[3] = {&g_437[0],&g_437[0],&g_437[0]};
static int32_t *g_523[3][7] = {{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0],&g_3[0]},{&g_3[0],&g_3[0],(void*)0,&g_3[0],&g_3[0],(void*)0,&g_3[0]}};
static uint16_t **g_539 = (void*)0;
static uint16_t ***g_538 = &g_539;
static int8_t g_561[1][6][3] = {{{(-5L),0x53L,0x53L},{(-5L),0x53L,0x53L},{(-5L),0x9EL,0x9EL},{0x53L,0x9EL,0x9EL},{0x53L,0x9EL,0x9EL},{0x53L,0x9EL,0x9EL}}};
static uint32_t ***g_596 = (void*)0;
static uint32_t ****g_595[3] = {&g_596,&g_596,&g_596};
static union U3 **g_759 = &g_108;
static union U3 ***g_758 = &g_759;
static int32_t g_887[4] = {0xA294363AL,0xA294363AL,0xA294363AL,0xA294363AL};
static int8_t g_888 = 0x44L;
static union U2 *g_967 = (void*)0;
static int32_t g_989 = (-1L);
static const struct S1 g_1007 = {0xB3EB6E14C98931EALL,65530UL,0x0A26B584L,65531UL,0x4A59L,0L};
static int32_t g_1043[6] = {0x0357D4BEL,0x0357D4BEL,0x0357D4BEL,0x0357D4BEL,0x0357D4BEL,0x0357D4BEL};
static int32_t g_1044 = 0x7C977E91L;
static int32_t g_1045 = 7L;
static int32_t g_1046[3] = {0x9A194994L,0x9A194994L,0x9A194994L};
static int32_t g_1047 = 0x66D334C1L;
static int32_t g_1048 = 0xE31FC4EFL;
static int32_t g_1051 = 0x20DBC080L;
static int64_t *g_1059 = &g_56.f0;
static int64_t **g_1058 = &g_1059;
static uint8_t **g_1149 = &g_329[5][0][0];
static uint8_t ***g_1148 = &g_1149;
static uint8_t ****g_1147 = &g_1148;
static int32_t g_1158 = 1L;
static int8_t *g_1194 = &g_561[0][2][1];
static int8_t ** const g_1193 = &g_1194;
static int8_t ** const *g_1192 = &g_1193;
static union U2 g_1291 = {6UL};
static int16_t g_1305 = (-5L);
static int64_t g_1353 = 0xA76B8C1C7FE67D37LL;
static uint32_t g_1365 = 18446744073709551614UL;
static uint32_t *g_1411 = &g_392[4].f2;
static uint8_t g_1560 = 0x1BL;
static union U3 ****g_1571 = &g_758;
static uint16_t g_1582 = 65534UL;
static uint64_t g_1604 = 18446744073709551607UL;
static uint64_t g_1606 = 0x5FB775987381E34ALL;
static uint32_t g_1633 = 9UL;
static struct S1 ** const *g_1640 = (void*)0;
static struct S1 ** const **g_1639[5][1] = {{&g_1640},{&g_1640},{&g_1640},{&g_1640},{&g_1640}};
static struct S1 ** const ***g_1638[2] = {&g_1639[3][0],&g_1639[3][0]};
static int8_t *g_1684 = (void*)0;
static int16_t *g_1855 = &g_56.f4;
static int16_t **g_1854[6][7][4] = {{{&g_1855,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,&g_1855,(void*)0},{&g_1855,(void*)0,(void*)0,&g_1855},{&g_1855,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1855,(void*)0,(void*)0}},{{&g_1855,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,&g_1855,(void*)0},{&g_1855,(void*)0,(void*)0,&g_1855},{&g_1855,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,&g_1855,(void*)0}},{{&g_1855,(void*)0,(void*)0,&g_1855},{&g_1855,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,&g_1855,(void*)0},{&g_1855,(void*)0,(void*)0,&g_1855},{&g_1855,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,&g_1855,(void*)0},{&g_1855,(void*)0,(void*)0,&g_1855},{&g_1855,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,(void*)0,(void*)0}},{{&g_1855,&g_1855,&g_1855,(void*)0},{&g_1855,(void*)0,(void*)0,&g_1855},{&g_1855,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,&g_1855,(void*)0},{&g_1855,(void*)0,(void*)0,&g_1855}},{{&g_1855,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,(void*)0,(void*)0},{&g_1855,&g_1855,&g_1855,(void*)0},{(void*)0,&g_1855,&g_1855,(void*)0},{(void*)0,&g_1855,&g_1855,&g_1855},{&g_1855,&g_1855,&g_1855,&g_1855}}};
static int16_t g_1856 = (-5L);
static struct S0 g_1878 = {0x04E23EB4L,0L};
static struct S0 *g_1877 = &g_1878;
static uint64_t g_1992 = 0UL;
static uint64_t ***g_1998 = (void*)0;
static uint64_t *g_2002 = &g_1604;
static uint64_t **g_2001 = &g_2002;
static uint64_t ***g_2000 = &g_2001;
static int8_t g_2034[1] = {7L};
static uint16_t ****g_2124 = &g_538;
static uint16_t *****g_2123 = &g_2124;
static struct S1 g_2182 = {-1L,0xF800L,0x2661BD4AL,1UL,0x798EL,0xB7E490F5L};
static int32_t * const g_2222 = &g_1047;



static union U3  func_1(void);
static int32_t * func_14(struct S0  p_15, struct S1  p_16, int8_t  p_17);
static struct S0  func_18(uint32_t  p_19);
static uint32_t  func_20(union U2  p_21, const union U3  p_22, int8_t  p_23);
static union U2  func_24(union U2  p_25, int32_t * p_26);
static struct S0  func_27(int8_t * const  p_28, int32_t * const  p_29, int64_t  p_30, union U3  p_31);
static int32_t * func_33(uint64_t  p_34, int32_t  p_35, uint8_t  p_36, uint64_t  p_37);
static struct S1  func_38(uint16_t  p_39);




static union U3  func_1(void)
{ 
    int32_t *l_2 = &g_3[0];
    int32_t *l_4[4][1] = {{&g_3[0]},{&g_3[0]},{&g_3[0]},{&g_3[0]}};
    int16_t l_5 = 0x64D6L;
    int32_t l_7 = 0x88ACC167L;
    int32_t l_8 = (-8L);
    int32_t l_9 = 0x93DCEDB1L;
    uint32_t l_11 = 0x801F5D8EL;
    int8_t * const l_32 = (void*)0;
    struct S0 l_40 = {0x3FC00924L,0x23CC0FEBE71B68C1LL};
    uint32_t l_469 = 0x6A4F7DB3L;
    int8_t l_470 = (-1L);
    union U3 l_525 = {0x76CCL};
    struct S1 l_1963 = {0xA5A1738A90A7445FLL,0x8AD9L,4294967289UL,0x57AEL,0x8B03L,0x86385207L};
    int32_t **l_2204[3];
    int32_t *l_2205 = &g_1045;
    struct S0 * const *l_2220 = (void*)0;
    uint64_t l_2221[7] = {0xC67C220137623ED6LL,0xC67C220137623ED6LL,0xC67C220137623ED6LL,0xC67C220137623ED6LL,0xC67C220137623ED6LL,0xC67C220137623ED6LL,0xC67C220137623ED6LL};
    uint32_t l_2223 = 0x6AD0EE5BL;
    struct S1 l_2224 = {-1L,8UL,0xAE274D00L,65533UL,0x8611L,-3L};
    int32_t *l_2225 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_2204[i] = &g_169[2][2];
    l_11++;
    if (l_11)
        goto lbl_2226;
    l_2205 = func_14(func_18(func_20(func_24((((g_10 ^ (func_27(l_32, func_33((func_38(((l_40 , (4294967289UL != (safe_div_func_int64_t_s_s((g_6 > (((l_40 , g_3[0]) ^ (-3L)) > 0x6531L)), g_6)))) <= g_3[0])) , 18446744073709551607UL), l_469, l_470, g_235.f0), g_96[2][2][4], l_525) , (*l_2))) || (*g_131)) , g_418), &l_9), l_525, (***g_1192))), l_1963, g_312[1]);
lbl_2226:
    l_2225 = func_14(func_27((*g_1193), g_2222, l_2223, (****g_1571)), l_2224, (**g_1193));
    (*g_2222) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((*g_379), (safe_add_func_int64_t_s_s((**g_1058), (*g_2002))))), (g_1043[3] , (***g_1148)))), 4));
    return l_525;
}



static int32_t * func_14(struct S0  p_15, struct S1  p_16, int8_t  p_17)
{ 
    const union U3 l_1964 = {0x6A4CL};
    uint16_t ****l_1968[4] = {&g_538,&g_538,&g_538,&g_538};
    uint16_t *****l_1967 = &l_1968[1];
    uint64_t * const **l_1969 = (void*)0;
    union U2 l_1970 = {0x1BD9L};
    uint64_t ** const *l_1971 = (void*)0;
    int32_t *l_1972[4] = {&g_3[0],&g_3[0],&g_3[0],&g_3[0]};
    int64_t l_1973 = (-1L);
    uint16_t l_1980[6] = {0x859BL,0UL,0x859BL,0x859BL,0UL,0x859BL};
    union U3 ***l_2021 = &g_759;
    union U3 ***l_2022 = &g_759;
    uint8_t l_2025 = 0x98L;
    uint32_t l_2030 = 0x1729ABB7L;
    uint64_t ****l_2033[7][3][7] = {{{&g_2000,&g_1998,&g_2000,&g_1998,(void*)0,&g_1998,&g_2000},{(void*)0,&g_2000,&g_1998,&g_1998,&g_2000,&g_1998,&g_1998},{&g_1998,&g_1998,&g_2000,&g_1998,&g_1998,&g_2000,&g_2000}},{{(void*)0,&g_2000,&g_1998,&g_1998,&g_1998,&g_2000,&g_2000},{&g_1998,&g_2000,&g_1998,&g_2000,&g_1998,&g_1998,(void*)0},{&g_1998,&g_1998,(void*)0,(void*)0,&g_2000,&g_2000,&g_2000}},{{(void*)0,&g_2000,&g_1998,(void*)0,(void*)0,&g_1998,&g_2000},{&g_1998,(void*)0,&g_1998,(void*)0,&g_2000,&g_1998,&g_1998},{&g_1998,&g_2000,&g_2000,&g_1998,&g_2000,(void*)0,&g_2000}},{{(void*)0,&g_2000,&g_2000,(void*)0,&g_2000,&g_1998,(void*)0},{&g_1998,&g_2000,&g_1998,(void*)0,&g_1998,&g_2000,&g_2000},{(void*)0,&g_1998,&g_1998,(void*)0,&g_1998,&g_1998,(void*)0}},{{&g_2000,(void*)0,&g_2000,&g_2000,&g_1998,&g_2000,&g_2000},{&g_2000,&g_1998,&g_2000,&g_1998,&g_1998,&g_1998,&g_1998},{&g_2000,&g_2000,&g_2000,&g_1998,&g_2000,&g_2000,&g_2000}},{{&g_1998,&g_2000,&g_1998,&g_1998,&g_2000,&g_1998,&g_2000},{&g_2000,&g_2000,&g_1998,&g_1998,&g_2000,&g_2000,(void*)0},{&g_2000,&g_1998,&g_2000,&g_2000,&g_2000,&g_1998,&g_2000}},{{&g_1998,&g_2000,&g_2000,&g_2000,&g_2000,&g_2000,&g_2000},{&g_1998,&g_1998,&g_1998,&g_1998,&g_2000,&g_1998,&g_1998},{(void*)0,&g_2000,&g_1998,&g_1998,&g_2000,&g_2000,&g_2000}}};
    struct S1 l_2087[6] = {{0xFF42A157CB115916LL,0x287FL,4294967293UL,5UL,0x659CL,-9L},{-1L,0xBF80L,0x40953B39L,1UL,0x0964L,-6L},{0xFF42A157CB115916LL,0x287FL,4294967293UL,5UL,0x659CL,-9L},{0xFF42A157CB115916LL,0x287FL,4294967293UL,5UL,0x659CL,-9L},{-1L,0xBF80L,0x40953B39L,1UL,0x0964L,-6L},{0xFF42A157CB115916LL,0x287FL,4294967293UL,5UL,0x659CL,-9L}};
    int32_t l_2089 = (-1L);
    uint8_t l_2101 = 0UL;
    int i, j, k;
    if ((l_1973 = (l_1964 , ((((safe_add_func_int16_t_s_s((0x75D5C810L > (l_1967 != &l_1968[2])), (l_1969 != (l_1970 , l_1971)))) || (-1L)) ^ 0x01B7L) < l_1970.f0))))
    { 
        int32_t *l_1978[2];
        union U2 l_1982 = {65535UL};
        struct S0 *l_2019 = &g_1878;
        uint64_t ****l_2032 = &g_2000;
        uint64_t *****l_2031[2][5][2] = {{{&l_2032,&l_2032},{&l_2032,&l_2032},{(void*)0,&l_2032},{&l_2032,&l_2032},{&l_2032,&l_2032}},{{&l_2032,(void*)0},{&l_2032,&l_2032},{&l_2032,&l_2032},{&l_2032,&l_2032},{(void*)0,&l_2032}}};
        int8_t l_2039 = 0L;
        union U2 **l_2040 = &g_967;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1978[i] = (void*)0;
        for (p_16.f0 = 0; (p_16.f0 <= 4); p_16.f0 += 1)
        { 
            int32_t *l_1976 = &g_1043[3];
            int32_t l_1988 = 0x3FC8D8CEL;
            int32_t l_1989 = 1L;
            union U2 *l_2005 = &l_1982;
            int8_t *l_2018 = (void*)0;
            int32_t *l_2026 = &g_1051;
            int32_t **l_2027 = &l_1972[2];
            int i;
            if ((safe_lshift_func_uint8_t_u_s(g_312[p_16.f0], g_312[p_16.f0])))
            { 
                int32_t **l_1977[6][4][6] = {{{&g_169[2][0],&g_523[1][5],&g_169[2][2],&l_1976,&g_523[1][5],(void*)0},{&g_523[0][1],&g_169[2][0],&g_169[2][2],&l_1972[2],(void*)0,(void*)0},{&g_169[0][3],&l_1972[2],(void*)0,&l_1976,(void*)0,&l_1972[2]},{&l_1976,(void*)0,&l_1972[2],&g_169[0][3],&l_1972[2],&l_1976}},{{&l_1972[2],&g_169[2][2],&g_169[2][0],&g_523[0][1],&l_1976,&g_169[1][2]},{&l_1976,&g_169[2][2],&g_523[1][5],&g_169[2][0],&l_1972[2],&g_523[1][5]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1976,&l_1972[2],&g_523[0][1],&g_523[1][5],(void*)0,&g_169[0][3]}},{{(void*)0,&g_169[2][0],&g_169[2][2],(void*)0,&g_523[1][5],&g_523[1][5]},{(void*)0,&g_523[1][5],(void*)0,&g_523[1][5],&g_169[2][2],&g_523[1][5]},{&l_1976,(void*)0,&l_1976,(void*)0,&l_1976,&g_169[2][2]},{(void*)0,&g_523[0][1],&g_169[1][2],&g_169[2][0],&g_523[1][5],&g_169[2][3]}},{{&l_1976,&g_169[2][2],&g_523[1][5],&g_523[0][1],&l_1976,&g_169[2][3]},{&l_1972[2],(void*)0,&g_169[1][2],&g_169[0][3],&g_169[2][2],&g_169[2][2]},{&l_1976,&l_1976,&l_1976,&l_1976,&l_1972[2],&g_523[1][5]},{&g_169[0][3],&g_169[1][2],(void*)0,&l_1972[2],&g_523[1][5],&g_523[1][5]}},{{&g_523[0][1],&g_523[1][5],&g_169[2][2],&l_1976,&g_523[1][5],&g_169[0][3]},{&g_169[2][0],&g_169[1][2],&g_523[0][1],(void*)0,&l_1972[2],(void*)0},{(void*)0,&l_1976,(void*)0,&l_1976,&g_169[2][2],&g_523[1][5]},{&g_523[1][5],(void*)0,&g_523[1][5],(void*)0,&l_1976,&g_169[1][2]}},{{(void*)0,&g_169[2][2],&g_169[2][0],(void*)0,&g_523[1][5],&l_1976},{&g_523[1][5],&g_523[0][1],&l_1972[2],&l_1976,&l_1976,&l_1972[2]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_169[2][2],(void*)0},{&g_169[2][0],&g_523[1][5],&g_169[2][2],&l_1976,&g_523[1][5],(void*)0}}};
                union U2 l_1979[6] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
                uint64_t l_1981 = 2UL;
                union U2 *l_1983[1];
                uint64_t l_1984 = 2UL;
                uint64_t *l_1997 = &g_1604;
                uint64_t **l_1996 = &l_1997;
                uint64_t ***l_1995 = &l_1996;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1983[i] = &l_1979[3];
                l_1976 = l_1976;
                for (g_393.f5 = 4; (g_393.f5 >= 1); g_393.f5 -= 1)
                { 
                    return l_1978[0];
                }
                if (((((p_16.f2 || ((((g_1291 = func_24(l_1979[3], l_1972[3])) , l_1984) >= 0xD3ABL) || 0x35B7D9B99AD8B456LL)) > 0xB0D49014L) & p_16.f4) , p_17))
                { 
                    int16_t ***l_1987 = &g_1854[3][6][0];
                    int16_t ****l_1986 = &l_1987;
                    int16_t *****l_1985 = &l_1986;
                    if (p_16.f2)
                        break;
                    (*l_1985) = (void*)0;
                }
                else
                { 
                    int8_t l_1990[5] = {0xAEL,0xAEL,0xAEL,0xAEL,0xAEL};
                    int32_t l_1991[3][2][3] = {{{0xC8CDA9F8L,0xC8CDA9F8L,(-1L)},{0x93667677L,0x238DDEADL,0x38A49793L}},{{6L,0xC8CDA9F8L,6L},{6L,0x93667677L,0xC8CDA9F8L}},{{0x93667677L,6L,6L},{0xC8CDA9F8L,0x238DDEADL,(-1L)}}};
                    int i, j, k;
                    g_1992--;
                    (*l_1976) |= 1L;
                }
                for (l_1989 = 2; (l_1989 >= 0); l_1989 -= 1)
                { 
                    uint64_t ****l_1999 = &l_1995;
                    int32_t l_2003 = 0x5673357CL;
                    union U2 **l_2004 = (void*)0;
                    l_2003 |= (((*l_1999) = (g_1998 = l_1995)) != (g_2000 = &l_1996));
                    l_2005 = &g_1291;
                }
                l_1978[0] = l_1972[1];
            }
            else
            { 
                struct S0 **l_2020 = &g_1877;
                (*l_2020) = l_2019;
            }
            (*l_2027) = l_2026;
        }
        l_2039 ^= (safe_add_func_uint64_t_u_u(((g_2034[0] = (l_2030 && ((*g_1411) = ((l_2033[6][0][3] = &g_1998) != &l_1971)))) , (safe_sub_func_int64_t_s_s((*g_131), p_16.f5))), (safe_add_func_int8_t_s_s(p_16.f3, p_16.f5))));
        (*l_2040) = &l_1982;
    }
    else
    { 
        int32_t l_2047 = 1L;
        uint32_t *l_2048[7] = {&g_56.f2,&g_56.f2,&g_56.f2,&g_56.f2,&g_56.f2,&g_56.f2,&g_56.f2};
        union U2 l_2050[1] = {{65531UL}};
        int32_t **l_2056[2];
        struct S1 l_2074 = {0x102FD5737EE3A804LL,0xA8FEL,0x45578F8AL,0UL,8L,-1L};
        int32_t l_2097[2][3][7] = {{{0x2C748E04L,0xA54007CCL,0xD083194BL,(-1L),0xEA00D8C2L,0x2C748E04L,0x2C748E04L},{0xA54007CCL,0xEA00D8C2L,5L,0xEA00D8C2L,0xA54007CCL,0xC8447B52L,0xEA00D8C2L},{0x096C8AB4L,(-6L),6L,0xEA00D8C2L,0xD083194BL,6L,1L}},{{0xD083194BL,1L,(-1L),(-1L),1L,0xD083194BL,(-6L)},{0x096C8AB4L,0xEA00D8C2L,0x3517BC8FL,0x096C8AB4L,1L,0L,0xEA00D8C2L},{0xA54007CCL,0x2C748E04L,0xD083194BL,2L,0xD083194BL,0x2C748E04L,0xA54007CCL}}};
        uint16_t **** const l_2118 = &g_538;
        int32_t *l_2145[5][5] = {{&g_418.f1,(void*)0,&g_418.f1,&g_418.f1,(void*)0},{(void*)0,&g_418.f1,&g_418.f1,(void*)0,&g_418.f1},{(void*)0,(void*)0,&g_1043[3],(void*)0,(void*)0},{&g_418.f1,(void*)0,&g_418.f1,&g_418.f1,(void*)0},{(void*)0,&g_418.f1,&g_418.f1,(void*)0,&g_418.f1}};
        int8_t **l_2159[1];
        int8_t ***l_2158 = &l_2159[0];
        int64_t l_2178 = 0x9C78629998827A3BLL;
        uint16_t l_2179 = 0xE6C3L;
        union U3 l_2198 = {0x9970L};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2056[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_2159[i] = &g_1684;
        if ((!(+(safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((p_16.f3 || ((((p_17 >= (0xACEA11E0E5F4FDC7LL <= 18446744073709551611UL)) || 0xF95C1075D91D15DDLL) != l_2047) < (l_2048[3] != (void*)0))), 0x39C9D7D418114FABLL)), (-1L))))))
        { 
            int16_t l_2051[5] = {8L,8L,8L,8L,8L};
            int32_t *l_2058 = &g_989;
            int32_t **l_2057 = &l_2058;
            int32_t l_2068 = 8L;
            struct S1 l_2072[3] = {{1L,65535UL,4294967295UL,4UL,2L,0xDED0EF6EL},{1L,65535UL,4294967295UL,4UL,2L,0xDED0EF6EL},{1L,65535UL,4294967295UL,4UL,2L,0xDED0EF6EL}};
            int i;
            if ((l_2050[0].f1 = ((!((l_2050[0] , ((p_17 = (0xCB3C52C1L != l_2051[3])) > ((safe_add_func_int64_t_s_s((((func_38((safe_rshift_func_int16_t_s_s((((p_16.f0 , l_2056[0]) != l_2057) <= ((**g_1193) && p_15.f0)), 13))) , 0x3EE7D308L) , l_2050[0].f0) , 0xF3F9F7FD08CFBA69LL), p_16.f5)) ^ p_15.f1))) , 0x8B28FE7563AB9FE3LL)) ^ l_2047)))
            { 
                return l_2058;
            }
            else
            { 
                int16_t l_2064 = 0x5FCFL;
                struct S1 *l_2073 = &l_2072[2];
                l_2068 |= ((((safe_mul_func_int8_t_s_s((p_16.f0 || (safe_mul_func_uint8_t_u_u(((((~(-4L)) >= ((0xF67C5FFF9BBBB134LL <= ((**g_2001) &= l_2064)) , ((void*)0 != &g_758))) != (safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint64_t_u((p_16.f0 <= (*g_1194)))) || 0xCBD1DEC3L) ^ p_16.f1), p_17))) , l_2051[4]), p_15.f0))), 0UL)) || 0x43A9L) || p_16.f5) && (*g_379));
                for (g_10 = 0; (g_10 >= 25); g_10++)
                { 
                    uint16_t l_2071 = 0xCEF9L;
                    l_2071 ^= p_16.f2;
                }
                l_2074 = ((*l_2073) = l_2072[2]);
            }
            l_2068 &= (~(-1L));
            for (l_2025 = 0; (l_2025 <= 39); l_2025 = safe_add_func_int8_t_s_s(l_2025, 7))
            { 
                struct S1 *l_2081 = (void*)0;
                struct S0 l_2090[6] = {{0UL,-1L},{0x97A9B032L,9L},{0UL,-1L},{0UL,-1L},{0x97A9B032L,9L},{0UL,-1L}};
                int i;
                for (g_56.f1 = 0; (g_56.f1 <= 4); g_56.f1 = safe_add_func_int32_t_s_s(g_56.f1, 9))
                { 
                    struct S1 l_2080 = {0x9AA602BFDE3D342ALL,0x93A2L,1UL,65529UL,-1L,0xFA7C9C9CL};
                    int32_t *l_2082 = &g_1047;
                    l_2080 = p_16;
                    l_2081 = &l_2072[2];
                    return l_2082;
                }
                l_2050[0].f1 = ((safe_lshift_func_uint16_t_u_u(((void*)0 != &p_16), (safe_lshift_func_uint8_t_u_s(((((g_1878 , (p_16.f4 = ((*g_1855) = ((0x3DFF9E0EL > ((((((((p_16.f2 = (l_2087[5] , ((0xCB9FE4E4L == (+((*g_379) == p_16.f4))) , l_2089))) == l_2051[0]) || p_16.f1) <= (-1L)) ^ 4294967288UL) , l_2090[0]) , (**g_2001)) == l_2074.f0)) || 2L)))) && l_2090[0].f1) , 255UL) , p_15.f0), 5)))) ^ l_2051[1]);
                l_2047 = ((+3UL) > l_2074.f3);
            }
        }
        else
        { 
            int32_t l_2092 = 1L;
            int32_t l_2093 = 0x0B061419L;
            uint64_t l_2094 = 0xD4B4192EAE5FF6E2LL;
            int32_t l_2098 = 0xAB563900L;
            int32_t l_2099 = 0L;
            int32_t l_2100 = 0x3C13C6F7L;
            ++l_2094;
lbl_2104:
            l_2101--;
            if (l_2094)
                goto lbl_2105;
            if ((l_2093 & p_16.f4))
            { 
lbl_2105:
                if (p_17)
                    goto lbl_2104;
                for (g_393.f1 = 0; (g_393.f1 < 29); ++g_393.f1)
                { 
                    uint8_t l_2110 = 249UL;
                    int32_t l_2113 = 0x272C52D8L;
                    l_2113 |= (safe_div_func_uint8_t_u_u(l_2110, ((safe_rshift_func_uint16_t_u_s(p_15.f0, (*g_1855))) & p_17)));
                }
                l_2098 = (safe_mul_func_int16_t_s_s((*g_1855), (safe_mod_func_int64_t_s_s((((l_2118 == ((*l_1967) = (void*)0)) , p_15.f0) | (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((&l_2118 != g_2123), ((***g_1148) |= (safe_div_func_uint64_t_u_u((p_17 , 18446744073709551615UL), l_2093))))), p_15.f0))), p_16.f1))));
            }
            else
            { 
                return l_1972[1];
            }
        }
        for (g_393.f2 = 0; (g_393.f2 == 5); ++g_393.f2)
        { 
            uint32_t l_2129 = 9UL;
            int32_t *l_2144 = (void*)0;
            int32_t l_2148 = 0xAB30B9A6L;
            int32_t l_2149 = 0x7C1001F0L;
            int32_t l_2150[2][7] = {{1L,0x49D6E1CAL,1L,1L,0x49D6E1CAL,1L,1L},{(-1L),(-1L),0xACCE9099L,(-1L),(-1L),0xACCE9099L,(-1L)}};
            int8_t l_2151 = 0x6CL;
            int32_t l_2152 = 0xF53A63BEL;
            int32_t *l_2156 = &g_3[0];
            int32_t **l_2157 = &l_2145[2][1];
            uint16_t *l_2164 = &l_2050[0].f0;
            uint16_t *****l_2166 = &l_1968[0];
            int8_t l_2176 = (-3L);
            int16_t l_2177 = (-1L);
            union U3 l_2181 = {6UL};
            struct S1 l_2183 = {-1L,0xB626L,7UL,0x8442L,0x9F59L,0xA9572608L};
            uint64_t **l_2185 = &g_2002;
            uint64_t l_2190 = 0x30ADAB97203E4FADLL;
            int i, j;
            l_2097[1][2][5] = (l_2129 >= (--(*g_1411)));
            for (l_1973 = 0; (l_1973 <= 2); l_1973 += 1)
            { 
                int32_t *l_2143 = &g_1048;
                int32_t l_2147[6] = {0x2350523AL,0x2350523AL,0x2350523AL,0x2350523AL,0x2350523AL,0x2350523AL};
                uint64_t l_2153 = 18446744073709551615UL;
                int i;
                if (((((***g_1192) = ((safe_sub_func_int16_t_s_s(l_2129, l_2097[0][1][4])) > (safe_rshift_func_uint16_t_u_u(((*g_379) = (safe_add_func_int16_t_s_s((p_16.f3 & p_15.f0), 65531UL))), (p_16.f1 = (1UL | (l_2129 <= 0x8888L))))))) != p_15.f1) | 0xCD21FC22870DEE36LL))
                { 
                    int16_t ***l_2141 = &g_1854[3][6][0];
                    int16_t ****l_2140 = &l_2141;
                    (*l_2140) = &g_1854[3][6][0];
                }
                else
                { 
                    int32_t **l_2142[2];
                    int32_t *l_2146 = &l_2097[0][2][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2142[i] = &g_523[1][5];
                    l_2143 = l_1972[1];
                    l_2145[2][1] = l_2144;
                    return l_2144;
                }
                for (g_393.f5 = 1; (g_393.f5 >= 0); g_393.f5 -= 1)
                { 
                    int i, j, k;
                    l_2144 = &l_2097[g_393.f5][(g_393.f5 + 1)][(l_1973 + 4)];
                }
                l_2153--;
                return l_2156;
            }
            (*l_2157) = &l_2148;
        }
    }
    return l_1972[2];
}



static struct S0  func_18(uint32_t  p_19)
{ 
    int32_t l_1742 = 0xC9D25E8EL;
    int16_t *l_1746 = &g_56.f4;
    int16_t *l_1750 = &g_96[2][2][4];
    uint64_t *l_1756[4][5] = {{&g_1606,&g_1606,&g_204,&g_1606,&g_204},{&g_204,&g_1606,&g_1604,&g_1606,&g_204},{&g_204,(void*)0,&g_1606,&g_204,(void*)0},{&g_204,&g_1606,&g_1606,&g_204,&g_204}};
    uint64_t **l_1755[7][4][1] = {{{&l_1756[0][3]},{&l_1756[0][3]},{&l_1756[1][1]},{&l_1756[2][2]}},{{&l_1756[1][1]},{&l_1756[2][2]},{&l_1756[1][1]},{&l_1756[0][3]}},{{&l_1756[0][3]},{&l_1756[1][1]},{&l_1756[2][2]},{&l_1756[1][1]}},{{&l_1756[2][2]},{&l_1756[1][1]},{&l_1756[0][3]},{&l_1756[0][3]}},{{&l_1756[1][1]},{&l_1756[2][2]},{&l_1756[1][1]},{&l_1756[2][2]}},{{&l_1756[1][1]},{&l_1756[0][3]},{&l_1756[0][3]},{&l_1756[1][1]}},{{&l_1756[2][2]},{&l_1756[1][1]},{&l_1756[2][2]},{&l_1756[1][1]}}};
    uint64_t l_1766[6];
    int32_t l_1780[4] = {(-9L),(-9L),(-9L),(-9L)};
    int16_t l_1785[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    struct S0 l_1791 = {0xDBF905AFL,0x09233419813DA773LL};
    const int32_t l_1814 = 0x46F8AA41L;
    uint8_t l_1912 = 248UL;
    uint64_t l_1916 = 0x5FEBA7B4AAB06B51LL;
    struct S1 l_1924 = {0x27A5EFBF458E1398LL,0x3250L,0x56F37323L,1UL,0x3246L,0xEDAAE2F9L};
    struct S1 *l_1933 = &g_393;
    struct S1 *l_1938 = (void*)0;
    union U2 l_1939 = {0x4C81L};
    union U3 ****l_1940 = &g_758;
    int8_t *l_1951[6];
    int8_t * const l_1956 = &g_888;
    int32_t * const l_1957 = &g_1048;
    uint16_t ***l_1958 = &g_539;
    int32_t *l_1959 = &g_418.f1;
    int32_t *l_1960 = &l_1780[3];
    struct S1 l_1961 = {1L,4UL,1UL,0xA4E5L,0xDA70L,0L};
    struct S1 *l_1962 = &l_1961;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1766[i] = 0xE5C48968F25CE5ABLL;
    for (i = 0; i < 6; i++)
        l_1951[i] = &g_561[0][3][0];
    for (g_204 = 0; (g_204 < 42); g_204 = safe_add_func_uint32_t_u_u(g_204, 1))
    { 
        uint32_t l_1743 = 1UL;
        int16_t *l_1747[2][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_96[2][2][4],&g_96[2][2][4],&g_96[2][2][4],&g_96[2][2][4],&g_96[2][2][4]}}};
        int16_t **l_1748 = (void*)0;
        int16_t **l_1749[4][7][6] = {{{&l_1747[1][0][0],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[1][0][4],&l_1747[1][0][0]},{&l_1747[1][0][1],(void*)0,&l_1747[1][0][0],&l_1747[1][0][4],&l_1747[0][0][2],&l_1746},{(void*)0,&l_1747[0][0][0],&l_1747[1][0][1],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[0][0][1]},{&l_1746,&l_1747[1][0][4],&l_1747[0][0][2],(void*)0,&l_1747[1][0][4],&l_1746},{&l_1747[0][0][0],&l_1747[1][0][0],&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[0][0][0],&l_1747[1][0][4]},{&l_1746,&l_1747[1][0][1],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[0][0][2],&l_1747[0][0][1]},{&l_1746,(void*)0,&l_1747[1][0][4],&l_1747[1][0][1],&l_1746,&l_1747[0][0][1]}},{{&l_1747[0][0][1],&l_1747[0][0][0],&l_1747[1][0][4],&l_1747[0][0][2],&l_1747[1][0][0],&l_1747[1][0][4]},{&l_1746,&l_1746,&l_1747[1][0][4],&l_1747[1][0][4],&l_1746,&l_1746},{&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[0][0][2],&l_1747[1][0][4],&l_1747[0][0][0],&l_1747[0][0][1]},{&l_1747[0][0][1],&l_1746,&l_1747[1][0][1],&l_1747[1][0][4],(void*)0,&l_1746},{&l_1747[0][0][1],&l_1747[0][0][2],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[1][0][1],&l_1746},{&l_1747[1][0][4],&l_1747[0][0][0],&l_1747[1][0][0],&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[0][0][0]},{&l_1746,&l_1747[1][0][4],(void*)0,&l_1747[0][0][2],&l_1747[1][0][4],&l_1746}},{{&l_1747[0][0][1],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[1][0][1],&l_1747[0][0][0],&l_1747[0][0][2]},{&l_1746,&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[1][0][4]},{&l_1746,&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[1][0][0],&l_1747[1][0][4]},{&l_1747[0][0][0],&l_1747[0][0][0],&l_1746,(void*)0,&l_1747[1][0][1],&l_1747[1][0][4]},{&l_1746,&l_1747[0][0][2],(void*)0,&l_1747[1][0][4],(void*)0,&l_1746},{&l_1747[0][0][2],&l_1746,(void*)0,&l_1747[1][0][0],&l_1747[0][0][0],&l_1747[1][0][4]},{&l_1747[1][0][4],&l_1747[1][0][0],&l_1746,&l_1747[1][0][4],&l_1746,&l_1747[1][0][4]}},{{&l_1747[1][0][4],&l_1746,&l_1747[1][0][4],&l_1746,&l_1747[1][0][0],&l_1747[1][0][4]},{&l_1747[1][0][4],&l_1747[0][0][0],&l_1747[1][0][0],(void*)0,&l_1746,&l_1747[0][0][2]},{&l_1746,(void*)0,&l_1747[1][0][4],(void*)0,&l_1747[0][0][2],&l_1746},{&l_1747[1][0][4],&l_1747[1][0][1],(void*)0,&l_1746,&l_1747[0][0][0],&l_1747[0][0][0]},{&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[1][0][0],&l_1747[1][0][4],&l_1747[1][0][4],&l_1746},{&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[1][0][0],&l_1747[1][0][4],&l_1746},{&l_1747[0][0][2],&l_1747[0][0][0],&l_1747[1][0][1],&l_1747[1][0][4],&l_1747[1][0][4],&l_1747[0][0][1]}}};
        int32_t l_1764 = 0L;
        int32_t l_1765 = 0x377963F6L;
        uint8_t l_1786 = 0x6AL;
        struct S1 l_1793 = {2L,0x685AL,4294967291UL,65535UL,0x156DL,5L};
        struct S1 ***l_1870 = &g_387;
        struct S0 *l_1876[5][6][5] = {{{&g_144,(void*)0,&g_144,(void*)0,&l_1791},{&l_1791,&g_144,&g_144,(void*)0,&l_1791},{&g_144,&l_1791,&l_1791,(void*)0,&l_1791},{&g_144,&g_144,(void*)0,&l_1791,&l_1791},{&g_144,&g_144,&l_1791,&l_1791,&g_144},{&g_144,(void*)0,&l_1791,&g_144,&l_1791}},{{&l_1791,&g_144,&l_1791,&l_1791,&l_1791},{&l_1791,(void*)0,&l_1791,&g_144,&l_1791},{&g_144,&g_144,&l_1791,&l_1791,&g_144},{&l_1791,&l_1791,&l_1791,&l_1791,(void*)0},{&l_1791,&g_144,&g_144,&l_1791,(void*)0},{&g_144,&g_144,&l_1791,&g_144,&l_1791}},{{&l_1791,&l_1791,&l_1791,&l_1791,&g_144},{&g_144,&l_1791,&g_144,(void*)0,&g_144},{&l_1791,&g_144,&l_1791,&l_1791,&g_144},{(void*)0,&g_144,&l_1791,&l_1791,(void*)0},{&g_144,&l_1791,&l_1791,&g_144,&g_144},{&l_1791,(void*)0,&l_1791,&l_1791,&g_144}},{{(void*)0,&l_1791,&g_144,&g_144,&l_1791},{&l_1791,&l_1791,&l_1791,&l_1791,&g_144},{&l_1791,&g_144,&l_1791,&g_144,&l_1791},{&l_1791,(void*)0,&g_144,&l_1791,&l_1791},{&g_144,&l_1791,(void*)0,&l_1791,&l_1791},{&g_144,&l_1791,&l_1791,(void*)0,&g_144}},{{&l_1791,&l_1791,&l_1791,&l_1791,&g_144},{&l_1791,&l_1791,&l_1791,&g_144,&g_144},{&l_1791,&l_1791,(void*)0,&l_1791,&g_144},{(void*)0,&l_1791,&g_144,&l_1791,&l_1791},{&g_144,&g_144,&l_1791,&l_1791,&l_1791},{(void*)0,&l_1791,&g_144,&g_144,&l_1791}}};
        int32_t l_1902 = (-1L);
        int32_t l_1903 = 0x7B979766L;
        int32_t l_1904 = 1L;
        int32_t l_1905 = 4L;
        int32_t l_1906 = (-1L);
        int32_t l_1907 = 6L;
        int32_t *l_1920 = &g_1046[0];
        union U3 * const ***l_1923 = (void*)0;
        int i, j, k;
        for (p_19 = 0; (p_19 != 33); ++p_19)
        { 
            l_1743--;
            if (l_1743)
                goto lbl_1925;
        }
        l_1742 = (l_1746 == (l_1750 = l_1747[1][0][4]));
        for (g_56.f5 = 19; (g_56.f5 >= 26); g_56.f5++)
        { 
            int16_t l_1758 = (-1L);
            int32_t l_1760 = 0x8F4E1C2EL;
            int32_t l_1761 = 0xE4BF748DL;
            int32_t l_1763 = 0xF2F34E40L;
            struct S1 l_1792[1] = {{-1L,0x008FL,0xF80CF873L,0x649EL,0xA992L,5L}};
            union U3 l_1801[4] = {{1UL},{1UL},{1UL},{1UL}};
            int32_t **l_1813 = &g_523[1][5];
            int i;
            if (l_1743)
                break;
            for (g_393.f2 = 0; (g_393.f2 <= 2); g_393.f2 += 1)
            { 
                int32_t l_1759 = 0x1D82C32BL;
                int32_t l_1762[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1762[i] = 0L;
                for (g_888 = 2; (g_888 >= 0); g_888 -= 1)
                { 
                    uint64_t **l_1753[2];
                    uint64_t ***l_1754[2];
                    int32_t *l_1757[6];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1753[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                        l_1754[i] = &l_1753[1];
                    for (i = 0; i < 6; i++)
                        l_1757[i] = &g_3[0];
                    l_1755[5][3][0] = l_1753[1];
                    l_1766[4]--;
                    l_1780[2] &= (((safe_unary_minus_func_uint16_t_u((0x8A44L < (g_1046[g_888] != ((+(((*g_1411) = (safe_div_func_int16_t_s_s(((g_1606++) <= ((~((safe_div_func_int64_t_s_s(g_1046[g_393.f2], (p_19 ^ (safe_mod_func_int16_t_s_s((p_19 > 0x9C74E37AL), l_1766[4]))))) != l_1742)) , 0x2C990B51ECDE474CLL)), 1UL))) , g_144.f1)) <= l_1762[2]))))) | 1UL) > p_19);
                }
                for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
                { 
                    int32_t *l_1781 = &l_1742;
                    int32_t *l_1782 = &g_1048;
                    int32_t *l_1783 = &g_1046[0];
                    int32_t *l_1784[5][2] = {{&g_1048,&g_1048},{&g_1048,&g_1048},{&g_1048,&g_1048},{&g_1048,&g_1048},{&g_1048,&g_1048}};
                    uint8_t ****l_1789 = (void*)0;
                    uint8_t *****l_1790 = &g_1147;
                    int i, j;
                    l_1786++;
                    if (g_1046[g_6])
                        break;
                    if (l_1763)
                        continue;
                    (*l_1790) = l_1789;
                }
                for (g_1045 = 0; (g_1045 <= 3); g_1045 += 1)
                { 
                    return l_1791;
                }
            }
            l_1793 = l_1792[0];
            (*l_1813) = ((safe_rshift_func_uint16_t_u_s((((l_1761 == (safe_unary_minus_func_int32_t_s((((safe_div_func_int64_t_s_s((l_1764 ^= ((safe_rshift_func_int16_t_s_u((l_1801[1] , (safe_lshift_func_int16_t_s_u((l_1785[3] & (((l_1792[0].f1 == (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((p_19 < (safe_mod_func_int64_t_s_s(((*g_1059) = ((+l_1793.f0) < (safe_div_func_int16_t_s_s(p_19, l_1793.f5)))), l_1792[0].f3))), 7)), p_19))) || l_1766[0]) | p_19)), 1))), l_1792[0].f1)) , l_1766[5])), p_19)) || (*g_379)) > p_19)))) < 0xA9L) >= 255UL), 4)) , (void*)0);
            if (l_1814)
                continue;
        }
        for (l_1765 = 13; (l_1765 < 17); l_1765 = safe_add_func_uint16_t_u_u(l_1765, 7))
        { 
            int32_t *l_1821 = (void*)0;
            int32_t *l_1822 = &g_1047;
            struct S0 l_1823 = {0x98B20FBFL,1L};
            (*l_1822) ^= (safe_add_func_uint64_t_u_u((((*g_1193) == (void*)0) >= (((-7L) ^ (safe_rshift_func_uint16_t_u_s(0x9315L, ((p_19 ^ (l_1764 = (l_1793.f0 > (0x293347D0L == p_19)))) <= 0x9FA0L)))) ^ 0x7B85L)), 0x874A806017AB3ED4LL));
            return l_1823;
        }
        for (g_56.f3 = 0; (g_56.f3 != 50); g_56.f3 = safe_add_func_int8_t_s_s(g_56.f3, 2))
        { 
            int32_t l_1843[1];
            int32_t *l_1852 = &g_1044;
            uint8_t l_1853 = 252UL;
            struct S1 * const **l_1868 = (void*)0;
            uint32_t l_1874 = 0xB315D791L;
            int i;
            for (i = 0; i < 1; i++)
                l_1843[i] = 6L;
            if ((safe_mod_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((((0x39L > (l_1785[3] || (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((((((safe_lshift_func_uint8_t_u_s((!((((*g_379) = ((0x8142351FL <= l_1843[0]) == (safe_lshift_func_int8_t_s_u((l_1743 != ((*l_1852) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((**g_1058) = (**g_130)) ^ (l_1793 , p_19)), l_1814)), 0L)), l_1814)))), (**g_1149))))) & (-9L)) == 5UL)), p_19)) | l_1853) , (void*)0) != g_1854[3][6][0]) , (-1L)), 15)), p_19)))) | 0x8520L) , l_1786), 0x77F7L)), 0x2FL)), l_1766[4])), p_19)) >= g_1856), 1UL)))
            { 
                int8_t l_1863[4] = {(-9L),(-9L),(-9L),(-9L)};
                struct S1 * const ***l_1869 = &l_1868;
                struct S1 ****l_1871 = &l_1870;
                int32_t *l_1881 = &g_1048;
                int32_t *l_1882 = &g_1046[2];
                int32_t *l_1883 = (void*)0;
                int32_t *l_1884 = (void*)0;
                int32_t *l_1885 = &g_1046[0];
                int32_t *l_1886 = &g_418.f1;
                int32_t *l_1887 = (void*)0;
                int32_t *l_1888 = &g_1047;
                int32_t *l_1889 = &g_1047;
                int32_t *l_1890 = &g_1047;
                int32_t *l_1891 = (void*)0;
                int32_t *l_1892 = &g_1048;
                int32_t *l_1893 = &g_1043[3];
                int32_t *l_1894 = (void*)0;
                int32_t *l_1895 = &g_1043[3];
                int32_t *l_1896 = &g_1047;
                int32_t *l_1897 = &g_3[0];
                int32_t *l_1898 = &g_1043[3];
                int32_t *l_1899 = &l_1764;
                int32_t *l_1900 = &g_1291.f1;
                int32_t *l_1901[2][2][5] = {{{&l_1780[1],&l_1780[1],&l_1780[1],&l_1780[1],&l_1780[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_1780[1],&l_1780[1],&l_1780[1],&l_1780[1],&l_1780[1]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                uint32_t l_1908 = 0xD73880B8L;
                int i, j, k;
                if (((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_1863[2] > ((**g_130) == p_19)), (0xA3L >= ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((*l_1869) = l_1868) != ((*l_1871) = l_1870)), 7)), (((safe_div_func_uint32_t_u_u(((g_144 , 0UL) > l_1766[4]), p_19)) , p_19) , p_19))) || p_19)))), p_19)), l_1874)) != 0xFBD8L))
                { 
                    int32_t **l_1875 = &l_1852;
                    (*l_1875) = &l_1780[2];
                    (**l_1875) &= 0xF7815294L;
                }
                else
                { 
                    struct S0 **l_1879 = &l_1876[4][5][3];
                    int32_t l_1880[6][4][6] = {{{5L,0xFDFF98C6L,(-9L),(-1L),0L,(-1L)},{0L,0x42BE2F30L,(-8L),(-1L),0xED220E4BL,0L},{5L,(-1L),0x2BFC7E32L,0L,0xFDFF98C6L,0xFDFF98C6L},{0x3965C3E6L,0x865C7AE3L,0x865C7AE3L,0x3965C3E6L,(-1L),(-4L)}},{{6L,6L,0x3965C3E6L,(-9L),0x18EF8D76L,0x4486B936L},{(-1L),0xFDFF98C6L,(-1L),(-8L),0x18EF8D76L,2L},{0L,5L,0x42BE2F30L,0xED220E4BL,0xCAAECB71L,0x4486B936L},{0L,0x3965C3E6L,(-3L),0x3965C3E6L,0L,(-9L)}},{{7L,6L,0xD683B573L,(-8L),2L,7L},{0x2BFC7E32L,(-1L),(-8L),6L,0x4486B936L,7L},{(-1L),0L,0xD683B573L,0x42BE2F30L,(-4L),(-9L)},{0x4486B936L,0xFDFF98C6L,(-3L),(-3L),0xFDFF98C6L,0x4486B936L}},{{(-9L),(-4L),0x42BE2F30L,0xD683B573L,0L,(-1L)},{7L,0x4486B936L,6L,(-8L),(-1L),0x2BFC7E32L},{7L,2L,(-8L),0xD683B573L,6L,7L},{(-9L),0L,0x3965C3E6L,(-3L),0x3965C3E6L,0L}},{{0x4486B936L,0xCAAECB71L,0xED220E4BL,0x42BE2F30L,5L,0x4486B936L},{(-1L),0xD683B573L,(-1L),6L,0L,0x18EF8D76L},{0x2BFC7E32L,0xD683B573L,(-4L),(-8L),5L,(-1L)},{7L,0xCAAECB71L,(-8L),0x3965C3E6L,0x3965C3E6L,(-8L)}},{{0L,0L,0x4486B936L,0xED220E4BL,6L,0x865C7AE3L},{0x4486B936L,2L,6L,(-1L),(-1L),0x4486B936L},{0x18EF8D76L,0x4486B936L,6L,(-4L),0L,0x865C7AE3L},{(-1L),(-4L),0x4486B936L,(-8L),0xFDFF98C6L,(-8L)}}};
                    int i, j, k;
                    (*l_1879) = (g_1877 = l_1876[2][3][0]);
                    if (l_1880[1][1][4])
                        break;
                    if (p_19)
                        break;
                }
                l_1908++;
                if ((((p_19 | l_1780[0]) , l_1793.f0) ^ l_1791.f0))
                { 
                    int32_t l_1911[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1911[i] = 0x9EF49A90L;
                    if (l_1786)
                        break;
                    ++l_1912;
                }
                else
                { 
                    int8_t l_1915 = 1L;
                    (*l_1897) |= ((*l_1896) ^= (-1L));
                    if (p_19)
                        break;
                    l_1915 = p_19;
                }
                l_1916--;
            }
            else
            { 
                int32_t **l_1919 = &g_169[2][2];
                l_1920 = ((*l_1919) = (void*)0);
                l_1924 = func_38((((safe_mul_func_int16_t_s_s(p_19, ((*l_1746) = p_19))) , (void*)0) != l_1923));
            }
        }
    }
lbl_1925:
    for (g_144.f0 = 0; (g_144.f0 <= 1); g_144.f0 += 1)
    { 
        return l_1791;
    }
    for (l_1924.f2 = 0; (l_1924.f2 <= 20); l_1924.f2++)
    { 
        int32_t **l_1928 = &g_169[2][2];
        struct S1 *l_1931 = &l_1924;
        struct S1 *l_1932 = &g_392[3];
        struct S1 **l_1934 = &g_388;
        struct S1 **l_1935 = &g_388;
        struct S1 **l_1936 = &g_388;
        struct S1 **l_1937[3];
        int32_t l_1941[1];
        int32_t *l_1942 = &g_1047;
        int32_t *l_1943 = &g_3[0];
        int i;
        for (i = 0; i < 3; i++)
            l_1937[i] = &g_388;
        for (i = 0; i < 1; i++)
            l_1941[i] = 0xC83B2B3EL;
        (*l_1928) = &l_1742;
        if (l_1916)
            goto lbl_1925;
        (*l_1943) |= ((*l_1942) &= ((((safe_lshift_func_int16_t_s_u((-1L), 7)) , l_1931) == (l_1938 = (l_1933 = (l_1932 = (void*)0)))) != (((l_1939 , (l_1940 == ((g_1606 = 18446744073709551606UL) , l_1940))) == (*g_1855)) ^ l_1941[0])));
        if ((*l_1943))
            break;
    }
    (*l_1960) |= (safe_div_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((**g_759) , (safe_unary_minus_func_uint16_t_u((((l_1958 = (((((safe_add_func_uint16_t_u_u(((((*g_1193) = l_1951[5]) != l_1951[5]) & (safe_div_func_int16_t_s_s(((((((safe_lshift_func_int8_t_s_s((g_561[0][0][2] = (-5L)), 7)) <= l_1766[5]) , &g_1855) == (func_27(l_1956, l_1957, (*g_131), (***g_758)) , &l_1750)) >= p_19) , 0xE895L), p_19))), (*g_1855))) >= (*l_1957)) || 0x65EFD601L) , (****l_1940)) , l_1958)) == (void*)0) || p_19)))), (*l_1957))) == g_1048), g_393.f4));
    (*l_1962) = l_1961;
    return l_1791;
}



static uint32_t  func_20(union U2  p_21, const union U3  p_22, int8_t  p_23)
{ 
    struct S1 l_1468 = {0x804437C0BE189EA7LL,1UL,0x7DEEDAB9L,1UL,-1L,0L};
    struct S1 *l_1469 = &l_1468;
    uint32_t l_1470 = 1UL;
    int32_t *l_1471[4][2][2] = {{{&g_3[0],&g_3[0]},{&g_3[0],&g_3[0]}},{{&g_3[0],&g_3[0]},{&g_3[0],&g_3[0]}},{{&g_3[0],&g_3[0]},{&g_3[0],&g_3[0]}},{{&g_3[0],&g_3[0]},{&g_3[0],&g_3[0]}}};
    uint32_t l_1472 = 0x462AB977L;
    uint32_t ****l_1479[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_596,(void*)0,&g_596,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_596,(void*)0,&g_596,(void*)0}};
    uint32_t l_1504 = 2UL;
    uint32_t *l_1539[7] = {&l_1472,&g_438,&l_1472,&l_1472,&g_438,&l_1472,&l_1472};
    const union U3 **l_1565 = (void*)0;
    const union U3 ***l_1564 = &l_1565;
    const union U3 ****l_1563[5][5][3] = {{{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,(void*)0,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564}},{{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,(void*)0,&l_1564},{&l_1564,&l_1564,&l_1564}},{{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,(void*)0,&l_1564}},{{&l_1564,&l_1564,&l_1564},{(void*)0,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564}},{{&l_1564,(void*)0,&l_1564},{&l_1564,&l_1564,&l_1564},{(void*)0,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564},{&l_1564,&l_1564,&l_1564}}};
    struct S0 *l_1610 = &g_144;
    int8_t * const l_1635 = (void*)0;
    int64_t *l_1641[4][6][5] = {{{&g_1353,&g_393.f0,&g_1353,&g_392[4].f0,(void*)0},{&g_56.f0,&l_1468.f0,&g_56.f0,&g_393.f0,&g_56.f0},{(void*)0,&g_56.f0,&g_392[4].f0,&g_392[4].f0,(void*)0},{(void*)0,&g_63,&g_56.f0,(void*)0,&g_56.f0},{&g_1353,&g_1353,&g_392[4].f0,(void*)0,(void*)0},{&g_63,(void*)0,&g_56.f0,&g_63,(void*)0}},{{&g_392[4].f0,(void*)0,&g_1353,(void*)0,(void*)0},{&g_56.f0,(void*)0,(void*)0,&g_392[4].f0,&l_1468.f0},{&g_393.f0,&g_1353,&g_56.f0,&g_1353,(void*)0},{&g_1353,&g_63,&g_56.f0,&g_63,&g_1353},{&g_393.f0,&g_56.f0,&g_393.f0,(void*)0,&g_1353},{&g_56.f0,&l_1468.f0,&l_1468.f0,(void*)0,&g_56.f0}},{{&g_392[4].f0,&g_393.f0,&g_56.f0,&g_56.f0,&g_1353},{&g_63,(void*)0,&g_1353,&g_393.f0,&g_1353},{&g_1353,&g_56.f0,&g_1353,(void*)0,(void*)0},{(void*)0,&l_1468.f0,(void*)0,&g_393.f0,&l_1468.f0},{(void*)0,&g_392[4].f0,&g_392[4].f0,&g_56.f0,(void*)0},{&g_56.f0,&g_63,(void*)0,(void*)0,(void*)0}},{{&g_1353,&g_393.f0,&g_392[4].f0,(void*)0,(void*)0},{&g_56.f0,(void*)0,(void*)0,&g_63,&g_56.f0},{&g_392[4].f0,(void*)0,&g_1353,&g_1353,(void*)0},{(void*)0,(void*)0,&g_1353,&g_392[4].f0,&g_56.f0},{&g_393.f0,&g_393.f0,&g_56.f0,(void*)0,(void*)0},{&g_393.f0,&g_63,&l_1468.f0,&g_63,&g_393.f0}}};
    int32_t l_1722 = 0x8ADB1EB1L;
    uint8_t l_1734 = 0x7EL;
    uint32_t l_1736 = 0x512A4DDDL;
    int i, j, k;
lbl_1487:
    (*l_1469) = l_1468;
    l_1472 |= l_1470;
    for (g_56.f3 = (-23); (g_56.f3 <= 53); ++g_56.f3)
    { 
        uint32_t l_1477 = 0xEDE2635BL;
        uint32_t ****l_1478[4][1][4] = {{{&g_596,&g_596,&g_596,&g_596}},{{&g_596,&g_596,&g_596,&g_596}},{{&g_596,&g_596,&g_596,&g_596}},{{&g_596,&g_596,&g_596,&g_596}}};
        struct S1 l_1480 = {0x358E1B03C0CC8890LL,65535UL,0xA3619FA4L,0x1118L,0L,0x1A24B48BL};
        int32_t l_1492 = 1L;
        int8_t l_1537 = 0xB0L;
        int32_t l_1543 = 0L;
        int32_t l_1546 = (-1L);
        uint16_t l_1559 = 0UL;
        uint32_t l_1613[4];
        int32_t *l_1690 = &l_1546;
        uint16_t *l_1725 = &g_393.f3;
        uint64_t *l_1735 = &g_1604;
        union U2 ***l_1737[2];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1613[i] = 1UL;
        for (i = 0; i < 2; i++)
            l_1737[i] = (void*)0;
        for (g_56.f2 = 0; (g_56.f2 > 31); g_56.f2++)
        { 
            if (p_23)
                break;
        }
        l_1480 = (((l_1477 , l_1478[2][0][1]) == (func_38(p_23) , l_1479[3][0])) , (*l_1469));
        if ((~p_21.f0))
        { 
            uint32_t l_1482 = 2UL;
            int32_t l_1488 = 0xEA6320D7L;
            int32_t l_1489 = 7L;
            int32_t l_1490[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1490[i] = 0xF7876AD3L;
            l_1482++;
            for (l_1468.f0 = (-25); (l_1468.f0 <= (-16)); l_1468.f0++)
            { 
                int32_t l_1491 = 1L;
                uint8_t l_1493 = 255UL;
                union U3 l_1500 = {0x84E9L};
                if (l_1468.f0)
                    goto lbl_1487;
                ++l_1493;
                for (g_1047 = (-30); (g_1047 < (-11)); ++g_1047)
                { 
                    uint64_t l_1505 = 8UL;
                    int32_t l_1506 = 0L;
                    l_1506 ^= ((p_22.f0 & (0xB0L <= ((((safe_rshift_func_int8_t_s_u((((p_22.f0 < (l_1500 , (safe_rshift_func_uint16_t_u_u((((!(p_23 != p_22.f0)) || (g_60 != l_1504)) & 1UL), l_1488)))) && 18446744073709551613UL) & 0x3D7EF53E832F1743LL), 2)) , p_22.f0) != 0x198CA11DD0F2ACD6LL) , 0L))) != l_1505);
                    return p_23;
                }
            }
        }
        else
        { 
            int32_t l_1521 = 1L;
            uint32_t *l_1532 = &g_438;
            uint32_t ** const l_1531[2] = {&l_1532,&l_1532};
            uint32_t ** const *l_1530 = &l_1531[0];
            uint32_t ** const **l_1529 = &l_1530;
            int32_t l_1541 = 0xE32DC645L;
            uint8_t l_1547 = 4UL;
            int i;
            (*l_1469) = func_38((safe_mul_func_int8_t_s_s((**g_1193), p_22.f0)));
            for (l_1468.f0 = 0; l_1468.f0 < 6; l_1468.f0 += 1)
            {
                for (g_56.f0 = 0; g_56.f0 < 3; g_56.f0 += 1)
                {
                    for (g_56.f2 = 0; g_56.f2 < 5; g_56.f2 += 1)
                    {
                        g_96[l_1468.f0][g_56.f0][g_56.f2] = (-4L);
                    }
                }
            }
            if (p_21.f0)
                continue;
            for (g_438 = 0; (g_438 <= 6); g_438 += 1)
            { 
                int8_t l_1509[3][4] = {{(-1L),(-1L),1L,0x3DL},{(-9L),(-1L),(-9L),1L},{(-9L),1L,1L,(-9L)}};
                union U2 l_1516 = {0xC5F3L};
                uint32_t ****l_1533 = (void*)0;
                uint32_t *l_1538 = (void*)0;
                int32_t l_1540[2][2][1] = {{{0L},{(-3L)}},{{0L},{(-3L)}}};
                int32_t l_1544 = 0x0ABA92DCL;
                int32_t *l_1566 = &g_392[4].f5;
                int32_t *l_1567 = &g_393.f5;
                union U3 ****l_1568 = &g_758;
                union U3 *****l_1569 = (void*)0;
                union U3 *****l_1570[2][3] = {{(void*)0,&l_1568,&l_1568},{&l_1568,&l_1568,&l_1568}};
                struct S1 ***l_1586 = (void*)0;
                struct S1 ****l_1585 = &l_1586;
                uint64_t *l_1598 = (void*)0;
                uint64_t *l_1599 = &g_204;
                uint64_t *l_1603 = &g_1604;
                uint64_t *l_1605 = &g_1606;
                int16_t *l_1608[6];
                int16_t **l_1607[7][5] = {{(void*)0,&l_1608[2],&l_1608[0],&l_1608[2],(void*)0},{&l_1608[2],&l_1608[5],&l_1608[3],&l_1608[5],&l_1608[2]},{(void*)0,&l_1608[2],&l_1608[0],&l_1608[2],(void*)0},{&l_1608[2],&l_1608[5],&l_1608[3],&l_1608[5],&l_1608[2]},{(void*)0,&l_1608[2],&l_1608[0],&l_1608[2],(void*)0},{&l_1608[2],&l_1608[5],&l_1608[3],&l_1608[5],&l_1608[2]},{(void*)0,&l_1608[2],&l_1608[0],&l_1608[2],(void*)0}};
                int16_t ***l_1609 = &l_1607[6][3];
                struct S0 **l_1611 = &l_1610;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1608[i] = &g_393.f4;
                for (g_6 = 6; (g_6 >= 0); g_6 -= 1)
                { 
                    uint32_t ** const l_1528 = (void*)0;
                    uint32_t ** const *l_1527[4];
                    uint32_t ** const **l_1526 = &l_1527[1];
                    int32_t l_1534 = 0xAA4B02E2L;
                    int32_t l_1535 = 0L;
                    uint16_t *l_1536 = &g_418.f0;
                    int32_t l_1542 = 0xD3BDDEA2L;
                    int32_t l_1545 = 1L;
                    int8_t ** const l_1556 = (void*)0;
                    uint64_t *l_1557 = (void*)0;
                    uint64_t *l_1558 = &g_204;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1527[i] = &l_1528;
                    l_1492 |= (p_21.f1 = (l_1509[1][1] && (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((((l_1516 , (((*l_1536) = ((*g_379) = (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_1521, 7)), (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((((l_1529 = l_1526) != (g_56.f0 , l_1533)) == (l_1534 |= p_21.f0)), l_1535)) >= p_21.f0), l_1535)))))) != l_1537)) , l_1538) != l_1539[4]), 0x488097079952CA2BLL)) == g_392[4].f0), 0x5815L)) , g_3[0]), p_22.f0))));
                    ++l_1547;
                    l_1535 &= (l_1541 = (g_1560 &= (safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u(0x82A044C9656BB38BLL, 0xDDED275954528266LL)), ((l_1540[0][0][0] > (safe_lshift_func_int16_t_s_u((((((*g_1192) != l_1556) != ((0UL > (((*l_1558) = ((void*)0 != (***g_1147))) <= l_1559)) & p_22.f0)) || (*g_1194)) | l_1546), l_1542))) == p_21.f1)))));
                    if (p_22.f0)
                        continue;
                }
                if (((safe_rshift_func_uint16_t_u_s(((l_1563[2][1][1] != (((*l_1567) |= ((*l_1566) ^= 0x59D12CFEL)) , (g_1571 = l_1568))) | ((l_1541 >= (l_1521 = ((l_1547 , (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_1480.f1 || ((p_21.f0 && l_1509[1][1]) && 18446744073709551615UL)), l_1480.f4)), (***g_1148))), 5)), 4))) > g_1582))) <= 0x25134AFFE246DE41LL)), g_392[4].f4)) , p_23))
                { 
                    int i;
                    if (g_1047)
                        goto lbl_1487;
                    (*g_387) = &g_392[g_438];
                }
                else
                { 
                    struct S1 *****l_1587 = &l_1585;
                    l_1521 |= (safe_lshift_func_uint8_t_u_u((***g_1148), 1));
                    if (p_23)
                        continue;
                    (*l_1587) = l_1585;
                    return l_1480.f0;
                }
                (*l_1609) = (func_38((((*l_1605) = (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((((safe_add_func_int64_t_s_s(((p_21.f1 = (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_1477 || (p_21.f0 >= (((*l_1599) = l_1559) <= (~(-10L))))), ((*g_379) |= ((((g_56.f4 != ((*l_1603) = ((safe_add_func_int8_t_s_s((((-9L) <= (p_23 <= g_1560)) == l_1516.f0), (**g_1193))) != p_23))) <= l_1540[1][0][0]) != l_1509[1][1]) < l_1509[1][2])))), (****g_1147)))) || p_21.f0), p_22.f0)) ^ 0x14632EC3L) , (-8L)) <= p_22.f0), p_23)), l_1540[0][0][0]))) >= 7UL)) , l_1607[6][3]);
                (*l_1469) = l_1480;
                (*l_1611) = l_1610;
                for (g_1604 = 0; (g_1604 <= 2); g_1604 += 1)
                { 
                    int32_t l_1612[2][7][5] = {{{0x04D6C7EAL,0x0DA69023L,0xA9AE878FL,0x46862044L,(-4L)},{0x04D6C7EAL,(-4L),0xE9BDF9B6L,0xDFBDFB99L,0xDFBDFB99L},{0x46862044L,0xFBB3229EL,0x46862044L,0x0DA69023L,(-4L)},{0L,0xDFBDFB99L,(-4L),0x0DA69023L,0x46862044L},{(-4L),0xE9BDF9B6L,0xDFBDFB99L,0xDFBDFB99L,0xE9BDF9B6L},{0xE9BDF9B6L,(-6L),(-4L),0x46862044L,0xA9AE878FL},{0xFBB3229EL,(-6L),0x46862044L,0x58D1B63CL,0x58D2E057L}},{{(-4L),0xE9BDF9B6L,0xE9BDF9B6L,(-4L),0x58D1B63CL},{0xFBB3229EL,0xDFBDFB99L,0xA9AE878FL,0x04D6C7EAL,0x58D1B63CL},{0xE9BDF9B6L,0xFBB3229EL,0x58D2E057L,(-4L),0x58D2E057L},{(-4L),(-4L),0x58D1B63CL,0x04D6C7EAL,0xA9AE878FL},{0L,0x0DA69023L,0x58D1B63CL,(-4L),0xE9BDF9B6L},{0x46862044L,0x58D1B63CL,0x58D2E057L,0x58D1B63CL,0x46862044L},{0x04D6C7EAL,0x0DA69023L,0xA9AE878FL,0x46862044L,(-4L)}}};
                    int32_t **l_1628 = (void*)0;
                    int32_t **l_1629 = (void*)0;
                    int32_t **l_1630 = &l_1471[1][0][1];
                    int i, j, k;
                    l_1613[1]++;
                    (*l_1630) = func_33((safe_add_func_int16_t_s_s(g_1046[g_1604], 1L)), (safe_mod_func_uint8_t_u_u((p_22.f0 || (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u((l_1541 , (((65535UL ^ (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((func_38((((-9L) | p_21.f0) >= g_989)) , 0x9D57L), p_23)) | (**g_1058)), (**g_1149)))) == g_56.f4) || p_23)), g_1046[g_1604])), 0xB724F2B8L))), (***g_1148))), g_1046[g_1604], g_1007.f4);
                }
            }
        }
        if ((safe_sub_func_int32_t_s_s((0UL > (p_21.f0 < (((**g_1058) = (((&g_1193 != (func_27(&l_1537, &l_1546, l_1537, (**g_759)) , (void*)0)) == g_1633) < g_561[0][2][1])) | l_1613[1]))), l_1480.f3)))
        { 
            const int32_t l_1642 = 0xD4CA180EL;
            int32_t l_1645[3];
            uint16_t *l_1667[5][1][2] = {{{&g_1582,&g_1582}},{{&g_1582,&g_1582}},{{&g_1582,&g_1582}},{{&g_1582,&g_1582}},{{&g_1582,&g_1582}}};
            int8_t * const l_1685 = &l_1537;
            union U3 ****l_1687 = &g_758;
            union U3 ****l_1688 = &g_758;
            struct S1 *l_1689 = &l_1480;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1645[i] = 0x62FCCA98L;
            if (((((+((l_1635 == ((**g_1192) = (**g_1192))) < ((1UL && (g_1638[1] != (void*)0)) && ((p_23 &= 0x1FL) != ((l_1641[1][0][4] != l_1641[1][0][4]) >= 0x8C37CDB3E7045CB8LL))))) <= 3L) == 2UL) && l_1642))
            { 
                if (p_22.f0)
                    break;
            }
            else
            { 
                int32_t l_1646[4];
                int32_t l_1647 = 0x2FF03CF7L;
                uint8_t l_1648 = 0x9FL;
                int16_t *l_1664 = &g_393.f4;
                const struct S0 *l_1680 = (void*)0;
                int i;
                for (i = 0; i < 4; i++)
                    l_1646[i] = 9L;
                for (g_1051 = 0; (g_1051 != 5); g_1051++)
                { 
                    l_1648++;
                }
                l_1647 ^= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((***g_1192), 0)) , (((*g_379) ^= (l_1480.f5 <= (((~g_63) != ((safe_sub_func_uint32_t_u_u(0x1D49895DL, p_22.f0)) && (safe_mul_func_int16_t_s_s((l_1546 = ((*l_1664) ^= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((**g_1193), 0)), ((((void*)0 != (*g_759)) >= p_22.f0) <= l_1477))))), 3UL)))) || l_1642))) || (-1L))), p_23));
                for (g_56.f0 = 0; (g_56.f0 > 8); g_56.f0++)
                { 
                    uint32_t l_1675 = 0xC8A96732L;
                    int32_t **l_1676 = (void*)0;
                    int32_t **l_1677 = &l_1471[2][0][1];
                    const struct S0 **l_1681 = &l_1680;
                    const struct S1 l_1686 = {-1L,0x7D35L,1UL,0x4CFEL,0xF5F0L,0xD0B4E6B1L};
                    l_1492 = ((1L || p_22.f0) , ((((**g_130) , (void*)0) == l_1667[4][0][0]) == (((**g_1193) ^ ((safe_div_func_int64_t_s_s(((+((--p_21.f0) < ((safe_div_func_int64_t_s_s(0x4CBF0B5AC8B2B095LL, l_1675)) , g_392[4].f1))) < 0x4C38L), l_1559)) & 8UL)) >= 1UL)));
                    (*l_1677) = &l_1647;
                    (*l_1469) = (((((((*g_1194) < (1UL | (safe_mod_func_uint64_t_u_u((((*g_1411) = (((*l_1681) = l_1680) != l_1610)) < (-5L)), (safe_add_func_int32_t_s_s(((g_1684 = &p_23) != l_1685), p_21.f0)))))) < 8L) && p_23) , 0x4887D6A9L) == 0x979328D5L) , l_1686);
                    l_1688 = l_1687;
                }
            }
            (*g_387) = l_1689;
        }
        else
        { 
            uint32_t l_1710[5][4][5] = {{{4294967286UL,0x44AAA837L,0xAF3F984AL,0UL,0x05E64F9FL},{0UL,3UL,0xB80EC70DL,0x7347CC29L,0x7347CC29L},{0x9272D0C0L,0xFC9D3F91L,0x9272D0C0L,0UL,0x7AC926C9L},{7UL,0x0E1F01E6L,0x7347CC29L,0x0E1F01E6L,7UL}},{{0x9272D0C0L,0xC1D4F014L,4294967292UL,0x44AAA837L,4294967292UL},{0UL,0UL,0x7347CC29L,7UL,0UL},{4294967286UL,0UL,0x9272D0C0L,0xC1D4F014L,4294967292UL},{0x0E1F01E6L,7UL,0xB80EC70DL,0xB80EC70DL,7UL}},{{4294967292UL,0UL,0xAF3F984AL,1UL,0x7AC926C9L},{3UL,0UL,3UL,0xB80EC70DL,0x7347CC29L},{0x05E64F9FL,0xC1D4F014L,0x7AC926C9L,0xC1D4F014L,0x05E64F9FL},{3UL,0x0E1F01E6L,0UL,7UL,0UL}},{{4294967292UL,0xFC9D3F91L,0x7AC926C9L,0x44AAA837L,0x2BB14169L},{0x0E1F01E6L,3UL,3UL,0x0E1F01E6L,0UL},{4294967286UL,0x44AAA837L,0x7AC926C9L,1UL,0xAF3F984AL},{0UL,7UL,0x7347CC29L,0UL,0UL}},{{0x05E64F9FL,0UL,0x05E64F9FL,1UL,4294967292UL},{0xB80EC70DL,3UL,0UL,3UL,0xB80EC70DL},{0x05E64F9FL,0UL,0x2BB14169L,0UL,0x2BB14169L},{0UL,0UL,0UL,0xB80EC70DL,0x0E1F01E6L}}};
            int32_t l_1715[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1715[i] = (-1L);
            if (l_1613[1])
                break;
            l_1690 = (void*)0;
            for (l_1468.f1 = 0; (l_1468.f1 <= 2); l_1468.f1 += 1)
            { 
                uint32_t l_1693 = 4UL;
                uint64_t *l_1709 = &g_1604;
                int32_t l_1711 = 0x3FADADAAL;
                int32_t **l_1712 = (void*)0;
                int32_t *l_1714[3];
                int32_t **l_1713 = &l_1714[1];
                int32_t l_1716 = (-1L);
                int i;
                for (i = 0; i < 3; i++)
                    l_1714[i] = &g_887[1];
                for (l_1492 = 6; (l_1492 >= 0); l_1492 -= 1)
                { 
                    int32_t *l_1691 = &g_1046[0];
                    int32_t **l_1692 = &l_1690;
                    (*l_1692) = l_1691;
                }
                if (l_1693)
                    break;
                l_1716 ^= ((safe_add_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((l_1715[1] = ((*g_379) = ((g_1046[l_1468.f1] = ((safe_mod_func_int64_t_s_s(p_23, 0x0E0529BF13C1AE05LL)) != (safe_mul_func_int8_t_s_s(((((*l_1713) = (((safe_mul_func_uint16_t_u_u((p_22.f0 , ((*g_1194) < (**g_1193))), 0x5C61L)) != (((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u(((*l_1709) = 0xE7D92A5BB58D2EEELL))) >= g_989), l_1710[1][0][4])) , l_1711) , 0UL)) , (void*)0)) != (void*)0) | p_23), p_21.f0)))) || p_21.f0))), g_1047)) >= p_21.f0), 0x2E3EAD9128C6D5D0LL)) || 0x54BE58D5L), 0x8D738E62D122FA7ALL)) < g_96[4][0][2]);
            }
            l_1546 = p_21.f0;
        }
    }
    return p_21.f0;
}



static union U2  func_24(union U2  p_25, int32_t * p_26)
{ 
    struct S1 *l_934 = &g_392[4];
    int32_t l_941 = 0xAA012681L;
    int64_t *l_947 = &g_63;
    int64_t **l_946[5][7] = {{&l_947,&l_947,&l_947,&l_947,&l_947,&l_947,&l_947},{&l_947,&l_947,&l_947,&l_947,&l_947,&l_947,&l_947},{&l_947,&l_947,&l_947,&l_947,&l_947,&l_947,&l_947},{&l_947,&l_947,&l_947,&l_947,&l_947,&l_947,&l_947},{&l_947,&l_947,&l_947,&l_947,&l_947,&l_947,&l_947}};
    int8_t *l_948[3][2] = {{&g_888,&g_888},{&g_888,&g_888},{&g_888,&g_888}};
    int32_t l_949 = 0x38E9DEA5L;
    uint64_t l_950 = 0x4FA1C86DB88E7BC1LL;
    uint8_t *l_951 = &g_330;
    int32_t l_952 = (-2L);
    uint8_t **l_956[3];
    uint8_t ***l_955 = &l_956[0];
    union U2 *l_965[2];
    uint32_t l_980[2][1][2];
    int32_t *l_996 = &l_941;
    struct S1 l_1036[2][1] = {{{0xF017EA892D1B96DELL,1UL,4294967293UL,0xB72FL,0x3D1FL,-1L}},{{0xF017EA892D1B96DELL,1UL,4294967293UL,0xB72FL,0x3D1FL,-1L}}};
    int64_t **l_1060[3][5] = {{&l_947,&l_947,(void*)0,&l_947,(void*)0},{&l_947,&l_947,(void*)0,&l_947,(void*)0},{&l_947,&l_947,(void*)0,&l_947,(void*)0}};
    struct S1 *l_1068 = (void*)0;
    int32_t l_1076 = 1L;
    int32_t l_1077 = 0xF468A593L;
    int32_t l_1078 = 0x03785BCEL;
    int32_t l_1079 = 0L;
    int32_t l_1080[5][5] = {{0xB21DD71EL,1L,0xB21DD71EL,1L,0xB21DD71EL},{0x15CA1AA4L,0x15CA1AA4L,0x15CA1AA4L,0x15CA1AA4L,0x15CA1AA4L},{0xB21DD71EL,1L,0xB21DD71EL,1L,0xB21DD71EL},{0x15CA1AA4L,0x15CA1AA4L,0x15CA1AA4L,0x15CA1AA4L,0x15CA1AA4L},{0xB21DD71EL,1L,0xB21DD71EL,1L,0xB21DD71EL}};
    const struct S0 l_1107[2][2] = {{{0xEF4DC09DL,0L},{0xEF4DC09DL,0L}},{{0xEF4DC09DL,0L},{0xEF4DC09DL,0L}}};
    union U3 * const *l_1168 = &g_108;
    int32_t l_1179 = 1L;
    uint32_t *l_1181 = &l_1036[0][0].f2;
    uint32_t l_1203 = 0UL;
    const uint16_t *l_1212 = &g_109.f0;
    uint32_t l_1235 = 0x5AF7E48AL;
    uint16_t l_1251 = 65535UL;
    union U3 l_1325 = {65527UL};
    uint64_t l_1355[4] = {0x876A91544FE0209DLL,0x876A91544FE0209DLL,0x876A91544FE0209DLL,0x876A91544FE0209DLL};
    int32_t l_1358[5] = {1L,1L,1L,1L,1L};
    int32_t ***l_1363 = &g_168[0];
    struct S1 ***l_1398 = (void*)0;
    uint16_t l_1414 = 0xF47FL;
    uint16_t l_1428 = 0xCF17L;
    union U2 **l_1440[5] = {&g_967,&g_967,&g_967,&g_967,&g_967};
    union U2 ***l_1439[2][6] = {{&l_1440[2],&l_1440[4],&l_1440[2],&l_1440[2],&l_1440[4],&l_1440[2]},{&l_1440[2],&l_1440[4],&l_1440[2],&l_1440[2],&l_1440[4],&l_1440[2]}};
    int32_t l_1466 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_956[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_965[i] = &g_418;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_980[i][j][k] = 1UL;
        }
    }
    return p_25;
}



static struct S0  func_27(int8_t * const  p_28, int32_t * const  p_29, int64_t  p_30, union U3  p_31)
{ 
    uint8_t l_526 = 255UL;
    int32_t *l_527 = &g_418.f1;
    int32_t *l_528 = (void*)0;
    int32_t *l_529 = &g_3[0];
    uint8_t *l_532 = &g_330;
    uint16_t ****l_540 = &g_538;
    uint16_t *** const l_541[1][1] = {{&g_539}};
    struct S0 l_542[3][1] = {{{3UL,4L}},{{3UL,4L}},{{3UL,4L}}};
    int16_t *l_543 = &g_96[4][0][3];
    int16_t **l_544 = &l_543;
    const uint8_t l_545 = 1UL;
    int64_t l_546[1][3][4] = {{{0x12E537FB5705679CLL,0x12E537FB5705679CLL,0x12E537FB5705679CLL,0x12E537FB5705679CLL},{0x12E537FB5705679CLL,0x12E537FB5705679CLL,0x12E537FB5705679CLL,0x12E537FB5705679CLL},{0x12E537FB5705679CLL,0x12E537FB5705679CLL,0x12E537FB5705679CLL,0x12E537FB5705679CLL}}};
    uint8_t *l_547 = &l_526;
    uint16_t l_567[5][3][4] = {{{0xE189L,1UL,1UL,4UL},{8UL,1UL,2UL,1UL},{2UL,1UL,8UL,4UL}},{{1UL,1UL,0xE189L,2UL},{65528UL,0UL,0UL,65528UL},{65528UL,4UL,0xE189L,8UL}},{{1UL,65528UL,8UL,0x3743L},{2UL,0x1943L,2UL,0x3743L},{8UL,65528UL,0x1943L,1UL}},{{2UL,65528UL,0UL,0UL},{0x3743L,0x3743L,0UL,4UL},{2UL,8UL,0x1943L,65528UL}},{{0xE189L,0x1943L,4UL,0x1943L},{4UL,0x1943L,0xE189L,65528UL},{0x1943L,8UL,2UL,4UL}}};
    uint16_t l_568 = 0x0A02L;
    int32_t l_572 = 8L;
    uint32_t l_590 = 4294967295UL;
    const uint64_t l_638 = 0x0B14EAC6EAF2F0CFLL;
    union U3 l_639[7][2] = {{{65535UL},{65535UL}},{{65535UL},{65535UL}},{{65535UL},{65535UL}},{{65535UL},{65535UL}},{{65535UL},{65535UL}},{{65535UL},{65535UL}},{{65535UL},{65535UL}}};
    int32_t l_661 = 0x9C8EC2B2L;
    struct S1 l_696 = {0x275B0C1433359704LL,1UL,1UL,65535UL,0L,0x755DE046L};
    struct S1 *l_717[7];
    union U3 ** const l_751 = &g_108;
    union U3 ** const *l_750 = &l_751;
    int32_t l_787[2][6] = {{0xF5B834A1L,0xF5B834A1L,(-10L),0x207B5773L,(-10L),0xF5B834A1L},{(-10L),0x7D54E5A1L,0x207B5773L,0x207B5773L,0x7D54E5A1L,(-10L)}};
    int8_t l_806 = (-8L);
    int64_t l_834 = 0xA60E05745F23F5DFLL;
    uint8_t l_876 = 0x7BL;
    uint16_t l_890[6][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
    int32_t l_920 = 0x57CAD04BL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_717[i] = &g_392[4];
    (*l_529) &= l_526;
    return g_144;
}



static int32_t * func_33(uint64_t  p_34, int32_t  p_35, uint8_t  p_36, uint64_t  p_37)
{ 
    uint16_t ** const l_471 = (void*)0;
    uint16_t **l_473[6][1] = {{&g_379},{(void*)0},{&g_379},{(void*)0},{&g_379},{(void*)0}};
    uint16_t ***l_472[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint16_t ***l_474 = &l_473[0][0];
    int32_t l_482 = 0L;
    int32_t l_483 = 0xEB2FF6FAL;
    int8_t *l_492 = (void*)0;
    int32_t l_504 = 0x3E8B7B4BL;
    int32_t l_505 = 0L;
    int32_t l_506 = 0x4034AD46L;
    int32_t l_509 = 0x55EB21EFL;
    int32_t l_511 = 0xF77C4F57L;
    int32_t l_512 = 0x229E320EL;
    int32_t l_513[5] = {0L,0L,0L,0L,0L};
    int32_t l_514 = (-1L);
    int32_t *l_524 = (void*)0;
    int i, j;
    (*l_474) = l_471;
    for (g_56.f0 = (-29); (g_56.f0 > (-6)); g_56.f0 = safe_add_func_int8_t_s_s(g_56.f0, 3))
    { 
        int16_t l_477[4][4][4] = {{{0xB21DL,9L,0xE236L,9L},{0xCDF6L,0x3BF8L,0xDE2DL,0x5A9DL},{(-6L),0xC2FBL,0x5A9DL,0xCDF6L},{(-6L),6L,0xDE2DL,0xDE2DL}},{{0xCDF6L,0xCDF6L,0xE236L,1L},{0xB21DL,0xE236L,(-1L),9L},{0xDE2DL,9L,0x6778L,(-1L)},{(-1L),9L,0xCDF6L,9L}},{{9L,0xE236L,9L,1L},{6L,0xCDF6L,0x3BF8L,0xDE2DL},{9L,6L,1L,0xCDF6L},{9L,0xC2FBL,1L,0x5A9DL}},{{9L,0x3BF8L,0x3BF8L,9L},{6L,9L,9L,(-1L)},{9L,(-1L),0xCDF6L,0xC2FBL},{(-1L),(-6L),0x6778L,0xC2FBL}}};
        int32_t l_481 = 5L;
        struct S1 l_494 = {0x78404F645141DF33LL,0x0F3AL,9UL,65529UL,2L,0L};
        int8_t *l_495 = &g_60;
        int32_t l_501 = 1L;
        int32_t l_502 = 9L;
        int32_t l_503 = 0x7E541C4DL;
        int32_t l_507 = 0x00A41456L;
        int32_t l_508 = (-1L);
        int32_t l_510[7] = {1L,1L,1L,1L,1L,1L,1L};
        int64_t *l_520[1][7];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_520[i][j] = &l_494.f0;
        }
        l_477[1][2][2] |= p_35;
        for (g_393.f2 = (-13); (g_393.f2 <= 40); g_393.f2 = safe_add_func_uint16_t_u_u(g_393.f2, 9))
        { 
            int32_t *l_480[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t l_484 = 18446744073709551615UL;
            uint32_t *l_491 = &g_392[4].f2;
            int8_t **l_493 = &l_492;
            int i;
            ++l_484;
            p_35 |= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((l_481 != ((*l_491) = l_482)), 2)), 14));
            l_483 = (((*l_493) = l_492) == (l_494 , l_495));
            if (l_481)
                break;
            for (p_35 = 0; (p_35 <= 1); p_35 += 1)
            { 
                int32_t *l_496 = &l_483;
                return l_491;
            }
        }
        for (g_63 = 0; (g_63 >= 11); ++g_63)
        { 
            int32_t *l_499 = &g_3[0];
            int32_t *l_500[5][5][5] = {{{&l_482,&g_3[0],&g_3[0],&g_3[0],&l_482},{&l_483,(void*)0,&g_3[0],&l_483,(void*)0},{(void*)0,&g_3[0],(void*)0,&g_3[0],&l_482},{&g_3[0],(void*)0,(void*)0,(void*)0,(void*)0},{&l_482,&g_3[0],&l_482,(void*)0,&l_482}},{{(void*)0,&g_3[0],(void*)0,&l_483,&g_3[0]},{&l_482,(void*)0,(void*)0,&l_483,(void*)0},{(void*)0,(void*)0,&g_3[0],&g_3[0],&l_483},{&l_482,&l_483,&g_3[0],&l_483,&l_482},{&g_3[0],(void*)0,(void*)0,&l_483,&l_483}},{{(void*)0,&l_483,(void*)0,(void*)0,&l_482},{&l_483,(void*)0,&g_3[0],(void*)0,&l_483},{&l_482,(void*)0,&l_482,&g_3[0],&l_482},{&l_483,&g_3[0],&g_3[0],&l_483,&l_483},{&l_482,&g_3[0],(void*)0,&g_3[0],(void*)0}},{{&l_483,(void*)0,(void*)0,&g_3[0],&g_3[0]},{&l_482,&g_3[0],&g_3[0],&g_3[0],&l_482},{&l_483,(void*)0,&g_3[0],&l_483,(void*)0},{(void*)0,&g_3[0],(void*)0,&g_3[0],&l_482},{&g_3[0],(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_482,&g_3[0],&l_482,(void*)0,&l_482},{(void*)0,&g_3[0],(void*)0,&l_483,&g_3[0]},{&l_482,(void*)0,(void*)0,&l_483,(void*)0},{(void*)0,(void*)0,&g_3[0],&g_3[0],&l_483},{&l_482,&l_483,&g_3[0],&l_483,&l_482}}};
            uint16_t l_515 = 1UL;
            int i, j, k;
            --l_515;
        }
        l_504 ^= (safe_mod_func_uint64_t_u_u(p_35, g_312[1]));
        if ((l_482 , ((l_510[2] = (*g_131)) > p_35)))
        { 
            for (g_56.f2 = 17; (g_56.f2 <= 18); g_56.f2++)
            { 
                (*g_387) = (*g_387);
            }
            l_503 = ((l_501 , &p_35) != &p_35);
        }
        else
        { 
            return g_523[1][5];
        }
    }
    return l_524;
}



static struct S1  func_38(uint16_t  p_39)
{ 
    uint8_t l_65 = 1UL;
    struct S1 l_68 = {3L,0x5411L,4UL,65533UL,-10L,0xCBB970F0L};
    const uint8_t l_83 = 0x6BL;
    int32_t l_84[2];
    int16_t l_101 = 0xB06BL;
    uint8_t l_104 = 0UL;
    uint16_t l_129 = 65532UL;
    int8_t l_134[4][5];
    int32_t *l_163 = &l_84[0];
    int32_t **l_162 = &l_163;
    int64_t * const l_180 = &l_68.f0;
    int64_t * const *l_179 = &l_180;
    int64_t * const **l_178 = &l_179;
    uint32_t l_186 = 18446744073709551607UL;
    uint64_t l_224 = 0UL;
    union U3 *l_234 = &g_235;
    int32_t * const l_256 = &g_3[0];
    int8_t l_280 = 0x4BL;
    int64_t *l_299 = &l_68.f0;
    uint64_t l_399 = 0x8E8E17B9FCCD8610LL;
    struct S1 l_411 = {4L,0UL,0x4B2D63D4L,0x4474L,0xAE32L,0x1222B066L};
    uint32_t *l_466 = &l_411.f2;
    int32_t *l_467 = &g_418.f1;
    int32_t l_468 = 1L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_84[i] = (-2L);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_134[i][j] = (-1L);
    }
    for (g_6 = 0; (g_6 <= 0); g_6 += 1)
    { 
        struct S1 l_55 = {1L,0xF733L,4294967290UL,65529UL,0x82D6L,1L};
        int8_t *l_59 = &g_60;
        uint32_t *l_61 = &l_55.f2;
        int64_t *l_62 = &g_63;
        int32_t *l_64 = (void*)0;
        int32_t l_91[4][6] = {{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}};
        int8_t l_97 = 0x16L;
        int64_t l_100 = 0x7B509B9A7E04E406LL;
        int8_t l_102 = (-4L);
        union U3 *l_176 = &g_109;
        int16_t *l_177 = &g_56.f4;
        int32_t l_252 = 4L;
        int i, j;
    }
    if (((void*)0 != (*l_162)))
    { 
        int8_t l_273 = 0x3EL;
        int32_t l_275 = 9L;
        int32_t l_281 = 0x89452014L;
        int32_t l_282 = 0x09365B0CL;
        int32_t l_283 = 0xD98B7E4EL;
        int32_t l_284[3][1][3] = {{{7L,7L,7L}},{{(-5L),(-5L),(-5L)}},{{7L,7L,7L}}};
        uint32_t l_285 = 0x0163384EL;
        int64_t *l_298 = &g_63;
        struct S1 l_324 = {0x27392E13DAE5BF86LL,0x384FL,0x99A27670L,0xFE41L,1L,0x53F0CBDEL};
        union U2 l_338 = {0xD9EEL};
        int8_t l_373 = 0x05L;
        uint16_t *l_380 = &l_68.f3;
        int64_t ** const l_416 = &l_298;
        int64_t ** const *l_415 = &l_416;
        union U3 *l_440 = &g_109;
        int i, j, k;
    }
    else
    { 
        uint8_t l_446 = 249UL;
        (*l_163) = (**l_162);
        (*l_256) &= (*l_163);
        --l_446;
    }
    l_468 ^= (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*g_379) = p_39), (((safe_add_func_int64_t_s_s((p_39 & ((*l_466) ^= ((*l_234) , (((((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u(1UL, (safe_mul_func_int8_t_s_s(5L, (-10L))))))) < (safe_add_func_uint32_t_u_u((*l_163), 4294967286UL))) || p_39) , &l_179) != &l_179)))), g_3[0])) , p_39) >= p_39))), g_96[5][2][2])), p_39)), p_39));
    return l_411;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_56.f5, "g_56.f5", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_235.f0, "g_235.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_312[i], "g_312[i]", print_hash_value);

    }
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_392[i].f0, "g_392[i].f0", print_hash_value);
        transparent_crc(g_392[i].f1, "g_392[i].f1", print_hash_value);
        transparent_crc(g_392[i].f2, "g_392[i].f2", print_hash_value);
        transparent_crc(g_392[i].f3, "g_392[i].f3", print_hash_value);
        transparent_crc(g_392[i].f4, "g_392[i].f4", print_hash_value);
        transparent_crc(g_392[i].f5, "g_392[i].f5", print_hash_value);

    }
    transparent_crc(g_393.f0, "g_393.f0", print_hash_value);
    transparent_crc(g_393.f1, "g_393.f1", print_hash_value);
    transparent_crc(g_393.f2, "g_393.f2", print_hash_value);
    transparent_crc(g_393.f3, "g_393.f3", print_hash_value);
    transparent_crc(g_393.f4, "g_393.f4", print_hash_value);
    transparent_crc(g_393.f5, "g_393.f5", print_hash_value);
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_561[i][j][k], "g_561[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_887[i], "g_887[i]", print_hash_value);

    }
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_1007.f0, "g_1007.f0", print_hash_value);
    transparent_crc(g_1007.f1, "g_1007.f1", print_hash_value);
    transparent_crc(g_1007.f2, "g_1007.f2", print_hash_value);
    transparent_crc(g_1007.f3, "g_1007.f3", print_hash_value);
    transparent_crc(g_1007.f4, "g_1007.f4", print_hash_value);
    transparent_crc(g_1007.f5, "g_1007.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1043[i], "g_1043[i]", print_hash_value);

    }
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1046[i], "g_1046[i]", print_hash_value);

    }
    transparent_crc(g_1047, "g_1047", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    transparent_crc(g_1051, "g_1051", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1291.f0, "g_1291.f0", print_hash_value);
    transparent_crc(g_1305, "g_1305", print_hash_value);
    transparent_crc(g_1353, "g_1353", print_hash_value);
    transparent_crc(g_1365, "g_1365", print_hash_value);
    transparent_crc(g_1560, "g_1560", print_hash_value);
    transparent_crc(g_1582, "g_1582", print_hash_value);
    transparent_crc(g_1604, "g_1604", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    transparent_crc(g_1633, "g_1633", print_hash_value);
    transparent_crc(g_1856, "g_1856", print_hash_value);
    transparent_crc(g_1878.f0, "g_1878.f0", print_hash_value);
    transparent_crc(g_1878.f1, "g_1878.f1", print_hash_value);
    transparent_crc(g_1992, "g_1992", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2034[i], "g_2034[i]", print_hash_value);

    }
    transparent_crc(g_2182.f0, "g_2182.f0", print_hash_value);
    transparent_crc(g_2182.f1, "g_2182.f1", print_hash_value);
    transparent_crc(g_2182.f2, "g_2182.f2", print_hash_value);
    transparent_crc(g_2182.f3, "g_2182.f3", print_hash_value);
    transparent_crc(g_2182.f4, "g_2182.f4", print_hash_value);
    transparent_crc(g_2182.f5, "g_2182.f5", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
