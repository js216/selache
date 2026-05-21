// SPDX-License-Identifier: MIT
// cctest_csmith_d86fb194.c --- cctest case csmith_d86fb194 (csmith seed 3631198612)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xecb1f823 */

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

// Options:   -s 3631198612 -o /tmp/csmith_gen_nnzd5iv3/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint32_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
};

union U2 {
   const uint32_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   const int32_t  f3;
   int64_t  f4;
};

union U3 {
   uint16_t  f0;
   int32_t  f1;
   struct S0  f2;
   const struct S0  f3;
};


static const int16_t g_4 = 0xF212L;
static int32_t g_5 = 0xF307D7C1L;
static int64_t g_28[2][3][5] = {{{3L,0x1FA4C82104667120LL,3L,3L,0x1FA4C82104667120LL},{0L,6L,0xD50FA8FAD7494DFDLL,8L,0xD50FA8FAD7494DFDLL},{0x1FA4C82104667120LL,0x1FA4C82104667120LL,0xB0866193FE6966EFLL,0x1FA4C82104667120LL,0x1FA4C82104667120LL}},{{0xD50FA8FAD7494DFDLL,8L,0xD50FA8FAD7494DFDLL,6L,0L},{0x1FA4C82104667120LL,3L,3L,0x1FA4C82104667120LL,3L},{0L,8L,0xD2E91C84132D38CALL,8L,0L}}};
static union U3 g_30 = {0x01C8L};
static uint64_t g_48 = 9UL;
static uint32_t g_58 = 4294967294UL;
static union U3 g_71 = {65528UL};
static int32_t *g_86 = &g_5;
static int32_t **g_85 = &g_86;
static int32_t g_88 = 1L;
static uint8_t g_115 = 251UL;
static int32_t ****g_117[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t *****g_116 = &g_117[3];
static int64_t g_126 = 0x379293E9D6A36105LL;
static uint32_t g_128 = 0xB3985E7EL;
static union U1 g_196 = {0UL};
static union U2 g_201[7] = {{0UL},{0UL},{0xE4CAB560L},{0UL},{0UL},{0xE4CAB560L},{0UL}};
static union U3 g_204 = {0UL};
static union U3 *g_203 = &g_204;
static int16_t g_207 = 0xCD96L;
static int16_t *g_218 = &g_207;
static uint16_t *g_255 = &g_204.f0;
static const int32_t *g_265 = &g_88;
static const int32_t **g_264 = &g_265;
static const int32_t ***g_263 = &g_264;
static const int32_t *** const *g_262 = &g_263;
static const int32_t *** const **g_261 = &g_262;
static struct S0 *g_290 = &g_71.f2;
static uint64_t g_292 = 1UL;
static const union U3 g_298 = {65528UL};
static union U3 g_299 = {3UL};
static uint32_t g_305 = 18446744073709551612UL;
static int8_t g_312 = 1L;
static uint32_t *g_338 = &g_204.f2.f1;
static union U2 g_347 = {0x7587FC44L};
static union U2 *g_346[7][3][5] = {{{&g_347,&g_201[0],&g_201[6],(void*)0,&g_347},{&g_347,(void*)0,&g_201[6],&g_201[0],&g_347},{&g_201[0],&g_347,&g_347,&g_201[6],&g_201[6]}},{{&g_347,&g_347,(void*)0,&g_201[6],&g_201[6]},{&g_347,&g_201[6],&g_347,&g_201[1],&g_347},{&g_201[6],&g_201[1],(void*)0,(void*)0,&g_347}},{{&g_347,&g_347,&g_201[4],&g_201[6],(void*)0},{&g_201[6],&g_347,(void*)0,&g_347,(void*)0},{&g_201[6],&g_201[6],&g_347,&g_347,(void*)0}},{{&g_201[2],&g_201[6],(void*)0,(void*)0,&g_201[4]},{&g_201[2],&g_347,&g_347,&g_201[2],&g_347},{&g_201[6],&g_201[6],&g_201[6],&g_201[4],&g_201[0]}},{{&g_201[6],&g_201[0],&g_201[2],(void*)0,&g_347},{&g_347,&g_347,&g_347,&g_201[4],&g_201[6]},{&g_201[6],(void*)0,&g_201[4],&g_201[2],&g_201[6]}},{{&g_347,&g_347,(void*)0,(void*)0,&g_347},{&g_347,&g_347,&g_201[6],&g_347,&g_347},{&g_201[0],(void*)0,&g_201[6],&g_347,&g_347}},{{&g_347,&g_347,&g_201[6],&g_201[6],&g_201[6]},{&g_201[4],&g_201[0],&g_347,(void*)0,&g_347},{&g_347,&g_201[6],(void*)0,&g_201[1],&g_347}}};
static uint32_t g_375 = 1UL;
static const int64_t g_478 = 0x734C3B89E9367079LL;
static int32_t * const ***g_528 = (void*)0;
static int16_t g_534 = 0x7716L;
static uint32_t g_554 = 0x243C5392L;
static int32_t ***g_580 = &g_85;
static int32_t ****g_579 = &g_580;
static uint8_t g_624 = 0UL;
static uint64_t *g_643 = &g_292;
static uint64_t **g_642 = &g_643;
static uint8_t g_675[1][3] = {{0x1EL,0x1EL,0x1EL}};
static uint8_t *g_701 = (void*)0;
static uint8_t **g_700 = &g_701;
static uint32_t *g_720[3][5] = {{&g_58,&g_71.f2.f1,&g_58,&g_71.f2.f1,&g_58},{&g_71.f2.f1,&g_71.f2.f1,&g_71.f2.f1,&g_71.f2.f1,&g_71.f2.f1},{&g_58,&g_71.f2.f1,&g_58,&g_71.f2.f1,&g_58}};
static int8_t g_724 = 0xF9L;
static union U2 g_761 = {0x8AF56D23L};
static struct S0 g_840 = {-1L,1UL,0x3780CA4ECCDD9C51LL};
static int16_t g_875 = 0x68B2L;
static int32_t *** const g_941[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 *g_967 = &g_196;
static int16_t **g_1041[6][7][1] = {{{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{&g_218}},{{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{(void*)0},{&g_218}},{{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{&g_218}},{{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{(void*)0},{&g_218}},{{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{&g_218}},{{&g_218},{&g_218},{&g_218},{&g_218},{&g_218},{(void*)0},{&g_218}}};
static int16_t ***g_1040 = &g_1041[0][3][0];
static int16_t *g_1076[6][2][5] = {{{&g_207,&g_875,&g_207,(void*)0,&g_207},{&g_207,&g_534,&g_207,(void*)0,&g_875}},{{&g_534,(void*)0,(void*)0,&g_534,&g_534},{&g_875,(void*)0,&g_534,&g_207,&g_534}},{{(void*)0,&g_534,&g_875,&g_875,(void*)0},{&g_534,&g_534,&g_207,&g_875,&g_875}},{{&g_534,&g_534,&g_534,&g_875,(void*)0},{&g_534,(void*)0,&g_534,&g_534,&g_534}},{{&g_534,&g_207,&g_207,&g_875,&g_207},{&g_534,&g_875,&g_534,&g_534,&g_534}},{{&g_207,&g_207,&g_534,(void*)0,&g_534},{&g_875,(void*)0,&g_207,&g_207,&g_207}}};
static uint8_t ****g_1129 = (void*)0;
static union U1 g_1172 = {0UL};
static int64_t g_1199 = 1L;
static int32_t g_1241 = 0xBEC75FBDL;
static uint32_t g_1243 = 4294967294UL;
static uint16_t g_1262 = 0x5C2FL;
static uint16_t g_1263 = 65535UL;
static uint16_t g_1264 = 0x381CL;
static int8_t ** const g_1296 = (void*)0;
static int16_t g_1374 = 6L;
static union U2 g_1454[4] = {{4294967287UL},{4294967287UL},{4294967287UL},{4294967287UL}};
static struct S0 ** const *g_1455 = (void*)0;
static union U1 g_1470 = {0xB9L};
static int16_t g_1520[2] = {(-1L),(-1L)};
static uint32_t g_1558[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static union U1 **g_1636 = &g_967;
static union U1 ***g_1635 = &g_1636;
static uint16_t g_1746 = 0x3ACDL;
static union U3 g_1752 = {0UL};
static union U3 * const g_1751 = &g_1752;
static union U3 * const *g_1750 = &g_1751;
static uint32_t g_1763 = 0x633772D4L;
static union U1 g_1765 = {3UL};
static uint8_t g_1771[4][3][5] = {{{4UL,0xE0L,0xE0L,4UL,0xE0L},{0xFCL,0xFCL,1UL,0xFCL,0xFCL},{0xE0L,4UL,0xE0L,0xE0L,4UL}},{{0xFCL,0x09L,0x09L,0xFCL,0x09L},{4UL,4UL,1UL,4UL,4UL},{0x09L,0xFCL,0x09L,0x09L,0xFCL}},{{4UL,0xE0L,0xE0L,4UL,0xE0L},{0xFCL,0xFCL,1UL,0xFCL,0xFCL},{0xE0L,4UL,0xE0L,0xE0L,4UL}},{{0xFCL,0x09L,0x09L,0xFCL,0x09L},{4UL,4UL,1UL,4UL,4UL},{0x09L,0xFCL,0x09L,0x09L,0xFCL}}};
static uint8_t g_1888[2] = {248UL,248UL};
static int32_t g_2140 = 0xC190D884L;
static int32_t g_2272[4][6] = {{1L,0xB3120A3FL,9L,0xB3120A3FL,1L,1L},{5L,0xB3120A3FL,0xB3120A3FL,5L,0x655AF18BL,5L},{5L,0x655AF18BL,5L,0xB3120A3FL,0xB3120A3FL,5L},{1L,1L,0xB3120A3FL,9L,0xB3120A3FL,1L}};
static uint32_t g_2273 = 0xC100DBE2L;
static uint16_t g_2310 = 3UL;
static uint64_t g_2325 = 18446744073709551609UL;
static int8_t g_2357 = 0L;
static struct S0 g_2361[7] = {{0x93L,0x0A03BF6FL,5L},{0x93L,0x0A03BF6FL,5L},{-1L,4294967295UL,0xD23D013288BA392BLL},{0x93L,0x0A03BF6FL,5L},{0x93L,0x0A03BF6FL,5L},{-1L,4294967295UL,0xD23D013288BA392BLL},{0x93L,0x0A03BF6FL,5L}};
static uint32_t * const *g_2506[3][2][1] = {{{&g_720[1][0]},{&g_338}},{{&g_720[1][0]},{&g_338}},{{&g_720[1][0]},{&g_338}}};
static uint32_t * const ** const g_2505[5] = {&g_2506[2][1][0],&g_2506[2][1][0],&g_2506[2][1][0],&g_2506[2][1][0],&g_2506[2][1][0]};
static union U2 **g_2670 = (void*)0;
static union U2 ***g_2669 = &g_2670;
static union U3 **g_2697 = &g_203;
static union U3 ***g_2696 = &g_2697;
static union U3 ****g_2695 = &g_2696;
static int16_t ***g_2794 = &g_1041[4][5][0];
static int16_t **** const g_2793 = &g_2794;
static int16_t **** const *g_2792[5] = {&g_2793,&g_2793,&g_2793,&g_2793,&g_2793};
static struct S0 ** const **g_2846 = &g_1455;
static int64_t ** const *g_3001 = (void*)0;
static int64_t ** const **g_3000[4] = {&g_3001,&g_3001,&g_3001,&g_3001};
static int64_t ** const ***g_2999 = &g_3000[0];
static uint32_t g_3015 = 0xAD348801L;
static uint64_t ***g_3052 = &g_642;
static uint64_t ****g_3051[4][7][6] = {{{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,(void*)0,&g_3052,(void*)0},{&g_3052,(void*)0,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0}},{{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052}},{{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0}},{{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,&g_3052},{&g_3052,&g_3052,(void*)0,&g_3052,&g_3052,(void*)0},{&g_3052,&g_3052,&g_3052,&g_3052,&g_3052,(void*)0}}};
static uint32_t g_3067 = 0xEEF997BEL;



static uint16_t  func_1(void);
static union U3  func_2(const uint32_t  p_3);
static int32_t  func_17(uint64_t  p_18, const int16_t  p_19, uint64_t  p_20, struct S0  p_21, uint16_t  p_22);
static int32_t  func_23(uint32_t  p_24, union U2  p_25, int32_t  p_26);
static uint8_t  func_42(uint64_t  p_43);
static int32_t  func_61(const uint32_t  p_62);
static uint32_t  func_72(int64_t * p_73, union U3  p_74, const union U3  p_75, int32_t * p_76, int64_t  p_77);
static int64_t * func_78(union U3 * p_79, union U1  p_80);




static uint16_t  func_1(void)
{ 
    union U3 ****l_2693 = (void*)0;
    union U3 *****l_2694 = &l_2693;
    int32_t * const *l_2702 = (void*)0;
    int32_t l_2703[5] = {4L,4L,4L,4L,4L};
    struct S0 **l_2714 = &g_290;
    uint32_t l_2719 = 0xD835ACE7L;
    int64_t *l_2742 = &g_28[1][2][3];
    int64_t **l_2741 = &l_2742;
    int64_t ***l_2740 = &l_2741;
    union U1 *l_2797 = &g_1765;
    union U3 ***l_2798[3];
    uint32_t l_2818 = 4294967294UL;
    uint32_t l_2829 = 1UL;
    uint8_t *l_2830 = &g_196.f0;
    int8_t *l_2831 = &g_1752.f2.f0;
    int8_t *l_2832 = &g_2357;
    uint32_t l_2837 = 0x00D5C24CL;
    const int32_t l_2840 = 0L;
    int64_t l_2878[3];
    uint64_t l_2889 = 0x91E8C78AAB178748LL;
    uint32_t l_2899[6][4][4] = {{{4294967295UL,0x74A92E54L,0x7F1EB7A2L,0xCAA69394L},{0xDC460698L,0x03E599D2L,0UL,0UL},{0UL,0x7F1EB7A2L,0x78488B98L,7UL},{0x78488B98L,7UL,0xCAA69394L,0xCAA69394L}},{{0x52477E07L,0x52477E07L,0UL,0UL},{0x74A92E54L,0x1D21F607L,7UL,0x0E6A0AB1L},{0x78488B98L,0UL,0x540E7ADCL,7UL},{7UL,0UL,0UL,0x0E6A0AB1L}},{{0UL,0x1D21F607L,1UL,0UL},{4294967295UL,0x52477E07L,0x1D21F607L,0xCAA69394L},{4294967295UL,7UL,0UL,7UL},{0x03E599D2L,0x7F1EB7A2L,4294967295UL,0UL}},{{0x65278889L,0xCAA69394L,4294967288UL,0UL},{0x78488B98L,4294967295UL,0x74A92E54L,0x7F1EB7A2L},{0x78488B98L,0xDA6DE7A6L,4294967288UL,0x540E7ADCL},{0x65278889L,0x7F1EB7A2L,4294967294UL,0x0FD15F05L}},{{0xCAA69394L,1UL,0x0E6A0AB1L,4294967295UL},{1UL,0xDA6DE7A6L,0xDA6DE7A6L,1UL},{4294967294UL,0x78488B98L,0UL,0UL},{0x1D21F607L,7UL,0x0E6A0AB1L,0xCAA69394L}},{{0x171BB78AL,0UL,0UL,0xCAA69394L},{0x65278889L,7UL,0x0FD15F05L,0UL},{4294967295UL,0x78488B98L,0x74A92E54L,1UL},{0x540E7ADCL,0xDA6DE7A6L,0UL,4294967295UL}}};
    int8_t l_2919 = (-1L);
    struct S0 l_2955 = {1L,0x92586DACL,-10L};
    int8_t l_2963 = 0x04L;
    uint8_t l_2969 = 0x80L;
    int64_t * const ***l_3003 = (void*)0;
    int64_t * const ****l_3002 = &l_3003;
    uint32_t l_3004[1];
    const union U1 *l_3011 = &g_196;
    const union U1 **l_3010[7];
    const union U1 ***l_3009 = &l_3010[1];
    uint16_t l_3012[3];
    uint32_t l_3056 = 0xAE6DEA2FL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2798[i] = &g_2697;
    for (i = 0; i < 3; i++)
        l_2878[i] = 0L;
    for (i = 0; i < 1; i++)
        l_3004[i] = 0x70F6D91EL;
    for (i = 0; i < 7; i++)
        l_3010[i] = &l_3011;
    for (i = 0; i < 3; i++)
        l_3012[i] = 0x2760L;
    if ((func_2(g_4) , (safe_div_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((*l_2694) = l_2693) == g_2695), 0xE3L)) & (safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((1L && ((void*)0 != l_2702)), (**g_642))), l_2703[0]))), (*g_218)))))
    { 
        int16_t l_2727 = 0x74F8L;
        int32_t l_2769[6][5] = {{0L,0L,0L,0L,0L},{(-3L),(-3L),(-3L),(-3L),(-3L)},{0L,0L,0L,0L,0L},{(-3L),(-3L),(-3L),(-3L),(-3L)},{0L,0L,0L,0L,0L},{(-3L),(-3L),(-3L),(-3L),(-3L)}};
        const struct S0 *l_2795 = &g_71.f2;
        int i, j;
        for (g_761.f1 = 22; (g_761.f1 == 16); g_761.f1 = safe_sub_func_uint64_t_u_u(g_761.f1, 1))
        { 
            union U1 l_2708[5][5][3] = {{{{0xDFL},{8UL},{0x30L}},{{0xF7L},{4UL},{2UL}},{{0xDFL},{0xDFL},{0x51L}},{{0xFDL},{0UL},{253UL}},{{8UL},{0xDFL},{8UL}}},{{{255UL},{4UL},{1UL}},{{3UL},{8UL},{8UL}},{{1UL},{0xA7L},{253UL}},{{0x25L},{3UL},{0x51L}},{{1UL},{3UL},{2UL}}},{{{3UL},{0x25L},{0x30L}},{{255UL},{3UL},{255UL}},{{8UL},{3UL},{0xDFL}},{{0xFDL},{0xA7L},{255UL}},{{0xDFL},{8UL},{0x30L}}},{{{0xF7L},{4UL},{2UL}},{{0xDFL},{0xDFL},{0x51L}},{{0xFDL},{0UL},{253UL}},{{8UL},{0xDFL},{8UL}},{{255UL},{4UL},{1UL}}},{{{3UL},{8UL},{8UL}},{{1UL},{0xA7L},{253UL}},{{0x25L},{3UL},{0x51L}},{{1UL},{3UL},{2UL}},{{3UL},{0x25L},{0x30L}}}};
            struct S0 *l_2725 = &g_840;
            int32_t l_2733 = (-10L);
            uint64_t ***l_2748 = &g_642;
            uint64_t ****l_2747 = &l_2748;
            union U3 ***l_2749 = &g_2697;
            uint32_t l_2780 = 4294967295UL;
            union U2 l_2783 = {0x8CB2A0AFL};
            int i, j, k;
            for (g_1199 = 0; (g_1199 > (-23)); g_1199--)
            { 
                uint64_t l_2728 = 18446744073709551615UL;
                uint8_t ** const * const l_2737[1][3][1] = {{{&g_700},{&g_700},{&g_700}}};
                int8_t l_2738[7][4][7] = {{{0x5BL,0xCEL,7L,(-3L),0x63L,0L,0x5BL},{0xECL,0xABL,0L,(-1L),0x7DL,0L,0xECL},{(-10L),0L,7L,0xBDL,7L,0L,(-10L)},{1L,0xABL,(-3L),0xEBL,0x7DL,(-2L),1L}},{{(-10L),0xCEL,5L,0xBDL,0x63L,1L,(-10L)},{0xEBL,0x61L,(-1L),(-1L),(-1L),0x61L,0xEBL},{0x5EL,0x5BL,(-9L),(-1L),0x89L,0x87L,0x5EL},{0xEBL,1L,0x77L,(-1L),0xDEL,0xECL,0xEBL}},{{(-3L),0x87L,(-9L),8L,(-9L),0x87L,(-3L)},{0xEAL,1L,(-1L),0x9BL,0xDEL,0x61L,0xEAL},{(-3L),0x5BL,1L,8L,0x89L,(-10L),(-3L)},{0xEBL,0x61L,(-1L),(-1L),(-1L),0x61L,0xEBL}},{{0x5EL,0x5BL,(-9L),(-1L),0x89L,0x87L,0x5EL},{0xEBL,1L,0x77L,(-1L),0xDEL,0xECL,0xEBL},{(-3L),0x87L,(-9L),8L,(-9L),0x87L,(-3L)},{0xEAL,1L,(-1L),0x9BL,0xDEL,0x61L,0xEAL}},{{(-3L),0x5BL,1L,8L,0x89L,(-10L),(-3L)},{0xEBL,0x61L,(-1L),(-1L),(-1L),0x61L,0xEBL},{0x5EL,0x5BL,(-9L),(-1L),0x89L,0x87L,0x5EL},{0xEBL,1L,0x77L,(-1L),0xDEL,0xECL,0xEBL}},{{(-3L),0x87L,(-9L),8L,(-9L),0x87L,(-3L)},{0xEAL,1L,(-1L),0x9BL,0xDEL,0x61L,0xEAL},{(-3L),0x5BL,1L,8L,0x89L,(-10L),(-3L)},{0xEBL,0x61L,(-1L),(-1L),(-1L),0x61L,0xEBL}},{{0x5EL,0x5BL,(-9L),(-1L),0x89L,0x87L,0x5EL},{0xEBL,1L,0x77L,(-1L),0xDEL,0xECL,0xEBL},{(-3L),0x87L,(-9L),8L,(-9L),0x87L,(-3L)},{0xEAL,1L,(-1L),0x9BL,0xDEL,0x61L,0xEAL}}};
                int32_t l_2739[6] = {(-2L),(-2L),8L,(-2L),(-2L),8L};
                int i, j, k;
                (**g_1635) = ((l_2708[0][4][2] , g_1374) , (*g_1636));
                if (l_2708[0][4][2].f0)
                    continue;
                (*g_264) = ((**g_580) = (*g_85));
                for (g_204.f2.f0 = 2; (g_204.f2.f0 >= 0); g_204.f2.f0 -= 1)
                { 
                    return (*g_255);
                }
                for (g_30.f0 = 0; (g_30.f0 >= 41); g_30.f0 = safe_add_func_uint32_t_u_u(g_30.f0, 3))
                { 
                    const int32_t *l_2711 = &l_2703[3];
                    const union U3 l_2717 = {0x7D79L};
                    uint64_t *l_2720 = (void*)0;
                    uint64_t *l_2721 = &g_48;
                    struct S0 *l_2726 = &g_2361[4];
                    uint16_t *l_2732[6] = {&g_347.f2,&g_347.f2,(void*)0,&g_347.f2,&g_347.f2,(void*)0};
                    uint8_t ***l_2736 = &g_700;
                    int i;
                    l_2711 = (****g_261);
                    if ((*g_265))
                        continue;
                    (***g_580) = (safe_mul_func_int8_t_s_s((((*g_255) , l_2714) != (void*)0), (((safe_add_func_int8_t_s_s((((l_2717 , ((~l_2719) , ((*l_2721) ^= (**g_642)))) < (!(safe_sub_func_uint64_t_u_u(((l_2725 != l_2726) | 0x6EBB5A25F942B6EFLL), (**g_642))))) >= 0x99L), l_2727)) , l_2728) == (*g_255))));
                    l_2739[0] ^= ((~1UL) <= (safe_add_func_uint64_t_u_u((((0x8127L < (*g_255)) & ((l_2733 &= (g_2310 |= (*g_255))) ^ (g_1262 = ((l_2727 , (safe_mod_func_int64_t_s_s((((**g_642) >= (((l_2736 = l_2736) != l_2737[0][0][0]) | (*l_2711))) & g_28[1][1][2]), (*g_643)))) >= 0xC41EL)))) < 0x8B6AL), l_2738[1][3][2])));
                    (**g_85) &= (l_2728 != ((void*)0 == l_2740));
                }
            }
            for (g_312 = (-2); (g_312 >= 8); g_312 = safe_add_func_int64_t_s_s(g_312, 8))
            { 
                struct S0 l_2750[5][2][4] = {{{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}},{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}}},{{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}},{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}}},{{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}},{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}}},{{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}},{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}}},{{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}},{{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L},{1L,0xC54B8A9AL,0L}}}};
                int32_t l_2753 = 2L;
                union U1 l_2760 = {3UL};
                int64_t l_2779[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_2779[i] = 4L;
            }
            for (g_88 = 1; (g_88 <= 4); g_88 += 1)
            { 
                int i;
                return l_2703[g_88];
            }
            (****g_579) = ((void*)0 == (*g_1750));
        }
        (*g_86) &= (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0xF8L, (((safe_unary_minus_func_int8_t_s(g_201[6].f1)) < (safe_mod_func_uint64_t_u_u(((l_2769[0][1] != (safe_lshift_func_uint16_t_u_u(((*g_255) = ((!(l_2769[0][1] > (safe_add_func_int8_t_s_s((+(l_2769[0][1] | ((0xB0F809C1L <= 1UL) , (*g_255)))), 0x58L)))) , 2UL)), 6))) || l_2818), g_1888[0]))) > l_2818))), g_312));
    }
    else
    { 
        uint32_t l_2819 = 8UL;
        l_2819++;
    }
    (***g_580) ^= (l_2818 | (((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((*l_2830) = ((**g_642) >= (l_2829 = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int64_t_s(l_2703[4])), 10))))), ((*l_2831) = ((*l_2832) &= 1L)))), (((*g_255) < ((void*)0 == &g_255)) & 1L))) , l_2829) < 0x679923B0L));
    for (g_48 = 0; (g_48 <= 57); g_48++)
    { 
        int16_t l_2838 = 0x6E09L;
        uint32_t l_2839 = 0xC87BD04EL;
        const struct S0 l_2856 = {0x18L,0x0C86B725L,-1L};
        int32_t l_2860 = (-4L);
        uint64_t l_2862 = 0UL;
        int32_t l_2877 = (-9L);
        uint16_t l_2879 = 0x7D7FL;
        int32_t l_2885 = 0xFB2AACE0L;
        int32_t l_2886[2];
        uint8_t *l_2924 = &g_115;
        uint8_t l_2954 = 0xD5L;
        int32_t *l_2961 = &g_2140;
        int32_t *l_2962[2];
        uint32_t l_2964[7][5][5] = {{{18446744073709551606UL,0xB49367B7L,0x030E6C47L,0xD66EC26BL,0xCB91B130L},{0xC85CBCF7L,0UL,18446744073709551609UL,0x89AC03E8L,7UL},{0xB49367B7L,0x32981400L,0x0C91585DL,18446744073709551613UL,0xE52B807AL},{18446744073709551615UL,0x2326F6E7L,18446744073709551611UL,7UL,0xEB452B14L},{18446744073709551615UL,0xD5AEAAC9L,0x187013F3L,18446744073709551606UL,0xD5AEAAC9L}},{{0x7E9BD8A8L,0xD5AEAAC9L,0x9566767EL,0x865A4B2FL,18446744073709551613UL},{0x81DE2AB6L,0x2326F6E7L,0xEB452B14L,18446744073709551615UL,0x1C802119L},{0x9CFE6D50L,0x32981400L,0x6F9CD523L,18446744073709551615UL,0x8723BB86L},{3UL,0UL,18446744073709551613UL,0x0B81A59AL,0x89AC03E8L},{0xE52B807AL,0xB49367B7L,0xB49367B7L,0xE52B807AL,0x9566767EL}},{{18446744073709551615UL,4UL,0x16D4D483L,0x81DE2AB6L,0x8723BB86L},{0xF53C760DL,0x81DE2AB6L,0xCB91B130L,18446744073709551611UL,18446744073709551612UL},{18446744073709551615UL,0xEB452B14L,0x2326F6E7L,0x81DE2AB6L,0xC616414FL},{0xC85CBCF7L,0x89AC03E8L,0x1CF511B4L,0xE52B807AL,0xD5AEAAC9L},{0x030E6C47L,18446744073709551606UL,0UL,0x0B81A59AL,18446744073709551606UL}},{{7UL,18446744073709551611UL,0x2326F6E7L,18446744073709551615UL,0x7E9BD8A8L},{4UL,18446744073709551608UL,0xF4A9777AL,18446744073709551615UL,7UL},{0x9566767EL,0x9CFE6D50L,18446744073709551607UL,0x865A4B2FL,0x32981400L},{0xD66EC26BL,0x030E6C47L,0xB49367B7L,18446744073709551606UL,0xD54843CFL},{0xD66EC26BL,0x89AC03E8L,0x63232FEDL,7UL,18446744073709551606UL}},{{0x9566767EL,18446744073709551606UL,3UL,18446744073709551613UL,18446744073709551615UL},{4UL,3UL,0xEB452B14L,0x89AC03E8L,0x030E6C47L},{7UL,4UL,0x437C5D59L,0xD66EC26BL,0xD66EC26BL},{0x030E6C47L,18446744073709551615UL,0x030E6C47L,0xD54843CFL,0x32981400L},{0xC85CBCF7L,18446744073709551607UL,18446744073709551611UL,0x89AC03E8L,0x44957CF2L}},{{18446744073709551615UL,0x32981400L,0x93FE468AL,4UL,0xE52B807AL},{0xF53C760DL,8UL,18446744073709551611UL,0x44957CF2L,18446744073709551606UL},{18446744073709551615UL,0UL,0x030E6C47L,18446744073709551606UL,0UL},{0xE52B807AL,0xD5AEAAC9L,0x437C5D59L,0xC85CBCF7L,18446744073709551613UL},{3UL,8UL,0xEB452B14L,0xB49367B7L,18446744073709551612UL}},{{0x9CFE6D50L,0xCB91B130L,3UL,18446744073709551615UL,0xA74CD18EL},{0x81DE2AB6L,0UL,0x63232FEDL,18446744073709551615UL,0x89AC03E8L},{0x7E9BD8A8L,18446744073709551615UL,0xB49367B7L,0x7E9BD8A8L,0x89AC03E8L},{18446744073709551615UL,18446744073709551613UL,18446744073709551607UL,0x44957CF2L,18446744073709551615UL},{0xA74CD18EL,0x44957CF2L,0xD5AEAAC9L,18446744073709551607UL,0x9566767EL}}};
        int16_t l_2967 = 0xB66FL;
        int32_t l_2968[5][2] = {{8L,0xDFE83192L},{8L,0xDFE83192L},{8L,0xDFE83192L},{8L,0xDFE83192L},{8L,0xDFE83192L}};
        int32_t l_2985 = (-1L);
        uint32_t l_2998[4];
        union U1 l_3014 = {2UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2886[i] = 0xAC49212AL;
        for (i = 0; i < 2; i++)
            l_2962[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_2998[i] = 3UL;
    }
    for (g_196.f0 = 0; (g_196.f0 <= 2); g_196.f0 += 1)
    { 
        uint64_t l_3028 = 0x3A880A19FAF02B46LL;
        uint32_t *l_3047 = &l_3004[0];
        int32_t l_3048 = 0x71CBA1ADL;
        int32_t l_3065 = 0xCCC64F81L;
        int32_t l_3066 = (-2L);
        struct S0 l_3072 = {0L,4294967286UL,1L};
        l_3028--;
        (**g_85) = (l_3048 = (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0x2DL, g_126)), ((safe_sub_func_uint64_t_u_u((((*g_255) |= (safe_lshift_func_uint16_t_u_u(0x41EEL, 7))) || ((safe_div_func_uint8_t_u_u(((0xE0E2L | (((((*l_3047) |= (((l_3028 | ((safe_add_func_int16_t_s_s(((void*)0 == (*g_2846)), (*g_255))) , g_724)) != l_3028) == l_3028)) , l_3028) || 0x0FL) <= (*g_218))) != (-1L)), 251UL)) != l_3028)), 0x95B4D304026A0FC1LL)) <= l_3028))), g_1888[1])));
        for (g_204.f2.f1 = 0; (g_204.f2.f1 <= 2); g_204.f2.f1 += 1)
        { 
            int8_t l_3054 = 0x70L;
            struct S0 l_3058 = {0L,0UL,0L};
            int32_t l_3061[1][3][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_3061[i][j][k] = 0L;
                }
            }
        }
    }
    return (*g_255);
}



