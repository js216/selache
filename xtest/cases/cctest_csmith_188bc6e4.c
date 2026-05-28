// SPDX-License-Identifier: MIT
// cctest_csmith_188bc6e4.c --- cctest case csmith_188bc6e4 (csmith seed 411813604)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf02443a0 */
/* @exp_ticks 0x4a9b */

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

// Options:   -s 411813604 -o /tmp/csmith_gen_w004m6c5/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
};

union U2 {
   const int32_t  f0;
};


static const int64_t g_4[4][5][3] = {{{(-1L),0xC04EE7D214C405B4LL,(-1L)},{(-2L),0x971867B8F5F49900LL,(-2L)},{(-1L),0xC04EE7D214C405B4LL,(-1L)},{(-2L),0x971867B8F5F49900LL,(-2L)},{(-1L),0xC04EE7D214C405B4LL,(-1L)}},{{(-2L),0x971867B8F5F49900LL,(-2L)},{(-1L),0xC04EE7D214C405B4LL,(-1L)},{(-2L),0x971867B8F5F49900LL,(-2L)},{(-1L),0xC04EE7D214C405B4LL,(-1L)},{(-2L),0x971867B8F5F49900LL,(-2L)}},{{(-1L),0xC04EE7D214C405B4LL,(-1L)},{(-2L),0x971867B8F5F49900LL,(-2L)},{(-1L),0xC04EE7D214C405B4LL,(-1L)},{(-2L),0x971867B8F5F49900LL,(-2L)},{(-1L),0xC04EE7D214C405B4LL,(-1L)}},{{(-2L),(-2L),0xBC3707822E6E7F73LL},{1L,(-1L),1L},{0xBC3707822E6E7F73LL,(-2L),0xBC3707822E6E7F73LL},{1L,(-1L),1L},{0xBC3707822E6E7F73LL,(-2L),0xBC3707822E6E7F73LL}}};
static int64_t g_8 = (-1L);
static int16_t g_31 = 1L;
static int32_t g_38 = 0x8ACDD1F6L;
static uint32_t g_89 = 1UL;
static union U2 g_114 = {0xF689573DL};
static uint32_t g_125 = 9UL;
static int64_t g_133 = 8L;
static struct S0 g_134[5][1] = {{{1UL}},{{0xD5E08C8AL}},{{1UL}},{{0xD5E08C8AL}},{{1UL}}};
static union U1 g_153 = {0xFB703A76A61A6B3FLL};
static int8_t g_195 = 0x5FL;
static int32_t g_199 = 0xE851E6A0L;
static int64_t g_210[5][3] = {{0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL},{0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL},{0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL},{0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL},{0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL,0xBDBD69BE9E0A6E09LL}};
static uint32_t g_214 = 1UL;
static int64_t g_215 = (-2L);
static struct S0 g_218 = {4UL};



static int16_t  func_1(void);
static union U2  func_9(union U2  p_10, const int8_t  p_11, int64_t  p_12, uint8_t  p_13, int16_t  p_14);
static const uint16_t  func_18(uint64_t  p_19, int64_t  p_20, uint64_t  p_21);
static int64_t  func_24(uint32_t  p_25, int8_t  p_26);