static union U3  func_2(const uint32_t  p_3)
{ 
    int32_t l_16 = 0L;
    int32_t l_31 = 0x3418EB0BL;
    union U2 l_33 = {4294967287UL};
    int32_t l_2396[1][6] = {{0x315BB970L,0x315BB970L,0x315BB970L,0x315BB970L,0x315BB970L,0x315BB970L}};
    const union U2 *l_2405[3][4][5] = {{{&g_1454[2],(void*)0,&g_1454[1],&g_347,&g_1454[2]},{&l_33,&l_33,&g_347,&g_1454[2],&g_761},{&g_761,&g_1454[2],&g_1454[2],(void*)0,&g_1454[2]},{&g_1454[1],&g_1454[2],&g_1454[2],&g_1454[1],&g_1454[2]}},{{&g_1454[2],&g_1454[2],&g_201[6],&g_201[4],&g_1454[1]},{(void*)0,&g_1454[2],&g_1454[2],&g_1454[3],(void*)0},{&g_201[6],&l_33,(void*)0,&g_201[4],&g_201[4]},{&l_33,(void*)0,&l_33,&g_1454[1],&g_761}},{{&l_33,&g_1454[1],&g_1454[3],(void*)0,&g_347},{&g_201[6],(void*)0,&g_1454[2],&g_1454[2],&g_1454[2]},{(void*)0,&g_201[4],&g_1454[3],&g_347,&g_1454[3]},{&g_1454[2],&g_1454[2],&l_33,&g_1454[1],&g_1454[3]}}};
    const union U2 * const *l_2404 = &l_2405[0][3][1];
    union U2 **l_2406 = &g_346[5][0][3];
    uint32_t l_2419[7][2][2] = {{{0xE62B9925L,4294967291UL},{0x1F9A2085L,0xA23C0F0EL}},{{0xBE197FD7L,0UL},{4294967291UL,0xBEB01B51L}},{{0xBEB01B51L,0xBEB01B51L},{4294967291UL,0UL}},{{0xBE197FD7L,0xA23C0F0EL},{0x1F9A2085L,4294967291UL}},{{0xE62B9925L,0x1F9A2085L},{0xD11AFF0EL,0xDCC0C03AL}},{{0xD11AFF0EL,0x1F9A2085L},{0xE62B9925L,4294967291UL}},{{0x1F9A2085L,0xA23C0F0EL},{0xBE197FD7L,0UL}}};
    int16_t l_2449 = 0x281AL;
    int16_t l_2459 = (-7L);
    struct S0 **l_2542 = &g_290;
    uint32_t l_2606 = 4UL;
    union U3 l_2609 = {0x20EFL};
    union U1 *l_2630 = &g_196;
    uint32_t l_2635 = 0x87E6DFCEL;
    int32_t l_2665 = 0xFDEC590EL;
    int32_t *l_2673 = &l_31;
    int32_t *l_2674 = (void*)0;
    int32_t *l_2675 = &g_88;
    int32_t *l_2676 = &l_2665;
    int32_t *l_2677 = (void*)0;
    int32_t *l_2678 = &l_2396[0][3];
    int32_t *l_2679 = &g_88;
    int32_t *l_2680 = &l_2665;
    int32_t *l_2681 = &l_16;
    int32_t *l_2682 = &l_31;
    int32_t *l_2683[1][1];
    int64_t l_2684 = 5L;
    int32_t l_2685 = 0xE4E9D2E3L;
    uint16_t l_2686 = 65526UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2683[i][j] = &l_2396[0][1];
    }
    for (g_5 = (-10); (g_5 == (-18)); g_5--)
    { 
        int64_t *l_27 = &g_28[1][2][3];
        int32_t l_32[5][3][4] = {{{0x2BA10F40L,1L,0xEEDF6679L,1L},{1L,0L,0xEEDF6679L,0xEEDF6679L},{0x2BA10F40L,0x2BA10F40L,1L,0xF903A798L}},{{4L,9L,1L,1L},{1L,1L,1L,1L},{0x2BA10F40L,1L,0x1F32AFCBL,1L}},{{1L,9L,0xEEDF6679L,0xF903A798L},{0x12F8BA79L,0x2BA10F40L,1L,0xEEDF6679L},{4L,0L,0x4AB10079L,1L}},{{4L,1L,1L,4L},{0x12F8BA79L,1L,0xEEDF6679L,1L},{1L,0L,0x1F32AFCBL,0xF903A798L}},{{0x2BA10F40L,0x12F8BA79L,1L,0xF903A798L},{1L,0L,1L,1L},{4L,1L,1L,4L}}};
        uint32_t l_34 = 0UL;
        union U2 ***l_2407 = &l_2406;
        uint16_t *l_2410 = &l_33.f1;
        struct S0 l_2522[5] = {{-9L,0x1673F8D6L,0x5968ACA68AB15161LL},{-9L,0x1673F8D6L,0x5968ACA68AB15161LL},{-9L,0x1673F8D6L,0x5968ACA68AB15161LL},{-9L,0x1673F8D6L,0x5968ACA68AB15161LL},{-9L,0x1673F8D6L,0x5968ACA68AB15161LL}};
        int16_t l_2529 = 0x5427L;
        uint64_t **l_2540[2];
        uint16_t l_2626[4] = {0x86E6L,0x86E6L,0x86E6L,0x86E6L};
        int32_t l_2633 = 2L;
        uint32_t **l_2647 = &g_720[0][4];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2540[i] = &g_643;
    }
    --l_2686;
    return l_2609;
}



static int32_t  func_17(uint64_t  p_18, const int16_t  p_19, uint64_t  p_20, struct S0  p_21, uint16_t  p_22)
{ 
    int64_t l_2364 = 3L;
    int16_t l_2365 = (-7L);
    int32_t l_2366 = 5L;
    int32_t l_2368 = 1L;
    int32_t *l_2369 = &g_88;
    int32_t *l_2370 = &l_2366;
    int32_t *l_2371 = &g_88;
    int32_t *l_2372[3];
    uint8_t l_2373 = 255UL;
    int i;
    for (i = 0; i < 3; i++)
        l_2372[i] = &g_88;
    l_2364 = ((safe_rshift_func_int16_t_s_s((-5L), 5)) && g_761.f3);
    if (g_761.f3)
        goto lbl_2367;
lbl_2367:
    l_2366 = l_2365;
    l_2373++;
    return p_22;
}



static int32_t  func_23(uint32_t  p_24, union U2  p_25, int32_t  p_26)
{ 
    uint8_t l_35 = 0x66L;
    int64_t *l_44 = (void*)0;
    struct S0 * const l_2050 = &g_840;
    int32_t l_2099[2];
    union U3 l_2106 = {1UL};
    uint8_t l_2141 = 0xD1L;
    int32_t ***l_2143 = &g_85;
    union U2 * const *l_2172[2][3] = {{&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3]},{&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3]}};
    union U2 * const **l_2171 = &l_2172[0][2];
    uint32_t l_2174 = 18446744073709551615UL;
    union U1 *l_2176 = &g_1172;
    int64_t l_2179 = 0x7E06F744AF7B1F70LL;
    int32_t l_2198 = 9L;
    const int32_t ****l_2203[4];
    const int32_t *****l_2202 = &l_2203[3];
    int32_t l_2232[1][6] = {{0L,0xE61E79FFL,0xE61E79FFL,0L,0xE61E79FFL,0x4898C1EAL}};
    uint8_t l_2233 = 0x0EL;
    int16_t ****l_2305 = &g_1040;
    uint8_t ***l_2339[1];
    int32_t *l_2347 = (void*)0;
    int32_t *l_2348 = &l_2099[0];
    int32_t *l_2349 = &g_88;
    int32_t *l_2350 = (void*)0;
    int32_t *l_2351 = &l_2232[0][2];
    int32_t *l_2352 = &l_2198;
    int32_t *l_2353 = &l_2232[0][5];
    int32_t *l_2354 = &l_2099[1];
    int32_t *l_2355 = &l_2232[0][3];
    int32_t *l_2356[4];
    uint32_t l_2358 = 0xE83A691DL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_2099[i] = 0xB2BFDE8FL;
    for (i = 0; i < 4; i++)
        l_2203[i] = &g_263;
    for (i = 0; i < 1; i++)
        l_2339[i] = &g_700;
    for (i = 0; i < 4; i++)
        l_2356[i] = &l_2099[1];