static int16_t  func_1(void)
{ 
    uint32_t l_7 = 0xEB2391CBL;
    union U2 l_15[5] = {{-1L},{-1L},{-1L},{-1L},{-1L}};
    int32_t l_176 = 2L;
    int32_t l_216 = (-8L);
    uint32_t l_217 = 0UL;
    int16_t l_235 = (-9L);
    int i;
lbl_219:
    g_8 = ((safe_mul_func_int8_t_s_s(g_4[0][4][1], ((safe_div_func_uint32_t_u_u(g_4[2][2][2], l_7)) != (0x5A9864BAL < 0x35EDADE0L)))) & g_4[0][4][1]);
    l_216 = (g_215 = ((((g_214 &= (func_9(l_15[1], ((((safe_rshift_func_uint16_t_u_s(func_18((safe_sub_func_int64_t_s_s(func_24((safe_sub_func_uint32_t_u_u(g_4[0][4][1], (((((-9L) == ((((g_31 = ((safe_mod_func_uint64_t_u_u(0UL, l_7)) && g_4[3][4][0])) != 0xCFL) > l_7) & 0x5FL)) ^ g_8) , 65532UL) , 0xADB51FD9L))), g_8), 0x6B1698A3390C0CC1LL)), g_4[0][0][1], g_133), 6)) , l_7) > l_15[1].f0) , g_114.f0), l_15[1].f0, l_176, l_7) , 0L)) , l_7) >= 0xC778EFA5L) <= l_15[1].f0));
    if (((l_216 |= 0x0B1250D9DD068715LL) > ((func_9(func_9(func_9(func_9(l_15[2], l_176, g_4[0][4][1], l_217, g_31), l_15[1].f0, l_7, l_15[1].f0, g_215), l_7, g_4[3][3][2], g_133, g_114.f0), g_134[0][0].f0, l_217, g_214, g_133) , (-1L)) ^ 0x526950C90199EC3FLL)))
    { 
        return l_15[1].f0;
    }
    else
    { 
        uint8_t l_228 = 0x03L;
        for (g_89 = 0; (g_89 <= 2); g_89 += 1)
        { 
            uint32_t l_221 = 0x3561A8A2L;
            if (g_153.f0)
                break;
            for (g_133 = 0; (g_133 <= 0); g_133 += 1)
            { 
                int32_t l_220 = 1L;
                int i, j;
                g_218 = (g_134[g_133][g_133] = g_134[(g_133 + 2)][g_133]);
                if (g_114.f0)
                    goto lbl_219;
                l_220 = g_210[(g_89 + 1)][g_89];
            }
            for (g_8 = 0; (g_8 >= 0); g_8 -= 1)
            { 
                g_38 = (-1L);
                return l_221;
            }
        }
        for (g_8 = 0; (g_8 != 10); ++g_8)
        { 
            int16_t l_224 = 0L;
            g_38 ^= (l_224 != (safe_add_func_int8_t_s_s((((g_4[1][0][1] & (~g_199)) || (((g_214 && 0x4F51L) & 0x438E2FDBL) > g_199)) <= 65531UL), l_228)));
            if ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((g_153.f0 < (((l_228 >= (safe_sub_func_int8_t_s_s(l_224, (0x06L || g_210[0][1])))) ^ l_235) != g_214)) || l_235), 10)), l_217)))
            { 
                g_38 |= (g_4[0][4][1] , (-1L));
                if (g_214)
                    continue;
            }
            else
            { 
                return l_228;
            }
        }
        for (l_235 = 0; l_235 < 5; l_235 += 1)
        {
            for (l_176 = 0; l_176 < 3; l_176 += 1)
            {
                g_210[l_235][l_176] = 0x4040728480904A3ELL;
            }
        }
    }
    return l_176;
}



static union U2  func_9(union U2  p_10, const int8_t  p_11, int64_t  p_12, uint8_t  p_13, int16_t  p_14)
{ 
    uint32_t l_177 = 0UL;
    int32_t l_178 = 0x759302C5L;
    int32_t l_203 = 0x36011996L;
    union U2 l_213 = {0x46DD524BL};
    l_178 &= l_177;
    for (g_89 = 0; (g_89 <= 0); g_89 += 1)
    { 
        uint16_t l_189 = 6UL;
        const int32_t l_190 = 0xB0F04E7FL;
        int32_t l_191 = 0x341E3A30L;
        struct S0 l_194 = {1UL};
        union U2 l_204[5] = {{0x0104BDE1L},{0x0104BDE1L},{0x0104BDE1L},{0x0104BDE1L},{0x0104BDE1L}};
        int i;
        if ((safe_add_func_uint8_t_u_u((l_191 = (safe_sub_func_int8_t_s_s(((+((((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((+(p_13 = ((0xCAD5L != (l_189 = ((g_4[2][1][2] == (p_12 | l_177)) , p_11))) >= l_190))) , 0xF268L) >= p_10.f0), l_190)), l_191)) , 0x48D3DA17L) || (-8L)) > 0xFB4D5399E5F1C336LL)) ^ g_153.f0), 0x0BL))), g_134[0][0].f0)))
        { 
            if (p_14)
                break;
            return g_114;
        }
        else
        { 
            uint8_t l_192[3][1][3] = {{{3UL,3UL,3UL}},{{0x4DL,247UL,0x4DL}},{{3UL,3UL,3UL}}};
            struct S0 l_193[1][4] = {{{0x2153381EL},{0x2153381EL},{0x2153381EL},{0x2153381EL}}};
            uint32_t l_196 = 0x5AC62A2EL;
            int i, j, k;
            l_192[0][0][0] |= (-1L);
            l_194 = l_193[0][0];
            ++l_196;
        }
        for (l_189 = 0; (l_189 <= 0); l_189 += 1)
        { 
            uint16_t l_200 = 0x96A2L;
            ++l_200;
            for (p_12 = 0; (p_12 >= 0); p_12 -= 1)
            { 
                int8_t l_207 = 0x2AL;
                g_38 = (((((0L < l_203) < (l_204[2] , (safe_sub_func_int64_t_s_s(((0x60L & (-4L)) ^ 9L), p_11)))) == g_134[0][0].f0) || l_207) | p_10.f0);
                if (p_14)
                    continue;
                g_38 = (safe_div_func_int16_t_s_s(l_203, (g_210[3][1] = (g_31 = l_191))));
            }
        }
    }
    for (g_8 = 0; (g_8 < (-27)); g_8--)
    { 
        return l_213;
    }
    return l_213;
}