lbl_2082:
    l_35 ^= 0xD77974D3L;
    if ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((((void*)0 == &g_28[1][2][3]) , (safe_add_func_int8_t_s_s(0x4AL, func_42((l_44 != (void*)0))))) , (0x5CL && p_25.f3)), (-10L))), l_35)))
    { 
        uint32_t l_2044[3];
        int32_t l_2051 = 0x327F5E47L;
        int16_t l_2073 = 0x9B1FL;
        const uint16_t l_2074 = 65530UL;
        struct S0 l_2081 = {-1L,0x475AE63CL,0L};
        union U1 **l_2085 = &g_967;
        int i;
        for (i = 0; i < 3; i++)
            l_2044[i] = 0x8CB73107L;
        for (g_88 = 0; (g_88 >= 27); g_88 = safe_add_func_uint16_t_u_u(g_88, 4))
        { 
            union U1 l_2038 = {0xF0L};
            const int16_t **l_2048 = (void*)0;
            const int16_t ***l_2047 = &l_2048;
            int32_t l_2065 = 0x51F75C77L;
            int32_t *l_2080 = &l_2065;
            (*g_579) = (*g_579);
            if ((*g_265))
            { 
                struct S0 l_2043 = {0x89L,6UL,0xD5B7B1F30778E34FLL};
                union U2 **l_2046 = &g_346[2][2][3];
                union U2 ***l_2045 = &l_2046;
                int32_t *l_2078[6][1][5];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_2078[i][j][k] = &l_2065;
                    }
                }
                if (((0xA8L < (((l_2038 , ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_2043 , (l_2044[0] |= 1L)), l_2038.f0)), ((((void*)0 != l_2045) && l_2043.f2) || 0xEBE0L))) & l_2043.f0)) , l_2038.f0) | p_25.f3)) ^ 0x29E5D53390737D66LL))
                { 
                    const int16_t ****l_2049 = &l_2047;
                    (*l_2049) = l_2047;
                    if (l_2044[0])
                        continue;
                }
                else
                { 
                    uint64_t l_2058 = 0xE9F63118F3D9F5F9LL;
                    int32_t *l_2075 = &l_2065;
                    l_2051 = ((void*)0 != l_2050);
                    l_2065 = (safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(p_24, l_2058)), (+(safe_lshift_func_uint8_t_u_u((((l_2038.f0 == (l_35 <= ((((((((~((((*g_643) = 0xA523CAF71E07B464LL) || l_2038.f0) , (safe_mul_func_int8_t_s_s((l_2065 , l_2058), 7UL)))) <= l_2058) && (-1L)) && 1UL) | p_25.f0) >= l_2051) , l_2038.f0) > p_25.f2))) | 0L) & l_2038.f0), p_25.f3))))), 65535UL));
                    l_2051 ^= (safe_add_func_uint16_t_u_u(((((*g_967) = (**g_1636)) , (((safe_lshift_func_int8_t_s_u(((!0L) != (0L || ((*g_338) = (((safe_div_func_int8_t_s_s(((*g_643) ^ (p_25.f3 <= (p_25.f0 != (9L != (-10L))))), l_2073)) ^ l_2043.f1) == l_2074)))), 6)) == p_25.f0) & p_25.f1)) > p_25.f1), 0xEAB5L));
                    (*l_2075) |= 0L;
                }
                for (g_299.f0 = 23; (g_299.f0 == 8); g_299.f0 = safe_sub_func_int16_t_s_s(g_299.f0, 1))
                { 
                    return p_26;
                }
                l_2051 = l_35;
            }
            else
            { 
                int8_t *l_2086 = &g_299.f2.f0;
                int8_t *l_2087 = &g_299.f2.f0;
                int8_t *l_2088 = &g_71.f2.f0;
                int8_t *l_2089 = &g_71.f2.f0;
                int8_t *l_2090 = (void*)0;
                int8_t *l_2091 = &g_724;
                int32_t l_2093 = 0x85307836L;
                int32_t l_2096 = 0x143FD760L;
                for (g_1763 = 0; (g_1763 <= 3); g_1763 += 1)
                { 
                    int32_t * const l_2079 = (void*)0;
                    int i;
                    l_2080 = l_2079;
                    (**g_263) = (***g_262);
                    (*l_2050) = l_2081;
                }
                if (p_24)
                    goto lbl_2082;
                if (l_2073)
                    break;
                l_2096 |= ((((safe_sub_func_int8_t_s_s((((*l_2091) &= (l_2085 != (*g_1635))) & p_25.f0), (!l_35))) == (l_2093 = 0xCC62691FL)) != (((248UL < (safe_mul_func_uint8_t_u_u(1UL, 0x78L))) , p_25.f3) || 0xB6B73ADCL)) | 0x6300C150L);
                for (g_71.f2.f1 = 20; (g_71.f2.f1 >= 36); g_71.f2.f1 = safe_add_func_uint32_t_u_u(g_71.f2.f1, 4))
                { 
                    if (p_24)
                        break;
                }
            }
            return (**g_85);
        }
    }
    else
    { 
        uint8_t l_2100 = 255UL;
        int64_t *l_2101 = (void*)0;
        int32_t l_2115 = 0x1CC73B7EL;
        uint64_t **l_2138 = (void*)0;
        int32_t l_2177 = 0x27E95AC6L;
        int32_t *l_2178[5] = {&g_88,&g_88,&g_88,&g_88,&g_88};
        uint16_t l_2180 = 0xC027L;
        int8_t *l_2200 = &g_724;
        int8_t ** const l_2199[7] = {&l_2200,&l_2200,&l_2200,&l_2200,&l_2200,&l_2200,&l_2200};
        int32_t *****l_2201 = &g_117[3];
        uint16_t *l_2204 = &g_347.f1;
        uint32_t l_2205 = 0xA9E7D6A4L;
        int i;
        if ((l_2100 &= (l_2099[0] = p_25.f3)))
        { 
            uint8_t l_2102 = 5UL;
            if (((*g_255) < (l_2101 != (void*)0)))
            { 
                return l_2102;
            }
            else
            { 
                return p_25.f2;
            }
        }
        else
        { 
            uint32_t l_2112 = 0x9955ABF9L;
            int32_t l_2116 = (-1L);
            uint8_t l_2137 = 254UL;
            int8_t *l_2146[5][7] = {{&g_840.f0,&g_71.f2.f0,&g_71.f2.f0,&g_840.f0,&g_724,&g_312,&g_312},{&g_312,&g_312,&g_724,&g_840.f0,&g_71.f2.f0,&g_71.f2.f0,&g_840.f0},{(void*)0,&g_840.f0,(void*)0,&g_312,&g_724,&g_724,&g_312},{&g_840.f0,&g_312,(void*)0,&g_724,&g_312,&g_724,(void*)0},{&g_724,&g_724,&g_724,&g_312,&g_724,&g_724,&g_840.f0}};
            struct S0 l_2149 = {0x71L,4294967295UL,0x237E1F7F70B5E44BLL};
            int64_t l_2175 = 0x694FF3076BBA90C4LL;
            int i, j;
            for (g_299.f2.f1 = (-5); (g_299.f2.f1 <= 24); g_299.f2.f1++)
            { 
                uint32_t l_2105[6][2][4] = {{{0xD2F059B1L,4294967289UL,0xAACD9A87L,4294967289UL},{4294967289UL,0x87CB6BB0L,0UL,4294967289UL}},{{0UL,4294967289UL,0x4B072334L,0x4B072334L},{4294967295UL,4294967295UL,0xAACD9A87L,0xD2F059B1L}},{{4294967295UL,0x87CB6BB0L,0x4B072334L,4294967295UL},{0UL,0xD2F059B1L,0UL,0x4B072334L}},{{4294967289UL,0xD2F059B1L,0xAACD9A87L,4294967295UL},{0xD2F059B1L,0x87CB6BB0L,0x87CB6BB0L,0xD2F059B1L}},{{0UL,4294967295UL,0x87CB6BB0L,0x4B072334L},{0xD2F059B1L,4294967289UL,0xAACD9A87L,4294967289UL}},{{4294967289UL,0x87CB6BB0L,0UL,4294967289UL},{0UL,4294967289UL,0x4B072334L,0x4B072334L}}};
                struct S0 * const l_2108[3][6] = {{&g_840,&g_840,(void*)0,&g_840,&g_840,(void*)0},{&g_840,&g_840,(void*)0,&g_840,&g_840,(void*)0},{&g_840,&g_840,(void*)0,&g_840,&g_840,(void*)0}};
                struct S0 l_2124 = {0L,0x66886A44L,1L};
                int i, j, k;
                if (((0x1EL < l_2105[4][0][1]) < (&g_346[3][2][1] != (l_2106 , ((*g_967) , &g_346[0][2][0])))))
                { 
                    int32_t *l_2107 = &l_2099[0];
                    struct S0 **l_2109 = &g_290;
                    l_2107 = (*g_85);
                    (*l_2109) = ((l_2105[4][0][1] | 0L) , l_2108[1][0]);
                    l_2116 &= (safe_lshift_func_int8_t_s_s(l_2112, (safe_div_func_uint8_t_u_u((l_2115 |= (((-7L) & 1UL) || 3L)), p_25.f3))));
                }
                else
                { 
                    uint64_t ***l_2139 = &g_642;
                    l_2116 &= (safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((((!(safe_div_func_uint32_t_u_u(4294967295UL, (l_2124 , p_25.f0)))) < (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_2105[4][0][1], ((p_25.f3 & (((*l_2139) = ((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((2L != (safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((*g_1040) = (l_2137 , (*g_1040))) != (void*)0) >= 0xA65C1D33L), 0x16843E5753E7DE07LL)), p_25.f1))), 8UL)), 0xF86857D2L)) , l_2138)) != l_2138)) | g_2140))), p_26))) || l_35) || l_2141), p_26)) && 4UL), p_25.f3));
                }
            }
            l_2115 = (!(((void*)0 != l_2143) && (safe_div_func_int8_t_s_s(g_875, (g_1752.f2.f0 = 0xE2L)))));
            for (g_126 = (-20); (g_126 < (-18)); ++g_126)
            { 
                int16_t l_2163 = 0x58C1L;
                (*l_2050) = l_2149;
                for (l_2106.f2.f0 = 0; (l_2106.f2.f0 <= (-1)); l_2106.f2.f0 = safe_sub_func_int8_t_s_s(l_2106.f2.f0, 1))
                { 
                    int32_t *l_2154 = (void*)0;
                    int32_t *l_2155[3];
                    int32_t l_2156 = 0x7990A884L;
                    int64_t *l_2158 = &g_761.f4;
                    int64_t *l_2173 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2155[i] = &l_2115;
                    l_2156 &= (safe_add_func_uint64_t_u_u((*g_643), 4UL));
                    l_2174 ^= (l_2115 == (~(g_28[0][0][0] = (((*l_2158) = g_1454[2].f3) == (p_25.f4 = (((((&g_1454[2] != (void*)0) < (safe_sub_func_uint64_t_u_u(0UL, (((safe_lshift_func_int8_t_s_u((l_2163 ^ (~(!((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((~l_2115), p_25.f0)), g_58)) > g_840.f1)))), p_25.f1)) >= 1UL) == 18446744073709551610UL)))) < 0x5C3BL) , (void*)0) != l_2171))))));
                    if (p_26)
                        continue;
                    l_2175 ^= 0xB55D578EL;
                    l_2176 = (void*)0;
                }
                return l_2163;
            }
        }
        l_2115 ^= (&l_2115 == &l_2115);
        --l_2180;
        (**g_580) = (void*)0;
        l_2205 = ((g_71.f2.f2 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(250UL, (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((*l_2204) &= (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((p_25.f3 <= ((safe_unary_minus_func_int16_t_s(l_2198)) == ((void*)0 == l_2199[0]))) , l_2201) == l_2202), p_24)), (*g_255)))), p_24)), p_25.f0)))), p_25.f1))) != (*g_643));
    }
    for (g_840.f0 = 0; (g_840.f0 <= 3); g_840.f0 += 1)
    { 
        int16_t ****l_2207 = &g_1040;
        int16_t *****l_2206 = &l_2207;
        uint32_t l_2209 = 0x1B326F14L;
        struct S0 **l_2242 = &g_290;
        int32_t l_2246[2][4][1] = {{{0xD30B201FL},{0x28E74A81L},{0xD30B201FL},{0x28E74A81L}},{{0xD30B201FL},{0x28E74A81L},{0xD30B201FL},{0x28E74A81L}}};
        union U3 l_2255 = {0x1F80L};
        uint32_t l_2297 = 0x763B0026L;
        uint8_t **l_2300 = &g_701;
        int64_t **l_2308 = &l_44;
        int64_t ***l_2307 = &l_2308;
        int i, j, k;
        (*l_2206) = &g_1040;
    }
    if ((*****l_2202))
    { 
        int8_t l_2315 = 3L;
        int32_t l_2316 = 0xCCCB46E6L;
        int32_t *l_2317 = &g_2140;
        int32_t *l_2318 = &l_2099[1];
        int32_t *l_2319 = &l_2232[0][4];
        int32_t *l_2320 = &g_88;
        int32_t *l_2321 = &l_2099[0];
        int32_t *l_2322[1][5][5] = {{{&l_2099[0],&l_2099[0],&l_2099[0],&l_2099[0],&l_2099[0]},{&l_2232[0][2],&l_2232[0][2],&l_2232[0][2],&l_2232[0][2],&l_2232[0][2]},{&l_2099[0],&l_2099[0],&l_2099[0],&l_2099[0],&l_2099[0]},{&l_2232[0][2],&l_2232[0][2],&l_2232[0][2],&l_2232[0][2],&l_2232[0][2]},{&l_2099[0],&l_2099[0],&l_2099[0],&l_2099[0],&l_2099[0]}}};
        int32_t l_2323 = 0xFDF81F86L;
        int16_t l_2324 = (-8L);
        int8_t *l_2335 = &g_1752.f2.f0;
        uint8_t *l_2337[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2337[i] = &g_1470.f0;
        (*g_1636) = l_2176;
        --g_2325;
        (*l_2317) = (0x6177A408L ^ (safe_div_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((((*l_2335) = (safe_unary_minus_func_uint64_t_u(((*****l_2202) | p_24)))) <= (!((void*)0 != &g_1243))) < (g_1771[1][2][4] = ((p_25 , &l_2321) == (void*)0))), 0x1691L)) && 0x2EC7L), (*l_2318))) | (*l_2320)) != p_25.f1), 1L)));
        (*l_2317) &= 0x531110E7L;
    }
    else
    { 
        int32_t *l_2338 = &l_2099[0];
        uint8_t ****l_2340 = &l_2339[0];
lbl_2341:
        (*l_2338) ^= 4L;
        (*l_2338) = ((((*l_2340) = ((l_2106 , p_25.f2) , l_2339[0])) != &g_700) ^ (-9L));
        if (g_88)
            goto lbl_2341;
        for (g_1752.f2.f0 = (-13); (g_1752.f2.f0 < (-15)); g_1752.f2.f0 = safe_sub_func_int16_t_s_s(g_1752.f2.f0, 1))
        { 
            int32_t * const l_2344[3] = {&l_2099[0],&l_2099[0],&l_2099[0]};
            int32_t **l_2345[5];
            int32_t **l_2346 = &l_2338;
            int i;
            for (i = 0; i < 5; i++)
                l_2345[i] = &l_2338;
            (*l_2346) = l_2344[0];
            if ((****g_262))
                continue;
        }
    }
    l_2358--;
    return p_24;
}



static uint8_t  func_42(uint64_t  p_43)
{ 
    uint16_t l_51 = 0xE43DL;
    int32_t l_54 = 0xC6606A86L;
    uint64_t ****l_1842 = (void*)0;
    union U3 l_1866 = {1UL};
    union U2 l_1869[3] = {{0xAE4EAA67L},{0xAE4EAA67L},{0xAE4EAA67L}};
    int32_t l_1882 = 0xC523BD36L;
    int32_t l_1885 = 0x06A601DCL;
    int32_t l_1887 = 7L;
    union U1 l_1899 = {0x03L};
    int32_t l_1918 = (-9L);
    int32_t l_1919 = (-1L);
    int8_t l_1920[2];
    int32_t l_1921 = 0x0BC556D4L;
    int32_t l_1922 = 1L;
    int32_t l_1923 = (-1L);
    int32_t l_1924 = 1L;
    uint8_t ***l_2005 = &g_700;
    uint32_t **l_2007[7] = {&g_720[0][0],&g_720[0][0],&g_720[0][0],&g_720[0][0],&g_720[0][0],&g_720[0][0],&g_720[0][0]};
    int i;
    for (i = 0; i < 2; i++)
        l_1920[i] = 8L;
    for (p_43 = 0; (p_43 <= 1); p_43 += 1)
    { 
        int32_t *l_45 = (void*)0;
        int32_t l_46[6] = {5L,1L,1L,5L,1L,1L};
        int32_t *l_47 = &l_46[0];
        struct S0 l_1874 = {0x60L,0x343D71D4L,-1L};
        union U2 **l_1908[7][2][7] = {{{&g_346[5][0][3],(void*)0,&g_346[5][0][3],&g_346[5][2][2],&g_346[5][0][3],(void*)0,&g_346[5][0][3]},{&g_346[5][0][3],&g_346[5][0][0],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][0],&g_346[5][0][3],&g_346[5][0][3]}},{{&g_346[5][0][3],&g_346[5][2][2],&g_346[5][0][3],&g_346[5][2][2],&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3]},{&g_346[5][0][0],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][0],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3]}},{{&g_346[5][0][3],(void*)0,&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3]},{&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][0],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][0],&g_346[5][0][3]}},{{&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3],(void*)0,&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3]},{&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3]}},{{&g_346[5][0][3],(void*)0,&g_346[5][0][3],(void*)0,&g_346[5][0][3],&g_346[5][2][2],&g_346[5][0][3]},{&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3]}},{{&g_346[5][0][3],(void*)0,&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3]},{&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][0],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][0],&g_346[5][0][3]}},{{&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3],(void*)0,&g_346[5][0][3],&g_346[5][0][2],&g_346[5][0][3]},{&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3],&g_346[5][0][3]}}};
        union U2 ***l_1909 = (void*)0;
        union U2 ***l_1910 = &l_1908[2][1][5];
        int64_t l_1917 = 0xC7F4F97C3720428CLL;
        uint8_t l_1925 = 0x1DL;
        int i, j, k;
        g_48++;
    }
    return p_43;
}



static int32_t  func_61(const uint32_t  p_62)
{ 
    uint64_t l_65 = 0x4ED1E22517922C1ELL;
    int32_t *l_1661[1];
    uint8_t **l_1722[3][7][6] = {{{(void*)0,&g_701,&g_701,&g_701,&g_701,(void*)0},{&g_701,(void*)0,&g_701,(void*)0,&g_701,&g_701},{&g_701,(void*)0,&g_701,(void*)0,&g_701,&g_701},{&g_701,&g_701,(void*)0,(void*)0,&g_701,&g_701},{(void*)0,&g_701,&g_701,&g_701,&g_701,&g_701},{&g_701,&g_701,&g_701,&g_701,(void*)0,(void*)0},{&g_701,&g_701,&g_701,&g_701,&g_701,&g_701}},{{&g_701,&g_701,&g_701,&g_701,&g_701,&g_701},{&g_701,&g_701,(void*)0,(void*)0,(void*)0,(void*)0},{&g_701,&g_701,&g_701,&g_701,(void*)0,&g_701},{&g_701,&g_701,&g_701,&g_701,&g_701,(void*)0},{(void*)0,&g_701,&g_701,&g_701,&g_701,&g_701},{(void*)0,&g_701,&g_701,&g_701,(void*)0,&g_701},{&g_701,&g_701,&g_701,&g_701,&g_701,(void*)0}},{{&g_701,&g_701,&g_701,&g_701,&g_701,&g_701},{(void*)0,&g_701,&g_701,&g_701,&g_701,&g_701},{&g_701,(void*)0,&g_701,&g_701,&g_701,&g_701},{&g_701,(void*)0,&g_701,&g_701,&g_701,&g_701},{(void*)0,&g_701,(void*)0,&g_701,&g_701,(void*)0},{(void*)0,(void*)0,&g_701,&g_701,&g_701,&g_701},{&g_701,&g_701,&g_701,&g_701,(void*)0,(void*)0}}};
    union U3 * const *l_1749 = (void*)0;
    uint32_t l_1786 = 0xBC1C5F3CL;
    int8_t l_1815[5][1][4];
    struct S0 **l_1829[1][1][3];
    struct S0 ***l_1828[1];
    int32_t l_1830 = 0x4BD39E63L;
    int64_t l_1831 = 1L;
    uint8_t l_1832 = 8UL;
    int8_t l_1835[3][4][3] = {{{(-3L),7L,0x35L},{0xE8L,0xE8L,(-10L)},{1L,(-1L),1L},{0xE8L,0x47L,0x47L}},{{(-3L),(-1L),0x35L},{1L,0xE8L,0x47L},{1L,7L,1L},{1L,0x47L,(-10L)}},{{(-3L),7L,0x35L},{0xE8L,0xE8L,(-10L)},{1L,(-1L),1L},{0xE8L,0x47L,0x47L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1661[i] = &g_5;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_1815[i][j][k] = 1L;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_1829[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 1; i++)
        l_1828[i] = &l_1829[0][0][2];
    for (g_48 = 7; (g_48 != 19); ++g_48)
    { 
        union U3 *l_70 = &g_71;
        int32_t l_1669[3];
        int32_t * const *l_1758 = &g_86;
        int32_t * const **l_1757 = &l_1758;
        int32_t * const ***l_1756[7];
        uint16_t l_1777 = 0xA2A1L;
        int16_t l_1794 = 0x6D43L;
        uint8_t l_1798 = 4UL;
        struct S0 l_1799 = {-1L,4294967288UL,0x5FED528AB8409E00LL};
        int8_t **l_1802 = (void*)0;
        int64_t *l_1814 = &g_299.f2.f2;
        int16_t l_1816 = 0x704EL;
        int i;
        for (i = 0; i < 3; i++)
            l_1669[i] = 0x4D7B2421L;
        for (i = 0; i < 7; i++)
            l_1756[i] = &l_1757;
        if (l_65)
        { 
            union U1 l_83 = {0x04L};
            int32_t *l_841[6][7][5] = {{{(void*)0,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,(void*)0,&g_5,&g_5},{&g_5,(void*)0,(void*)0,&g_5,&g_5},{(void*)0,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,&g_5,(void*)0},{(void*)0,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0,&g_5},{(void*)0,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,(void*)0,(void*)0,&g_5,&g_5},{&g_5,&g_5,(void*)0,(void*)0,&g_5}},{{&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,(void*)0,(void*)0,(void*)0,&g_5},{&g_5,(void*)0,&g_5,&g_5,(void*)0}},{{&g_5,(void*)0,(void*)0,&g_5,&g_5},{(void*)0,&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{(void*)0,(void*)0,&g_5,&g_5,(void*)0},{(void*)0,&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,(void*)0,&g_5}},{{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,(void*)0,&g_5},{&g_5,(void*)0,(void*)0,&g_5,(void*)0},{&g_5,&g_5,&g_5,(void*)0,(void*)0},{&g_5,(void*)0,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,(void*)0,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0,(void*)0,&g_5},{&g_5,&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0,(void*)0,&g_5},{&g_5,&g_5,&g_5,&g_5,(void*)0}}};
            int8_t l_1668 = 1L;
            uint32_t l_1720[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1720[i] = 3UL;
            for (g_58 = 0; (g_58 == 29); g_58++)
            { 
                union U2 l_81 = {0UL};
                int32_t l_1657 = 0x0CD724F3L;
                struct S0 l_1660 = {1L,4294967289UL,-1L};
                union U3 **l_1662 = &l_70;
                int32_t *l_1667 = (void*)0;
                int32_t l_1670 = 0x4BA25A4FL;
                int32_t l_1671 = 1L;
                uint32_t l_1673 = 0x89BB97A6L;
                union U1 *l_1685 = &l_83;
                for (l_65 = 0; (l_65 < 38); l_65++)
                { 
                    union U3 *l_82[4] = {&g_71,&g_71,&g_71,&g_71};
                    union U1 *l_84 = &l_83;
                    int32_t l_842[7] = {5L,5L,5L,5L,5L,5L,5L};
                    uint32_t *l_1656 = &g_305;
                    int i;
                    l_70 = (void*)0;
                }
                if ((((safe_mul_func_int8_t_s_s(0x2EL, ((l_1660 , &l_1657) != l_1661[0]))) , ((((((*l_1662) = &g_30) == &g_299) & p_62) , 0L) != 0xA5CFF935FA51F2ECLL)) > p_62))
                { 
                    uint16_t l_1663 = 0x0ABBL;
                    int32_t *l_1666[7][3] = {{&l_1657,&g_5,&l_1657},{&l_1657,&g_5,&g_5},{&l_1657,&l_1657,&g_5},{&l_1657,&g_5,&g_5},{&g_5,&g_5,&g_5},{&l_1657,&g_5,&l_1657},{&l_1657,&g_5,&g_5}};
                    int i, j;
                    l_1663--;
                    l_1667 = l_1666[6][2];
                    return p_62;
                }
                else
                { 
                    int16_t l_1672 = 0xEAA7L;
                    l_1673--;
                }
                for (l_1668 = 10; (l_1668 < (-9)); l_1668 = safe_sub_func_uint32_t_u_u(l_1668, 4))
                { 
                    const int32_t l_1692 = 0x8C46C2DAL;
                    uint32_t *l_1693 = &l_1660.f1;
                    uint8_t *l_1702 = &g_1172.f0;
                    int64_t *l_1717 = &g_840.f2;
                    int64_t *l_1718 = &l_1660.f2;
                    int16_t *l_1719 = &g_1520[0];
                    int64_t *l_1721 = &g_299.f2.f2;
                    uint8_t ***l_1723 = &l_1722[2][2][1];
                    l_1669[0] |= 1L;
                }
                l_1669[1] = (l_1660 , (***g_580));
            }
        }
        else
        { 
            union U1 ***l_1744 = &g_1636;
            int32_t l_1783[1];
            int32_t l_1790 = 7L;
            union U3 *l_1791 = &g_30;
            uint64_t l_1795 = 0xCE9DC29E13D68DFALL;
            int i;
            for (i = 0; i < 1; i++)
                l_1783[i] = 0x9959F509L;
            for (g_840.f0 = (-15); (g_840.f0 <= 9); g_840.f0 = safe_add_func_uint32_t_u_u(g_840.f0, 3))
            { 
                uint8_t ***l_1741 = (void*)0;
                uint8_t ****l_1740 = &l_1741;
                const int32_t l_1745 = 0x3F47C427L;
                int32_t l_1759 = 0x83D90EF1L;
                int32_t l_1782 = 0xF08D5376L;
                int32_t l_1785[1][2];
                union U3 *l_1792 = &g_299;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1785[i][j] = 1L;
                }
                for (g_1262 = (-21); (g_1262 != 43); g_1262++)
                { 
                    uint32_t l_1735 = 8UL;
                    g_1746 |= ((safe_mod_func_int32_t_s_s(p_62, ((safe_rshift_func_uint16_t_u_s(((!((l_1669[0] | (safe_rshift_func_int8_t_s_s(l_1735, g_375))) != (safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((l_1740 != g_1129), ((**g_642) ^= (safe_div_func_uint32_t_u_u(((((l_1744 == l_1744) >= l_1745) || 65535UL) < 0xF0F5L), p_62))))) | p_62), p_62)))) , 1UL), p_62)) , p_62))) >= 0x4C952BB7L);
                }
                l_1759 = ((9L < (((g_1750 = l_1749) == ((!p_62) , &g_1751)) >= (safe_lshift_func_uint16_t_u_u((l_1756[3] == (*g_116)), (1UL || g_375))))) , 0x0D798C54L);
                for (g_1241 = 0; (g_1241 < 17); g_1241++)
                { 
                    int32_t l_1762 = 0xFF20F015L;
                    l_1762 |= 1L;
                    return g_1763;
                }
            }
            l_1783[0] = l_1783[0];
            l_1783[0] |= l_1798;
            (*g_290) = l_1799;
        }
        l_1816 = ((safe_mod_func_uint64_t_u_u((*g_643), ((g_675[0][2] = ((l_1802 == l_1802) > 0xD8521F911A4E28AFLL)) ^ ((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((safe_mod_func_int32_t_s_s((((*l_70) , (safe_lshift_func_int8_t_s_s(g_724, 0))) <= ((*l_1814) = (safe_mul_func_int8_t_s_s(0L, (***l_1757))))), p_62)) & p_62))), l_1815[3][0][3])), g_347.f1)) | 0x9E9B804F2EC5C0BALL)))) && 8UL);
        (*g_290) = l_1799;
        l_1830 = (!(((*g_218) |= (0xFC4D09F81B4AA68ALL && p_62)) || ((safe_mul_func_uint8_t_u_u(((g_1771[2][2][0] = (g_675[0][1] ^= 1UL)) > ((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((*l_70) , (*l_70)) , ((((((l_1828[0] != g_1455) < (*g_86)) , 0xD3L) , 0xEB9E617D282CDA8DLL) != (*g_643)) <= p_62)), 247UL)), p_62)), (-9L))), g_1470.f0)) != 0x36L)), (**l_1758))) ^ 0xEDEBBFB52A2C91D1LL)));
    }
    l_1832++;
    l_1835[0][2][1] |= (****g_579);
    return p_62;
}