static const uint16_t  func_18(uint64_t  p_19, int64_t  p_20, uint64_t  p_21)
{ 
    const int32_t l_175[3] = {0x20075B0AL,0x20075B0AL,0x20075B0AL};
    int i;
    return l_175[1];
}



static int64_t  func_24(uint32_t  p_25, int8_t  p_26)
{ 
    int16_t l_32[1][3][2] = {{{1L,1L},{1L,1L},{1L,1L}}};
    int32_t l_34 = 0x27438E21L;
    struct S0 l_39[1] = {{0UL}};
    int16_t l_49 = 0L;
    int64_t l_50 = 0x3D709C591EBB67A0LL;
    int32_t l_74[2];
    union U1 l_116 = {0xF78FF3A18F141530LL};
    uint64_t l_174 = 7UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_74[i] = 0x9930EDDBL;
    for (g_8 = 0; (g_8 <= 0); g_8 += 1)
    { 
        uint32_t l_33 = 0xDC23988FL;
        l_33 = g_8;
        for (p_25 = 0; (p_25 <= 0); p_25 += 1)
        { 
            uint32_t l_37 = 0xC1F4ACA6L;
            l_34 = 0xB78F18B0L;
            g_38 = (safe_mul_func_int8_t_s_s(g_31, (l_37 = p_25)));
            for (l_33 = 0; (l_33 <= 0); l_33 += 1)
            { 
                struct S0 l_40[2][3][3] = {{{{1UL},{3UL},{0x81DB3AACL}},{{0xFF9046E0L},{3UL},{3UL}},{{8UL},{3UL},{0x3FA3CE72L}}},{{{1UL},{3UL},{0x81DB3AACL}},{{0xFF9046E0L},{3UL},{3UL}},{{8UL},{3UL},{0x3FA3CE72L}}}};
                int i, j, k;
                l_40[1][2][1] = (l_39[0] , l_39[0]);
            }
        }
    }
    if ((safe_add_func_int8_t_s_s(g_4[3][4][1], ((p_26 = (p_26 || (safe_div_func_int16_t_s_s((l_50 &= ((safe_mul_func_int16_t_s_s((((safe_div_func_int64_t_s_s(l_49, 0x232AF72DA61EB613LL)) >= g_38) , 2L), 1L)) < 0UL)), 0x06A5L)))) , 0x0EL))))
    { 
        g_38 = l_39[0].f0;
    }
    else
    { 
        union U1 l_73 = {0x00FFBEBD5D228C8CLL};
        int32_t l_75 = 0x1E582B27L;
        int32_t l_88 = 0x704BE3C2L;
        if ((((safe_sub_func_uint32_t_u_u(((l_75 = ((((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((0x05C6596AAD9F1AA4LL && (safe_sub_func_uint8_t_u_u(0x72L, (((safe_add_func_uint32_t_u_u((p_25 && ((safe_add_func_uint16_t_u_u((l_74[1] |= (safe_mul_func_uint16_t_u_u(((l_34 = (((((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_31 = (l_73 , p_26)), l_73.f0)), 0xFCL)), 1UL)), p_26)) && l_73.f0) & g_4[0][4][1]) > p_26) & (-1L))) & p_25), l_49))), p_25)) | l_50)), p_25)) && l_73.f0) , 0x4AL)))), p_26)), l_73.f0)) < 65528UL) == l_32[0][2][0]) > (-1L))) ^ 7UL), 0L)) ^ g_4[0][4][2]) ^ g_38))
        { 
            return p_25;
        }
        else
        { 
            l_74[1] = (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(4UL, (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_75, (((l_88 &= g_4[0][1][0]) ^ (((g_89--) >= g_8) >= g_38)) ^ l_39[0].f0))), 0xD43AL)))), 0xBFL)), l_73.f0)), l_75));
        }
    }
    if (((~((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((g_38 = p_25) || (safe_unary_minus_func_int16_t_s((safe_sub_func_uint8_t_u_u(0x90L, 0x4EL))))), (g_89 = l_39[0].f0))), g_4[3][4][2])) ^ 1L), l_34)), p_26)) | g_4[2][4][2])) & 0xCE29L))
    { 
        const uint16_t l_115 = 0x6E49L;
        struct S0 l_126 = {1UL};
        int64_t l_143 = 0L;
lbl_149:
        g_38 = (((((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(0x818A95D68046A17DLL, (-4L))) == (safe_div_func_uint32_t_u_u(((((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_114 , (p_25 | 4L)), l_115)), l_50)) ^ p_26) >= 1UL) > g_4[3][3][1]) < l_34) , l_115), p_25))), 4)) , l_116) , p_25) && p_26) == p_26);
        if ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u((0x65F0L >= (p_25 , (l_115 > (g_125 ^= (p_26 & g_89))))), p_25)) | p_26) == p_25), 5)), 0x8AL)), p_26)))
        { 
            uint32_t l_129 = 0x21008EF7L;
            l_126 = l_39[0];
            l_129 = (safe_rshift_func_uint8_t_u_s(l_126.f0, 3));
        }
        else
        { 
            uint16_t l_136 = 0x1DA3L;
            int32_t l_144 = 0L;
            int64_t l_148 = 0x8531772C44E1F5B4LL;
            if ((safe_add_func_uint16_t_u_u(g_89, ((+g_89) ^ (l_32[0][1][1] > ((g_133 , 1UL) < 0x0028DF64L))))))
            { 
                l_74[1] = (p_26 >= 255UL);
            }
            else
            { 
                g_134[4][0] = g_134[0][0];
                g_134[3][0] = g_134[3][0];
                l_136 ^= (!g_4[3][2][1]);
            }
            if ((((p_26 & g_89) && (safe_rshift_func_uint8_t_u_u((l_126.f0 && (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s(l_143, 0x5C07L)), l_144))), l_116.f0))) && g_133))
            { 
                uint32_t l_145 = 0xF3A8CD93L;
                l_145++;
                return p_25;
            }
            else
            { 
                l_148 = p_26;
                if (l_34)
                    goto lbl_149;
                l_74[0] = p_26;
            }
        }
    }
    else
    { 
        int16_t l_152 = 0xAC29L;
        int32_t l_154[2];
        struct S0 l_173 = {4294967288UL};
        int i;
        for (i = 0; i < 2; i++)
            l_154[i] = 0x4379D8B8L;
        l_154[1] |= (((l_74[0] = ((safe_mod_func_int16_t_s_s(p_25, 1L)) > (l_152 & ((g_153 , 8L) < (-1L))))) < 0x17L) || 0x36EAB1F2L);
        l_154[1] = (g_38 = (l_34 |= (1UL >= g_31)));
        if ((safe_rshift_func_uint8_t_u_s(p_25, g_8)))
        { 
            uint8_t l_159 = 0xE9L;
            for (g_153.f0 = 0; (g_153.f0 >= (-12)); g_153.f0 = safe_sub_func_int32_t_s_s(g_153.f0, 6))
            { 
                ++l_159;
                g_38 ^= ((0x3FBD44C0915FC1EALL == (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(3L, p_25)) != (safe_mul_func_int16_t_s_s(((-8L) | l_154[1]), 0x8579L))), 4)) ^ l_159), g_114.f0)) >= 0xFCB7661C5061D604LL)))) & l_159);
            }
            for (g_89 = 3; (g_89 < 13); g_89 = safe_add_func_int16_t_s_s(g_89, 6))
            { 
                return p_25;
            }
            l_173 = l_173;
        }
        else
        { 
            return l_174;
        }
    }
    return p_26;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_134[i][j].f0, "g_134[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_153.f0, "g_153.f0", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_210[i][j], "g_210[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