static uint32_t  func_72(int64_t * p_73, union U3  p_74, const union U3  p_75, int32_t * p_76, int64_t  p_77)
{ 
    const int8_t l_857 = 0xF8L;
    int16_t **l_870[6] = {&g_218,&g_218,&g_218,&g_218,&g_218,&g_218};
    uint64_t l_877 = 1UL;
    int32_t l_878[4] = {5L,5L,5L,5L};
    uint16_t *l_901 = &g_204.f0;
    int32_t l_946 = 3L;
    union U1 l_954 = {247UL};
    struct S0 **l_1045 = &g_290;
    union U1 l_1059 = {0xDDL};
    uint64_t ***l_1064[2];
    uint32_t l_1068[4][1] = {{0x1A6B7804L},{0UL},{0x1A6B7804L},{0UL}};
    union U2 **l_1085 = &g_346[5][0][3];
    int32_t **l_1126 = (void*)0;
    union U1 **l_1166 = &g_967;
    int16_t l_1240[3][4][6] = {{{(-1L),6L,0x646AL,0xDB5DL,(-4L),(-4L)},{4L,0xFA55L,0xFA55L,4L,(-9L),0xDD01L},{0xB366L,0xFA55L,(-9L),0L,(-4L),6L},{0xDB5DL,6L,0x72F7L,0x2B5FL,(-4L),0xBBEDL}},{{(-1L),0xFA55L,0x720EL,(-1L),(-9L),0x646AL},{0x4B69L,0xFA55L,(-4L),0xB366L,(-4L),0xFA55L},{0x2B5FL,6L,0xDD01L,(-1L),(-4L),(-9L)},{(-1L),0xFA55L,6L,(-1L),(-9L),0x72F7L}},{{0L,0xFA55L,0xBBEDL,0x4B69L,(-4L),0x720EL},{(-1L),6L,0x646AL,0xDB5DL,(-4L),(-4L)},{4L,0xFA55L,0xFA55L,4L,(-9L),0xDD01L},{0xB366L,0xFA55L,(-9L),0L,(-4L),6L}}};
    uint32_t l_1251[2];
    const union U3 *l_1345[7] = {&g_30,(void*)0,(void*)0,&g_30,(void*)0,(void*)0,&g_30};
    const union U3 **l_1344 = &l_1345[6];
    int64_t l_1398 = 0x527BAD2C7E5EF003LL;
    uint32_t l_1430 = 0x6102B2CFL;
    int32_t l_1562 = (-6L);
    uint64_t l_1567[3];
    int32_t ** const *l_1584 = &g_85;
    int32_t ** const **l_1583 = &l_1584;
    int64_t l_1610 = 7L;
    int64_t *l_1645 = &g_126;
    int64_t **l_1644 = &l_1645;
    int64_t ***l_1643 = &l_1644;
    uint16_t l_1646 = 1UL;
    uint32_t l_1652 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1064[i] = &g_642;
    for (i = 0; i < 2; i++)
        l_1251[i] = 0x79A41756L;
    for (i = 0; i < 3; i++)
        l_1567[i] = 0x1F7362562B6D49FALL;
    (***g_262) = p_76;
    for (g_71.f2.f1 = 24; (g_71.f2.f1 == 8); g_71.f2.f1 = safe_sub_func_int32_t_s_s(g_71.f2.f1, 6))
    { 
        int32_t l_854 = (-4L);
        int16_t *l_869 = &g_534;
        int16_t ***l_871 = &l_870[2];
        int16_t *l_874[6];
        int64_t *l_876 = &g_28[1][2][3];
        uint64_t l_917 = 18446744073709551610UL;
        uint8_t l_934 = 0x10L;
        union U1 l_945 = {0xD3L};
        int32_t *l_949[4];
        int i;
        for (i = 0; i < 6; i++)
            l_874[i] = &g_875;
        for (i = 0; i < 4; i++)
            l_949[i] = (void*)0;
        for (p_74.f2.f0 = 0; (p_74.f2.f0 <= 2); p_74.f2.f0 += 1)
        { 
            const uint32_t l_845 = 0xC31C1DB5L;
            uint64_t l_849 = 0xFAF4F9037F917AAELL;
            int32_t l_858 = 0x27F01EADL;
            if (l_845)
                break;
            for (g_204.f0 = 0; (g_204.f0 <= 2); g_204.f0 += 1)
            { 
                int32_t *l_846 = &g_88;
                int32_t *l_847 = (void*)0;
                int32_t *l_848 = (void*)0;
                --l_849;
                l_854 = (((-1L) || (g_761.f1 = (((0xF2A764356D8214CALL | (safe_mod_func_uint64_t_u_u(p_77, p_74.f0))) && l_854) <= ((safe_sub_func_uint16_t_u_u((p_77 == (((&g_312 == (void*)0) || (*g_218)) ^ p_74.f0)), p_77)) ^ l_857)))) && 0x12CE1D69197FF21BLL);
                l_858 ^= (((void*)0 == &g_720[2][1]) , (*l_846));
            }
        }
        l_878[1] = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((((*l_876) = ((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u(((*g_218) = (((*l_869) |= (*g_218)) , 0x811CL)), (g_28[1][2][3] == 0x1DL))) ^ (((*l_871) = l_870[0]) != (void*)0)) <= (l_854 = ((safe_add_func_uint32_t_u_u(p_75.f0, 0L)) & p_77))), l_857)) , p_74.f0) >= p_74.f0), 4)) | p_74.f0)) && (-8L)), 0xCAL)), l_877)) != p_77) | p_75.f0);
        if (l_877)
        { 
            int8_t *l_885 = &g_312;
            int8_t *l_886[6][2];
            int32_t l_887 = 0x4268B184L;
            int32_t l_890[2][1];
            uint16_t **l_899 = (void*)0;
            uint16_t **l_900[1];
            int32_t *l_911 = &l_878[1];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_886[i][j] = &g_299.f2.f0;
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_890[i][j] = 1L;
            }
            for (i = 0; i < 1; i++)
                l_900[i] = &g_255;
            l_890[1][0] = (safe_mul_func_int16_t_s_s((+((p_74.f2.f0 = (((*g_338) = 0x67C58631L) ^ (safe_sub_func_uint64_t_u_u((~(((*l_876) |= 0xE04F6356CF7C155FLL) <= ((l_878[1] &= ((*l_885) = g_724)) >= (l_887 , (l_887 = 0xDEL))))), l_854)))) && (safe_lshift_func_uint16_t_u_s((p_75.f0 , p_75.f0), 8)))), p_77));
            (*l_911) = (safe_mul_func_uint16_t_u_u(((g_675[0][2] = ((((safe_mod_func_int16_t_s_s((*g_218), (0x54E0B710L ^ (((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((246UL >= ((((l_901 = g_218) == g_218) , (!((((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*g_290) , ((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((void*)0 == g_218), 0x7539L)), g_299.f0)) == l_857)), g_840.f0)), 1UL)) > l_887) || (**g_642)) > 0x75L))) && (-9L))) & p_77), 12)), (*g_255))) <= l_854) != p_77)))) >= 1UL) || p_75.f0) <= l_890[1][0])) != g_28[1][2][3]), p_74.f0));
        }
        else
        { 
            uint32_t l_914 = 0x96A49705L;
            for (g_204.f2.f2 = 0; (g_204.f2.f2 > 16); g_204.f2.f2 = safe_add_func_uint16_t_u_u(g_204.f2.f2, 8))
            { 
                uint16_t l_929 = 0UL;
                l_914++;
            }
        }
        l_878[1] = ((*g_290) , ((0x634BL != (((safe_mod_func_int16_t_s_s((l_945 , l_946), (((***l_871) = (safe_div_func_int64_t_s_s((((l_854 ^= ((*g_338) = p_75.f0)) == (0x4BE0464C749C0028LL > l_934)) , 0xCA35CCFFEDAE7618LL), p_75.f0))) || l_857))) , l_877) != l_857)) < g_71.f2.f1));
    }
    if (p_74.f0)
    { 
        uint8_t l_958 = 0x50L;
        uint8_t *l_971 = &l_958;
        uint32_t l_986[5] = {1UL,1UL,1UL,1UL,1UL};
        union U1 l_1029[7][5] = {{{0x6DL},{249UL},{0x6DL},{249UL},{0x6DL}},{{252UL},{1UL},{1UL},{252UL},{252UL}},{{0x55L},{249UL},{0x55L},{249UL},{0x55L}},{{252UL},{252UL},{1UL},{1UL},{252UL}},{{0x6DL},{249UL},{0x6DL},{249UL},{0x6DL}},{{252UL},{1UL},{1UL},{252UL},{252UL}},{{0x55L},{249UL},{0x55L},{249UL},{0x55L}}};
        int32_t *****l_1030[3];
        union U3 l_1044 = {1UL};
        int8_t l_1058 = (-6L);
        struct S0 l_1060[4][5][3] = {{{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}}},{{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}}},{{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}}},{{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}},{{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L},{0xB0L,0xD56F7418L,-9L}}}};
        union U2 * const *l_1101 = &g_346[5][0][3];
        struct S0 l_1111[3][1] = {{{0x74L,0xAA0E41F8L,0xF617F9A65171C65DLL}},{{0x74L,0xAA0E41F8L,0xF617F9A65171C65DLL}},{{0x74L,0xAA0E41F8L,0xF617F9A65171C65DLL}}};
        int16_t * const l_1131 = &g_875;
        uint16_t l_1134 = 65535UL;
        int64_t l_1219 = 0x69EF7E2B7449C3DCLL;
        int64_t l_1242 = 0L;
        uint8_t ***l_1246 = &g_700;
        const uint8_t **l_1248 = (void*)0;
        const uint8_t ***l_1247 = &l_1248;
        uint16_t * const *l_1257 = &g_255;
        int8_t * const l_1295 = &g_840.f0;
        int8_t * const *l_1294[2][1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1030[i] = (void*)0;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1294[i][j] = &l_1295;
        }
        for (g_554 = 0; (g_554 >= 51); g_554 = safe_add_func_uint16_t_u_u(g_554, 9))
        { 
            for (p_77 = (-1); (p_77 >= (-26)); --p_77)
            { 
                int8_t *l_957 = &g_724;
                union U3 *l_959 = (void*)0;
                union U3 **l_960 = (void*)0;
                union U3 **l_961 = &g_203;
                l_958 |= ((l_954 , (g_299.f2.f2 = (safe_mul_func_int8_t_s_s(((*l_957) = p_75.f0), 0x73L)))) ^ (-3L));
                l_878[1] = l_954.f0;
                (*l_961) = l_959;
            }
        }
    }
    else
    { 
        uint64_t l_1305 = 18446744073709551606UL;
        int32_t l_1311[7];
        uint16_t l_1347 = 65526UL;
        int32_t l_1359 = 0xFAFE60C8L;
        int16_t l_1364 = 0xF0F0L;
        uint16_t l_1365 = 1UL;
        int16_t l_1557 = 0x0DBEL;
        uint16_t *l_1576 = &g_204.f0;
        union U3 l_1596 = {0UL};
        int8_t l_1629 = 0xCFL;
        uint8_t **l_1631 = &g_701;
        int64_t **l_1642 = (void*)0;
        int64_t ***l_1641 = &l_1642;
        int32_t l_1647 = (-9L);
        int i;
        for (i = 0; i < 7; i++)
            l_1311[i] = 0x709CEAF4L;
        for (p_74.f2.f2 = (-1); (p_74.f2.f2 >= 14); ++p_74.f2.f2)
        { 
            int32_t l_1303 = 0xF202CED0L;
            int32_t l_1304 = 0xFC5DA1EBL;
            for (g_204.f0 = (-15); (g_204.f0 > 3); g_204.f0 = safe_add_func_int64_t_s_s(g_204.f0, 9))
            { 
                for (l_1059.f0 = (-23); (l_1059.f0 <= 21); ++l_1059.f0)
                { 
                    l_878[1] = 0xE007D5CBL;
                }
                l_1304 &= (l_1303 <= g_71.f3.f0);
                (**g_263) = &l_1304;
                if ((****g_579))
                    break;
            }
            return l_1305;
        }
        if (((*g_643) & l_1305))
        { 
            uint16_t * const *l_1309 = &l_901;
            uint16_t * const **l_1310 = &l_1309;
            int32_t l_1321 = 0x8CFA5855L;
            union U1 l_1332[6][3][1] = {{{{255UL}},{{255UL}},{{0UL}}},{{{0UL}},{{255UL}},{{255UL}}},{{{255UL}},{{0UL}},{{0UL}}},{{{255UL}},{{255UL}},{{255UL}}},{{{0UL}},{{0UL}},{{255UL}}},{{{255UL}},{{255UL}},{{0UL}}}};
            int i, j, k;
            l_1311[4] = (safe_add_func_uint32_t_u_u((~(p_74 , (((*l_1310) = l_1309) == (void*)0))), 0x6DC267E6L));
            for (l_1059.f0 = 0; (l_1059.f0 <= 6); l_1059.f0 += 1)
            { 
                uint32_t *l_1320 = &l_1251[1];
                int32_t l_1322 = 1L;
                int i;
                if ((((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_1311[l_1059.f0], (safe_mul_func_int16_t_s_s(l_1311[l_1059.f0], (safe_sub_func_int16_t_s_s((((*l_1320) = 0xBDC57455L) , (l_1321 | (l_1322 = l_1321))), ((safe_unary_minus_func_uint64_t_u((safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_77 > ((safe_lshift_func_int8_t_s_s((l_1332[0][1][0] , p_77), 5)) && p_75.f0)), p_77)), (-1L))) < 0UL), 0xEB7D257B46C5756ELL)))) == p_77))))))), 1L)) ^ p_77) != l_1311[4]))
                { 
                    int32_t l_1337 = 0x5E46014FL;
                    int64_t **l_1339 = (void*)0;
                    int64_t *** const l_1338 = &l_1339;
                    int i;
                    if (l_1311[l_1059.f0])
                        break;
                    l_1311[l_1059.f0] ^= (safe_mod_func_uint32_t_u_u(p_74.f0, ((l_1337 == ((l_1338 != &l_1339) ^ (*g_255))) ^ ((((*l_1320) = ((&g_203 != (((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_1337, (*g_255))), 0xFDL)) == l_1332[0][1][0].f0) , l_1344)) && l_1337)) , 0x3B6F8E3058CD9B4DLL) != (**g_642)))));
                }
                else
                { 
                    int32_t *l_1346[2];
                    int8_t *l_1358 = &g_299.f2.f0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1346[i] = &l_1322;
                    --l_1347;
                    p_74.f2 = (*g_290);
                    l_1321 &= l_1332[0][1][0].f0;
                    l_1359 ^= ((&g_643 != (void*)0) < (safe_mod_func_uint32_t_u_u(l_1321, (safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((l_1311[2] &= (p_74.f3.f0 , 0x66L)), 1)), p_74.f2.f0)), (*g_255))))));
                }
            }
        }
        else
        { 
            int64_t l_1360 = 0x01CF70FAC7B4514ELL;
            int32_t *l_1361 = &g_88;
            int32_t *l_1362 = &l_1359;
            int32_t *l_1363[2];
            struct S0 *l_1368 = (void*)0;
            struct S0 *l_1369 = &g_204.f2;
            int i;
            for (i = 0; i < 2; i++)
                l_1363[i] = &l_1359;
            ++l_1365;
            (*l_1369) = (**l_1045);
            (*l_1361) |= (safe_div_func_int32_t_s_s(p_75.f0, (safe_mul_func_int8_t_s_s(p_77, g_1374))));
        }
        for (g_204.f1 = 4; (g_204.f1 >= 0); g_204.f1 -= 1)
        { 
            int8_t l_1376 = 0xEAL;
            uint32_t l_1388 = 0x72B823E0L;
            int32_t *l_1390 = &l_1359;
            int32_t *l_1391 = &l_1311[4];
            int32_t *l_1392 = &l_1359;
            int32_t *l_1393 = (void*)0;
            int32_t *l_1394 = &l_1359;
            int32_t *l_1395 = (void*)0;
            int32_t *l_1396 = &l_878[1];
            int32_t *l_1397[1];
            uint32_t l_1399 = 0xA51141A1L;
            int i;
            for (i = 0; i < 1; i++)
                l_1397[i] = &g_88;
            for (g_71.f1 = 0; (g_71.f1 <= 5); g_71.f1 += 1)
            { 
                const int64_t l_1387 = 2L;
                uint32_t l_1389[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1389[i] = 0x317A87FAL;
                l_1376 = ((0xF7E99D13L || (safe_unary_minus_func_uint64_t_u(p_75.f0))) > p_74.f0);
                l_1359 ^= (safe_sub_func_uint32_t_u_u(p_75.f0, 0UL));
                l_1359 ^= ((p_75 , (safe_sub_func_uint32_t_u_u(((((&l_1064[1] == (((0x270740F62176ED7BLL == (safe_div_func_uint16_t_u_u(9UL, (((l_1311[4] && (l_1311[4] = p_75.f0)) >= (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_74.f0, l_1387)), l_1388))) && (**g_642))))) || l_1389[0]) , (void*)0)) || p_77) || g_1262) ^ g_4), l_1305))) | g_554);
                return p_75.f0;
            }
            l_1399++;
        }
        for (g_347.f2 = (-15); (g_347.f2 != 25); g_347.f2 = safe_add_func_int32_t_s_s(g_347.f2, 8))
        { 
            union U2 l_1417 = {4294967294UL};
            int32_t l_1420 = (-7L);
            int32_t l_1421 = 0xEDF995A5L;
            int32_t l_1425 = (-6L);
            int32_t l_1426 = 0x39899873L;
            int32_t l_1427[5] = {0x265878FBL,0x265878FBL,0x265878FBL,0x265878FBL,0x265878FBL};
            uint16_t l_1460[6] = {2UL,6UL,2UL,2UL,6UL,2UL};
            struct S0 l_1489 = {0xC0L,1UL,-3L};
            int i;
            for (g_115 = (-14); (g_115 >= 31); ++g_115)
            { 
                uint64_t l_1412 = 0x663690F243B180B6LL;
                int32_t *l_1416 = &l_1359;
                uint8_t *l_1418 = (void*)0;
                uint8_t *l_1419[5];
                int32_t l_1424 = 0x702F8D93L;
                int32_t l_1429 = 0L;
                union U2 *l_1453 = &g_1454[2];
                uint32_t l_1486 = 0x96DF26EBL;
                int32_t l_1515 = 6L;
                int32_t l_1516 = 0x586886B1L;
                int32_t l_1518 = (-5L);
                int32_t l_1519 = 0x62FF62B8L;
                int32_t l_1521 = 0x83E12EB4L;
                int32_t l_1522 = 0x9F657F7FL;
                int32_t l_1523 = (-3L);
                int32_t l_1524 = 5L;
                uint8_t l_1525 = 0xDEL;
                int i;
                for (i = 0; i < 5; i++)
                    l_1419[i] = (void*)0;
                if ((l_1421 = (((void*)0 == &g_196) & (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_1420 &= (((safe_mul_func_uint16_t_u_u(((((*l_1416) &= (((*g_255) ^= (l_1412 || ((+l_1311[4]) ^ (safe_mul_func_int8_t_s_s(((p_77 && 0x264A55FF00479A9BLL) , 1L), l_1365))))) | p_74.f0)) , l_1417) , 0UL), p_75.f0)) , g_5) && (**g_642))), p_77)), 0)))))
                { 
                    int32_t *l_1422 = &l_878[1];
                    int32_t *l_1423[1];
                    int8_t l_1428 = 0x8BL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1423[i] = &l_1359;
                    l_1430--;
                    if (p_77)
                        break;
                }
                else
                { 
                    if (p_74.f0)
                        break;
                }
                if ((65527UL & ((g_201[6].f0 > ((*g_643) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int32_t_s_s(((g_71.f2.f2 = 0xCADCDBC56C04D451LL) , (((safe_mul_func_uint8_t_u_u(((p_77 && 0xE0L) == (p_74.f0 > (4L >= l_857))), 249UL)) || (*l_1416)) != 1UL)), 0L)), p_77)), 9)) && 0xE1A0L), 0x5B3A5972DEFA105ALL)) >= 0x2CF3L), l_1311[0])), 4294967293UL)), 10)) | (*g_86)), 0)), 0x6AL)) || 0xA1L))) && p_75.f0)))
                { 
                    int16_t l_1456 = 0x50C3L;
                    int32_t l_1457 = 1L;
                    int32_t *l_1458 = &l_1420;
                    int32_t *l_1459[3][1];
                    struct S0 l_1466 = {1L,0xFDCE173EL,0x199D1D82F39B7817LL};
                    union U1 * const l_1469 = &g_1470;
                    union U1 * const *l_1468[5][3] = {{&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469},{&l_1469,&l_1469,&l_1469}};
                    union U1 * const **l_1467 = &l_1468[1][0];
                    union U1 * const *l_1472 = &l_1469;
                    union U1 * const **l_1471 = &l_1472;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1459[i][j] = (void*)0;
                    }
                    l_1453 = &g_201[6];
                    g_1455 = (void*)0;
                    l_1460[1]--;
                    (*l_1458) ^= ((~((((**g_642) = (safe_add_func_uint32_t_u_u(((*g_338) = (l_1466 , ((void*)0 == l_1453))), p_75.f0))) , ((*l_1467) = &g_967)) == ((*l_1471) = &g_967))) < (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((((*l_1453) , (void*)0) != &g_1263), (*l_1416))) ^ g_724), 0x85L)), p_77)));
                }
                else
                { 
                    int32_t *l_1479 = &g_88;
                    int32_t *l_1480 = &l_878[1];
                    int32_t *l_1481 = &l_1425;
                    int32_t *l_1482 = (void*)0;
                    int32_t *l_1483 = &l_1420;
                    int32_t *l_1484 = &l_1421;
                    int32_t *l_1485[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1485[i] = (void*)0;
                    l_1486--;
                }
                (*g_290) = l_1489;
                for (l_1359 = 0; (l_1359 <= 4); l_1359 += 1)
                { 
                    int64_t l_1490 = 0L;
                    int32_t *l_1491 = &l_878[1];
                    int32_t *l_1492 = (void*)0;
                    int32_t l_1493 = 0xCA069E97L;
                    int32_t *l_1494 = &l_1311[4];
                    int32_t *l_1495 = &l_1421;
                    int32_t *l_1496 = (void*)0;
                    int32_t *l_1497 = &l_878[1];
                    int32_t *l_1498 = &l_1420;
                    int32_t *l_1499 = &l_1311[5];
                    int32_t *l_1500 = (void*)0;
                    int32_t *l_1501 = &l_1427[4];
                    int32_t l_1502 = (-1L);
                    int32_t *l_1503 = &l_878[1];
                    int32_t *l_1504 = &l_1311[4];
                    int32_t *l_1505 = &l_878[1];
                    int32_t *l_1506 = &l_1427[4];
                    int32_t *l_1507 = &l_1311[4];
                    int32_t *l_1508 = (void*)0;
                    int32_t *l_1509 = &l_878[1];
                    int32_t *l_1510 = (void*)0;
                    int32_t *l_1511 = &l_1427[4];
                    int32_t *l_1512 = &l_878[3];
                    int32_t *l_1513 = &l_1311[3];
                    int32_t *l_1514[4] = {&l_1502,&l_1502,&l_1502,&l_1502};
                    int32_t l_1517 = (-5L);
                    int i;
                    ++l_1525;
                }
                for (l_1059.f0 = (-7); (l_1059.f0 < 16); l_1059.f0 = safe_add_func_uint16_t_u_u(l_1059.f0, 1))
                { 
                    int32_t *l_1530 = &l_1311[4];
                    (**g_580) = l_1530;
                    return p_77;
                }
            }
            if (l_1364)
                break;
            for (g_554 = 0; (g_554 != 14); g_554 = safe_add_func_uint16_t_u_u(g_554, 1))
            { 
                struct S0 l_1533 = {0L,1UL,0x2BBF9D085BCAC708LL};
                uint32_t l_1546 = 0xE6606B49L;
                uint32_t l_1548 = 0x5BE10903L;
                int32_t l_1549 = (-9L);
                int32_t l_1553 = 4L;
                int32_t l_1561 = 0x36B7DECFL;
                int32_t l_1563 = 0x0455AC25L;
                int32_t l_1564 = (-2L);
                int32_t l_1565 = (-10L);
                int32_t l_1566[3][5] = {{0x23DB8AEDL,0xCDFDBB72L,0x23DB8AEDL,0xCB37F5F0L,0xCB37F5F0L},{0x23DB8AEDL,0xCDFDBB72L,0x23DB8AEDL,0xCB37F5F0L,0xCB37F5F0L},{0x23DB8AEDL,0xCDFDBB72L,0x23DB8AEDL,0xCB37F5F0L,0xCB37F5F0L}};
                uint16_t *l_1574 = &g_1262;
                uint16_t **l_1575[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int16_t ***l_1590[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                uint8_t l_1611 = 0x9BL;
                uint8_t **l_1626 = &g_701;
                union U1 ***l_1637[4];
                int32_t *l_1655 = &l_1426;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1637[i] = &l_1166;
                (*g_290) = (l_1489 , l_1533);
                for (g_128 = (-5); (g_128 >= 15); g_128 = safe_add_func_uint16_t_u_u(g_128, 5))
                { 
                    uint8_t l_1547[3][2] = {{8UL,8UL},{1UL,8UL},{8UL,1UL}};
                    int32_t *l_1550 = &l_1425;
                    int32_t *l_1551 = &l_878[0];
                    int32_t *l_1552 = &l_1426;
                    int32_t *l_1554 = &l_1420;
                    int32_t *l_1555 = &l_1420;
                    int32_t *l_1556[5] = {&l_1420,&l_1420,&l_1420,&l_1420,&l_1420};
                    int i, j;
                    l_1549 = (safe_lshift_func_int16_t_s_u(((*g_218) = p_77), (safe_rshift_func_uint8_t_u_s((l_1364 && (((((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((p_75.f0 | ((l_1546 | l_1547[2][0]) <= g_299.f0)), 6)) ^ l_1548), (-6L))) <= p_77) && p_74.f0) & 0x255AL) != g_1263)), l_1548))));
                    p_74.f2 = (*g_290);
                    g_1558[4]--;
                    l_1567[1]--;
                }
                p_76 = &l_1562;
            }
            for (l_1489.f2 = 0; l_1489.f2 < 7; l_1489.f2 += 1)
            {
                g_1558[l_1489.f2] = 2UL;
            }
        }
    }
    return g_71.f0;
}



static int64_t * func_78(union U3 * p_79, union U1  p_80)
{ 
    int32_t ***l_87 = &g_85;
    struct S0 l_89 = {-4L,0x6160D4A0L,-1L};
    struct S0 *l_90 = &g_71.f2;
    struct S0 *l_91 = &l_89;
    int32_t l_102[5];
    int8_t l_149 = 1L;
    union U3 *l_150 = &g_71;
    union U2 l_160 = {0x76CAEA25L};
    int16_t *l_213 = &g_207;
    uint16_t *l_254[3][7][1] = {{{&g_30.f0},{&g_71.f0},{&g_71.f0},{&g_204.f0},{&g_30.f0},{&g_30.f0},{&g_204.f0}},{{&g_30.f0},{&g_30.f0},{&g_204.f0},{&g_30.f0},{&g_30.f0},{&g_204.f0},{&g_30.f0}},{{&g_30.f0},{&g_204.f0},{&g_30.f0},{&g_30.f0},{&g_204.f0},{&g_30.f0},{&g_30.f0}}};
    uint32_t *l_260 = &g_128;
    uint32_t l_272 = 18446744073709551609UL;
    int8_t l_311 = (-1L);
    uint8_t l_422[6][3][7] = {{{1UL,0x54L,0x7BL,255UL,255UL,0x7BL,0x54L},{0xFDL,0x5AL,0xE8L,0xC5L,0xFDL,0xC5L,0xE8L},{255UL,0x9CL,0x7BL,0x51L,1UL,1UL,0x51L}},{{251UL,0x66L,251UL,0xC5L,255UL,0x66L,255UL},{0x9CL,0x51L,0x54L,255UL,1UL,255UL,255UL},{0xFDL,0x1CL,0x40L,0x1CL,0xFDL,0x66L,0x40L}},{{0x69L,0x9CL,0x51L,0x54L,255UL,1UL,255UL},{255UL,0xC5L,251UL,0x66L,251UL,0xC5L,255UL},{0x69L,0x54L,255UL,255UL,0x9CL,0x7BL,0x51L}},{{0xFDL,0xC5L,0xE8L,0x5AL,0xFDL,0x5AL,0xE8L},{0x9CL,0x9CL,255UL,0x51L,0x69L,1UL,0x54L},{251UL,0x1CL,251UL,0x5AL,255UL,0x1CL,255UL}},{{255UL,0x51L,0x51L,255UL,0x69L,255UL,0x7BL},{0xFDL,0x66L,0x40L,0x66L,0xFDL,0x1CL,0x40L},{1UL,0x9CL,0x54L,0x54L,0x9CL,1UL,0x7BL}},{{255UL,0x5AL,251UL,0x1CL,251UL,0x5AL,255UL},{1UL,0x54L,0x7BL,255UL,255UL,0x7BL,0x54L},{0xFDL,0x5AL,0xE8L,0xC5L,0xFDL,0xC5L,0xE8L}}};
    int32_t * const **l_531 = (void*)0;
    int32_t * const ***l_530 = &l_531;
    int64_t *l_557 = (void*)0;
    int64_t *l_559[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_28[0][2][2],(void*)0,(void*)0,&g_28[0][2][2],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    union U2 * const *l_631 = &g_346[4][0][0];
    const uint32_t l_722[4] = {0x157E1A30L,0x157E1A30L,0x157E1A30L,0x157E1A30L};
    int32_t l_723 = 0x4431FCECL;
    int8_t l_727 = (-1L);
    int8_t l_751 = 0x70L;
    uint32_t l_815 = 18446744073709551612UL;
    int8_t l_836 = (-1L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_102[i] = 0xD6319DC0L;
    (*l_87) = g_85;
    for (g_71.f0 = 0; g_71.f0 < 2; g_71.f0 += 1)
    {
        for (p_80.f0 = 0; p_80.f0 < 3; p_80.f0 += 1)
        {
            for (g_88 = 0; g_88 < 5; g_88 += 1)
            {
                g_28[g_71.f0][p_80.f0][g_88] = 8L;
            }
        }
    }
    (*l_91) = ((*l_90) = l_89);
    for (l_89.f0 = 0; (l_89.f0 <= (-29)); l_89.f0 = safe_sub_func_int8_t_s_s(l_89.f0, 6))
    { 
        int32_t ****l_105[4] = {&l_87,&l_87,&l_87,&l_87};
        uint64_t l_112 = 0xB4ADBCF703B84D85LL;
        int8_t *l_113[1][5][3] = {{{(void*)0,&l_89.f0,(void*)0},{&g_71.f2.f0,&l_89.f0,&g_71.f2.f0},{(void*)0,&l_89.f0,(void*)0},{&g_71.f2.f0,&l_89.f0,&g_71.f2.f0},{&g_71.f2.f0,(void*)0,&g_71.f2.f0}}};
        uint8_t *l_114 = &g_115;
        int64_t *l_118[5][7] = {{&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][1][4],&g_28[1][2][3],&g_28[1][2][3]},{&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][1][4],&g_28[1][2][3],&g_28[1][2][3]},{&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][1][4],&g_28[1][2][3],&g_28[1][2][3]},{&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][1][4],&g_28[1][2][3],&g_28[1][2][3]},{&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][2][3],&g_28[1][1][4],&g_28[1][2][3],&g_28[1][2][3]}};
        const struct S0 l_151 = {1L,0UL,7L};
        union U2 l_184 = {0UL};
        int8_t l_208 = 0xF5L;
        int32_t l_287 = (-6L);
        struct S0 l_288 = {0L,9UL,0x5233B5517A028685LL};
        uint64_t l_319 = 0xA02D2D96E35F7F73LL;
        uint16_t l_339 = 65535UL;
        int i, j, k;
    }
    return l_559[1][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_28[i][j][k], "g_28[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_196.f0, "g_196.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_201[i].f0, "g_201[i].f0", print_hash_value);
        transparent_crc(g_201[i].f1, "g_201[i].f1", print_hash_value);
        transparent_crc(g_201[i].f2, "g_201[i].f2", print_hash_value);
        transparent_crc(g_201[i].f3, "g_201[i].f3", print_hash_value);

    }
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_299.f0, "g_299.f0", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_347.f0, "g_347.f0", print_hash_value);
    transparent_crc(g_347.f1, "g_347.f1", print_hash_value);
    transparent_crc(g_347.f2, "g_347.f2", print_hash_value);
    transparent_crc(g_347.f3, "g_347.f3", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_675[i][j], "g_675[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_761.f1, "g_761.f1", print_hash_value);
    transparent_crc(g_761.f2, "g_761.f2", print_hash_value);
    transparent_crc(g_840.f0, "g_840.f0", print_hash_value);
    transparent_crc(g_840.f1, "g_840.f1", print_hash_value);
    transparent_crc(g_840.f2, "g_840.f2", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_1172.f0, "g_1172.f0", print_hash_value);
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1263, "g_1263", print_hash_value);
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1374, "g_1374", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1454[i].f0, "g_1454[i].f0", print_hash_value);
        transparent_crc(g_1454[i].f1, "g_1454[i].f1", print_hash_value);
        transparent_crc(g_1454[i].f2, "g_1454[i].f2", print_hash_value);
        transparent_crc(g_1454[i].f3, "g_1454[i].f3", print_hash_value);

    }
    transparent_crc(g_1470.f0, "g_1470.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1520[i], "g_1520[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1558[i], "g_1558[i]", print_hash_value);

    }
    transparent_crc(g_1746, "g_1746", print_hash_value);
    transparent_crc(g_1752.f0, "g_1752.f0", print_hash_value);
    transparent_crc(g_1763, "g_1763", print_hash_value);
    transparent_crc(g_1765.f0, "g_1765.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1771[i][j][k], "g_1771[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1888[i], "g_1888[i]", print_hash_value);

    }
    transparent_crc(g_2140, "g_2140", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2272[i][j], "g_2272[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2273, "g_2273", print_hash_value);
    transparent_crc(g_2310, "g_2310", print_hash_value);
    transparent_crc(g_2325, "g_2325", print_hash_value);
    transparent_crc(g_2357, "g_2357", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2361[i].f0, "g_2361[i].f0", print_hash_value);
        transparent_crc(g_2361[i].f1, "g_2361[i].f1", print_hash_value);
        transparent_crc(g_2361[i].f2, "g_2361[i].f2", print_hash_value);

    }
    transparent_crc(g_3015, "g_3015", print_hash_value);
    transparent_crc(g_3067, "g_3067", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
